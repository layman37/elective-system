#include "SC.h"
#include "SQL.h"
#include<QString>
#include<QStringList>
#include<QDebug>

extern SQL *sql;
extern char *msg;
extern QString id; //学生学号
extern QString name; //学生名字

SC::SC(QWidget *parent)
	:QMainWindow(parent),
	ui(new Ui::SC)
{
	ui->setupUi(this);
}

SC::~SC()
{
	delete ui;
}

//返回登陆页面按钮槽函数
void SC::back_button()
{
	this->hide();
	emit dlgshow();
}

//显示课程表按钮槽函数
void SC::course_button()
{
	emit clshow();
}

//显示已选课程列表
void SC::ShowMyCourse()
{
	QStringList result;
	QString temp;
	QString str;
	str = QString("SELECT sc.Cno,Cname FROM sc,course WHERE sc.Sno='%1' AND sc.Cno=course.Cno").arg(id);
	//转换QString为char*
	QByteArray cpath = str.toLocal8Bit();
	char *p = cpath.data();
	char query[100];
	memset(query, 0, sizeof(query));
	strcpy(query, p);
	result = sql->SelectData(query, msg);
	if (result.isEmpty())
	{
		qDebug() << msg;
	}
	else
	{
		int rows = result.size() / 2;
		if (rows > ui->tableWidget->rowCount())
		{
			ui->tableWidget->setRowCount(rows); //添加新行
		}
		for (int row = 0; row < rows; row++)
		{
			for (int col = 0; col < 2; col++)
			{
				temp = result.at(2 * row + col);
				qDebug() << temp;
				ui->tableWidget->setItem(row, col, new QTableWidgetItem(temp));  //填写表格数据
			}
		}
	}
}

//选课页面初始化
void SC::recv_login_Student()
{
	ui->lineEdit->clear();
	ui->label_no->setText(id);
	ui->label_name->setText(name);
	ui->label_error->setVisible(false);
	ui->label_success->setVisible(false);
	ui->tableWidget->setColumnCount(2);
	ui->tableWidget->setRowCount(0);
	QStringList List;
	List << "No" << "Course Name";
	ui->tableWidget->setHorizontalHeaderLabels(List);
	ui->tableWidget->setColumnWidth(0, 150);
	ui->tableWidget->setColumnWidth(1, 190);
	ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
	QHeaderView *header = ui->tableWidget->verticalHeader();
	header->setHidden(true);// 隐藏行号  
	ShowMyCourse();
	this->show();
}

//选课按钮槽函数
void SC::sc_button()
{
	ui->label_error->setVisible(false);
	ui->label_success->setVisible(false);

	QString cno = ui->lineEdit->text(); //课程编号
	QString cpno; //先行课程编号
	QString str = QString("%1'%2'").arg("SELECT Cpno FROM course WHERE Cno=").arg(cno);
	//转换QString为char*
	QByteArray cpath = str.toLocal8Bit();
	char *p = cpath.data();
	char query[100];
	memset(query, 0, sizeof(query));
	strcpy(query, p);
	QStringList result = sql->SelectData(query, msg);
	if (result.isEmpty())
	{
		ui->label_error->setVisible(true); //显示错误信息
	}
	else
	{
		//查看是否满足先修课程要求
		cpno = result.at(0);
		str = QString("%1'%2'%3'%4'").arg("SELECT * FROM SC WHERE Cno=").arg(cpno).arg(" AND Sno=").arg(id);
		//转换QString为char*
		cpath = str.toLocal8Bit();
		p = cpath.data();
		memset(query, 0, sizeof(query));
		strcpy(query, p);
		result = sql->SelectData(query, msg);
		if (result.isEmpty())
		{
			ui->label_error->setVisible(true); //显示错误信息
			return; //不满足，退出
		}

		//插入选课表记录
		str = QString("%1('%2','%3')").arg("INSERT INTO sc(Sno,Cno) VALUES").arg(id).arg(cno);
		//转换QString为char*
		cpath = str.toLocal8Bit();
		p = cpath.data();
		memset(query, 0, sizeof(query));
		strcpy(query, p);
		if (sql->DealData(query, msg) != 0)
		{
			qDebug() << msg;
			ui->label_error->setVisible(true); //显示错误信息
		}
		else
		{
			ui->label_success->setVisible(true); //显示成功提示
			ShowMyCourse(); //更新已选课程
		}
	}
}