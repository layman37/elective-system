#include "Manager.h"
#include "SQL.h"
#include<QString>
#include<string.h>
#include<QDebug>

extern SQL *sql;
extern char *msg;

Manager::Manager(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::Manager)
{
	ui->setupUi(this);
	//设定选择按钮id
	ui->BG->setId(ui->radioButton_insert, 0);
	ui->BG->setId(ui->radioButton_update, 1);
	ui->BG->setId(ui->radioButton_delete, 2);
	ui->SG->setId(ui->radioButton_male, 0);
	ui->SG->setId(ui->radioButton_female, 1);
	ui->label_10->setVisible(false); //隐藏错误提示
	ui->label_11->setVisible(false); //隐藏成功提示
}

Manager::~Manager()
{
	delete ui;
}

//返回按钮槽函数
void Manager::back_button()
{
	this->hide();
	emit dlgshow();
}

//查看学生列表按钮槽函数
void Manager::stlist_button()
{
	ui->label_10->setVisible(false); //隐藏错误提示
	ui->label_11->setVisible(false); //隐藏成功提示
	emit stlshow();
}

//查看课程列表按钮槽函数
void Manager::clist_button()
{
	ui->label_10->setVisible(false); //隐藏错误提示
	ui->label_11->setVisible(false); //隐藏成功提示
	emit clshow();
}

//管理员页面初始化
void Manager::recv_login_manager()
{
	ui->label_10->setVisible(false);
	ui->label_11->setVisible(false);
	ui->lineEdit_cname->clear();
	ui->lineEdit_cno->clear();
	ui->lineEdit_cpno->clear();
	ui->lineEdit_credit->clear();
	ui->lineEdit_sage->clear();
	ui->lineEdit_sdept->clear();
	ui->lineEdit_sname->clear();
	ui->lineEdit_sno->clear();
	this->show();
}

//应用按钮槽函数
void Manager::apply_button()
{
	ui->label_10->setVisible(false); //隐藏错误提示
	ui->label_11->setVisible(false); //隐藏成功提示
	int Index = ui->tabWidget->currentIndex();
	QString str;
	bool new_student = false;
	/*********管理学生记录************/
	if (Index == 0)
	{
		//获取字段值
		int sex = ui->SG->checkedId();
		QString Ssex;
		if (sex == 0)
		{
			Ssex = "male";
		}
		else if (sex == 1)
		{
			Ssex = "female";
		}
		QString Sno = ui->lineEdit_sno->text();
		QString Sname = ui->lineEdit_sname->text();
		QString Sage = ui->lineEdit_sage->text();
		QString Sdept = ui->lineEdit_sdept->text();
		int a = ui->BG->checkedId(); //获取操作选项
		switch (a)
		{
		//增加学生记录
		case 0:    
		{
			//构建sql语句
			str = QString("%1('%2','%3','%4',%5,'%6')").arg("INSERT INTO student VALUES").arg(Sno).arg(Sname).arg(Ssex).arg(Sage).arg(Sdept);
			new_student = true;
			break;
		}
		//修改学生记录
		case 1:   
		{
			if (!Sname.isEmpty())
			{
				str = QString("%1'%2' %3'%4'").arg("UPDATE student SET Sname=").arg(Sname).arg("WHERE Sno=").arg(Sno);
				break;
			}
			if (!Sage.isEmpty())
			{
				str = QString("%1%2 %3'%4'").arg("UPDATE student SET Sage=").arg(Sage).arg("WHERE Sno=").arg(Sno);
				break;
			}
			if (!Ssex.isEmpty())
			{
				str = QString("%1'%2' %3'%4'").arg("UPDATE student SET Ssex=").arg(Ssex).arg("WHERE Sno=").arg(Sno);
				break;
			}
			if (!Sdept.isEmpty())
			{
				str = QString("%1'%2' %3'%4'").arg("update student set Sdept=").arg(Sdept).arg("WHERE Sno=").arg(Sno);
				break;
			}
			break;
		}
		//删除学生记录
		case 2:
		{
			str = QString("%1'%2'").arg("DELETE FROM sc WHERE Sno=").arg(Sno);
			//转换QString为char*
			QByteArray cpath = str.toLocal8Bit();
			char *p = cpath.data();
			char query[100];
			memset(query, 0, sizeof(query));
			strcpy(query, p);
			if (sql->DealData(query, msg) != 0)
			{
				qDebug() << msg;
				ui->label_10->setVisible(true); //显示错误提示
				return;
			}
			str = QString("%1'%2'").arg("DELETE FROM student WHERE Sno=").arg(Sno);
			break;
		}
		default:
			break;
		}
	}
	/*****管理课程记录*********/
	else
	{
		QString Cno = ui->lineEdit_cno->text();
		QString Cname = ui->lineEdit_cname->text();
		QString Cpno = ui->lineEdit_cpno->text();
		QString Ccredit = ui->lineEdit_credit->text();
		int a = ui->BG->checkedId(); //获取操作选项
		switch (a)
		{
		//增加课程记录
		case 0:
		{
			str = QString("%1('%2','%3','%4',%5)").arg("INSERT INTO course VALUES").arg(Cno).arg(Cname).arg(Cpno).arg(Ccredit);
			break;
		}
		//修改课程记录
		case 1:
		{
			if (!Cname.isEmpty())
			{
				str = QString("%1'%2' %3'%4'").arg("UPDATE course SET Cname=").arg(Cname).arg("WHERE Cno=").arg(Cno);
				break;
			}
			if (!Cpno.isEmpty())
			{
				str = QString("%1'%2' %3'%4'").arg("UPDATE course SET Cpno=").arg(Cpno).arg("WHERE Cno=").arg(Cno);
				break;
			}
			if (!Ccredit.isEmpty())
			{
				str = QString("%1%2 %3'%4'").arg("UPDATE course SET Ccredit=").arg(Ccredit).arg("WHERE Cno=").arg(Cno);
				break;
			}
			break;
		}
		//删除课程记录
		case 2:
		{
			str = QString("%1'%2'").arg("DELETE FROM course WHERE Cno=").arg(Cno);
			break;
		}
		default:
			break;
		}
	}
	//转换QString为char*
	QByteArray cpath = str.toLocal8Bit();
	char *p = cpath.data();
	char query[100];
	memset(query, 0, sizeof(query));
	strcpy(query, p);
	if (sql->DealData(query, msg) != 0)
	{
		qDebug() << msg;
		ui->label_10->setVisible(true); //显示错误提示
	}
	else 
	{
		if (new_student)
		{
			//选导论课
			str = QString("%1('%2','1')").arg("INSERT INTO sc(Sno,Cno) VALUES").arg(ui->lineEdit_sno->text());
			//转换QString为char*
			cpath = str.toLocal8Bit();
			p = cpath.data();
			memset(query, 0, sizeof(query));
			strcpy(query, p);
			if (sql->DealData(query, msg) != 0)
			{
				qDebug() << msg;
				ui->label_10->setVisible(true); //显示错误提示
				return;
			}
		}
		ui->label_11->setVisible(true); //显示成功提示
	}
}