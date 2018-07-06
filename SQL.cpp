#include "SQL.h"
#include<stdio.h>

SQL::SQL()
{
}

SQL::~SQL()
{
}

//初始化、连接数据库，设置字符集
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

//查询数据
QStringList SQL::SelectData(char *sql,char *msg)
{
	QStringList list;
	MYSQL_ROW m_row;
	MYSQL_RES *m_res;
	unsigned int num_fields;
	char query[100]; //暂存查询语句
	memset(query, 0, sizeof(query));
	sprintf(query, sql);
	//char row_end = 0x06; //行结束标志
	//char col_end = 0x05; //列结束标志
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
	num_fields = mysql_num_fields(m_res); //记录的字段数
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

//插入、修改、删除记录
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

//关闭数据库连接
void SQL::CloseSQL()
{
	mysql_close(&mysql);
}