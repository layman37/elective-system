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
	//�趨ѡ��ťid
	ui->BG->setId(ui->radioButton_insert, 0);
	ui->BG->setId(ui->radioButton_update, 1);
	ui->BG->setId(ui->radioButton_delete, 2);
	ui->SG->setId(ui->radioButton_male, 0);
	ui->SG->setId(ui->radioButton_female, 1);
	ui->label_10->setVisible(false); //���ش�����ʾ
	ui->label_11->setVisible(false); //���سɹ���ʾ
}

Manager::~Manager()
{
	delete ui;
}

//���ذ�ť�ۺ���
void Manager::back_button()
{
	this->hide();
	emit dlgshow();
}

//�鿴ѧ���б�ť�ۺ���
void Manager::stlist_button()
{
	ui->label_10->setVisible(false); //���ش�����ʾ
	ui->label_11->setVisible(false); //���سɹ���ʾ
	emit stlshow();
}

//�鿴�γ��б�ť�ۺ���
void Manager::clist_button()
{
	ui->label_10->setVisible(false); //���ش�����ʾ
	ui->label_11->setVisible(false); //���سɹ���ʾ
	emit clshow();
}

//����Աҳ���ʼ��
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

//Ӧ�ð�ť�ۺ���
void Manager::apply_button()
{
	ui->label_10->setVisible(false); //���ش�����ʾ
	ui->label_11->setVisible(false); //���سɹ���ʾ
	int Index = ui->tabWidget->currentIndex();
	QString str;
	bool new_student = false;
	/*********����ѧ����¼************/
	if (Index == 0)
	{
		//��ȡ�ֶ�ֵ
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
		int a = ui->BG->checkedId(); //��ȡ����ѡ��
		switch (a)
		{
		//����ѧ����¼
		case 0:    
		{
			//����sql���
			str = QString("%1('%2','%3','%4',%5,'%6')").arg("INSERT INTO student VALUES").arg(Sno).arg(Sname).arg(Ssex).arg(Sage).arg(Sdept);
			new_student = true;
			break;
		}
		//�޸�ѧ����¼
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
		//ɾ��ѧ����¼
		case 2:
		{
			str = QString("%1'%2'").arg("DELETE FROM sc WHERE Sno=").arg(Sno);
			//ת��QStringΪchar*
			QByteArray cpath = str.toLocal8Bit();
			char *p = cpath.data();
			char query[100];
			memset(query, 0, sizeof(query));
			strcpy(query, p);
			if (sql->DealData(query, msg) != 0)
			{
				qDebug() << msg;
				ui->label_10->setVisible(true); //��ʾ������ʾ
				return;
			}
			str = QString("%1'%2'").arg("DELETE FROM student WHERE Sno=").arg(Sno);
			break;
		}
		default:
			break;
		}
	}
	/*****����γ̼�¼*********/
	else
	{
		QString Cno = ui->lineEdit_cno->text();
		QString Cname = ui->lineEdit_cname->text();
		QString Cpno = ui->lineEdit_cpno->text();
		QString Ccredit = ui->lineEdit_credit->text();
		int a = ui->BG->checkedId(); //��ȡ����ѡ��
		switch (a)
		{
		//���ӿγ̼�¼
		case 0:
		{
			str = QString("%1('%2','%3','%4',%5)").arg("INSERT INTO course VALUES").arg(Cno).arg(Cname).arg(Cpno).arg(Ccredit);
			break;
		}
		//�޸Ŀγ̼�¼
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
		//ɾ���γ̼�¼
		case 2:
		{
			str = QString("%1'%2'").arg("DELETE FROM course WHERE Cno=").arg(Cno);
			break;
		}
		default:
			break;
		}
	}
	//ת��QStringΪchar*
	QByteArray cpath = str.toLocal8Bit();
	char *p = cpath.data();
	char query[100];
	memset(query, 0, sizeof(query));
	strcpy(query, p);
	if (sql->DealData(query, msg) != 0)
	{
		qDebug() << msg;
		ui->label_10->setVisible(true); //��ʾ������ʾ
	}
	else 
	{
		if (new_student)
		{
			//ѡ���ۿ�
			str = QString("%1('%2','1')").arg("INSERT INTO sc(Sno,Cno) VALUES").arg(ui->lineEdit_sno->text());
			//ת��QStringΪchar*
			cpath = str.toLocal8Bit();
			p = cpath.data();
			memset(query, 0, sizeof(query));
			strcpy(query, p);
			if (sql->DealData(query, msg) != 0)
			{
				qDebug() << msg;
				ui->label_10->setVisible(true); //��ʾ������ʾ
				return;
			}
		}
		ui->label_11->setVisible(true); //��ʾ�ɹ���ʾ
	}
}