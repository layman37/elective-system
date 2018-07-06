#include "SC.h"
#include "SQL.h"
#include<QString>
#include<QStringList>
#include<QDebug>

extern SQL *sql;
extern char *msg;
extern QString id; //ѧ��ѧ��
extern QString name; //ѧ������

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

//���ص�½ҳ�水ť�ۺ���
void SC::back_button()
{
	this->hide();
	emit dlgshow();
}

//��ʾ�γ̱�ť�ۺ���
void SC::course_button()
{
	emit clshow();
}

//��ʾ��ѡ�γ��б�
void SC::ShowMyCourse()
{
	QStringList result;
	QString temp;
	QString str;
	str = QString("SELECT sc.Cno,Cname FROM sc,course WHERE sc.Sno='%1' AND sc.Cno=course.Cno").arg(id);
	//ת��QStringΪchar*
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
			ui->tableWidget->setRowCount(rows); //�������
		}
		for (int row = 0; row < rows; row++)
		{
			for (int col = 0; col < 2; col++)
			{
				temp = result.at(2 * row + col);
				qDebug() << temp;
				ui->tableWidget->setItem(row, col, new QTableWidgetItem(temp));  //��д�������
			}
		}
	}
}

//ѡ��ҳ���ʼ��
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
	header->setHidden(true);// �����к�  
	ShowMyCourse();
	this->show();
}

//ѡ�ΰ�ť�ۺ���
void SC::sc_button()
{
	ui->label_error->setVisible(false);
	ui->label_success->setVisible(false);

	QString cno = ui->lineEdit->text(); //�γ̱��
	QString cpno; //���пγ̱��
	QString str = QString("%1'%2'").arg("SELECT Cpno FROM course WHERE Cno=").arg(cno);
	//ת��QStringΪchar*
	QByteArray cpath = str.toLocal8Bit();
	char *p = cpath.data();
	char query[100];
	memset(query, 0, sizeof(query));
	strcpy(query, p);
	QStringList result = sql->SelectData(query, msg);
	if (result.isEmpty())
	{
		ui->label_error->setVisible(true); //��ʾ������Ϣ
	}
	else
	{
		//�鿴�Ƿ��������޿γ�Ҫ��
		cpno = result.at(0);
		str = QString("%1'%2'%3'%4'").arg("SELECT * FROM SC WHERE Cno=").arg(cpno).arg(" AND Sno=").arg(id);
		//ת��QStringΪchar*
		cpath = str.toLocal8Bit();
		p = cpath.data();
		memset(query, 0, sizeof(query));
		strcpy(query, p);
		result = sql->SelectData(query, msg);
		if (result.isEmpty())
		{
			ui->label_error->setVisible(true); //��ʾ������Ϣ
			return; //�����㣬�˳�
		}

		//����ѡ�α��¼
		str = QString("%1('%2','%3')").arg("INSERT INTO sc(Sno,Cno) VALUES").arg(id).arg(cno);
		//ת��QStringΪchar*
		cpath = str.toLocal8Bit();
		p = cpath.data();
		memset(query, 0, sizeof(query));
		strcpy(query, p);
		if (sql->DealData(query, msg) != 0)
		{
			qDebug() << msg;
			ui->label_error->setVisible(true); //��ʾ������Ϣ
		}
		else
		{
			ui->label_success->setVisible(true); //��ʾ�ɹ���ʾ
			ShowMyCourse(); //������ѡ�γ�
		}
	}
}