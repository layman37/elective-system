#ifndef SQL_H
#define SQL_H

#include<winsock.h>
#include<mysql.h>
#include<QString>
#include <QStringList>
using namespace std;

//mysql封装类
class SQL
{
public:
	MYSQL mysql;
	SQL(); //构造函数
	~SQL(); //析构函数
	int ConnectSQL(char *host, char *port, char *db, char *user, char *passwd, char *charset,char * &msg); //初始化，连接数据库
	QStringList SelectData(char *sql,char *msg); //查询数据库
	int DealData(char *sql, char *msg); //插入、修改、删除记录
	void CloseSQL(); //关闭数据库连接
};



#endif