#include "SQL.h"
#include<stdio.h>

SQL::SQL()
{
}

SQL::~SQL()
{
}

//��ʼ�����������ݿ⣬�����ַ���
int SQL::ConnectSQL(char *host, char *port, char *db, char *user, char *passwd, char *charset,char * &msg)
{
	if (mysql_init(&mysql) == NULL)
	{
		msg = "init mysql error";
		return 1;
	}
	if (mysql_real_connect(&mysql, host, user, passwd, db, 3306, NULL, 0) == NULL)
	{
		msg = "connect mysql error";
		return 1;
	}
	return 0;
}

//��ѯ����
QStringList SQL::SelectData(char *sql,char *msg)
{
	QStringList list;
	MYSQL_ROW m_row;
	MYSQL_RES *m_res;
	unsigned int num_fields;
	char query[100]; //�ݴ��ѯ���
	memset(query, 0, sizeof(query));
	sprintf(query, sql);
	//char row_end = 0x06; //�н�����־
	//char col_end = 0x05; //�н�����־
	if (mysql_query(&mysql, query) != 0)
	{
		msg = "mysql_query error";
		return list;
	}
	m_res = mysql_store_result(&mysql);
	if (m_res == NULL)
	{
		msg = "mysql_store_result error";
		return list;
	}
	num_fields = mysql_num_fields(m_res); //��¼���ֶ���
	while (m_row = mysql_fetch_row(m_res))
	{
		for (int i = 0; i < num_fields; i++)
		{
			list << m_row[i];
			//str += col_end;
		}
		//str += row_end;
	}
	mysql_free_result(m_res);
	return list;
}

//���롢�޸ġ�ɾ����¼
int SQL::DealData(char *sql, char *msg)
{
	char query[100];
	memset(query, 0, sizeof(query));
	sprintf(query, sql);
	if (mysql_query(&mysql, query) != 0)
	{
		msg = "insert data error";
		return 1;
	}
	return 0;
}

//�ر����ݿ�����
void SQL::CloseSQL()
{
	mysql_close(&mysql);
}