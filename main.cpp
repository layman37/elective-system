#include "SQL.h"
#include "Manager.h"
#include "StTable.h"
#include "CTable.h"
#include "LoginDialog.h"
#include "SC.h"
#include <QtWidgets/QApplication>
#include<qdebug.h>

char *host = "localhost";
char *user = "layman"; //�û���
char *port = "3306";
char *passwd = "456789"; //�û�����
char *dbname = "stdb"; //���ݿ���
char *charset = "utf-8"; //����
char *msg = ""; //������Ϣ

SQL *sql = new SQL;

int main(int argc, char *argv[])
{
	//��ʼ�����ݿ�
	if (sql->ConnectSQL(host, port, dbname, user, passwd, charset, msg) != 0)
	{
		qDebug()<< "Error:" << msg;
		return 0;
	}

	QApplication a(argc, argv);
	Manager w;
	LoginDialog dlg;
	StTable sttable;
	CTable ctable;
	SC s;
	dlg.show();
	QObject::connect(&dlg, SIGNAL(ManagerShow()), &w, SLOT(recv_login_manager()));
	QObject::connect(&dlg, SIGNAL(StudentShow()), &s, SLOT(recv_login_Student()));
	QObject::connect(&w, SIGNAL(dlgshow()), &dlg, SLOT(recv_back()));
	QObject::connect(&w, SIGNAL(stlshow()), &sttable, SLOT(recv_login_sttable()));
	QObject::connect(&w, SIGNAL(clshow()), &ctable, SLOT(recv_login_ctable()));
	QObject::connect(&s, SIGNAL(dlgshow()), &dlg, SLOT(recv_back()));
	QObject::connect(&s, SIGNAL(clshow()), &ctable, SLOT(recv_login_ctable()));
	return a.exec();
}
