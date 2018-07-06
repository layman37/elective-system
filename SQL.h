#ifndef SQL_H
#define SQL_H

#include<winsock.h>
#include<mysql.h>
#include<QString>
#include <QStringList>
using namespace std;

//mysql��װ��
class SQL
{
public:
	MYSQL mysql;
	SQL(); //���캯��
	~SQL(); //��������
	int ConnectSQL(char *host, char *port, char *db, char *user, char *passwd, char *charset,char * &msg); //��ʼ�����������ݿ�
	QStringList SelectData(char *sql,char *msg); //��ѯ���ݿ�
	int DealData(char *sql, char *msg); //���롢�޸ġ�ɾ����¼
	void CloseSQL(); //�ر����ݿ�����
};



#endif