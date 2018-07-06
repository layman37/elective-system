#pragma once

#include<QDialog>
#include<QButtonGroup>
#include<QMessageBox>
#include<QString>
#include<QStringList>
#include "ui_LoginDialog.h"

class LoginDialog :public QDialog
{
	Q_OBJECT

public:
	LoginDialog(QWidget *parent = Q_NULLPTR);
	~LoginDialog();
private:
	Ui::Dialog *ui;

	private slots:
	void login_button(); //登陆建槽函数
	void recv_back(); //处理返回键
signals:
	void ManagerShow(); //转入管理员页面信号
signals:
	void StudentShow(); //转入学生选课页面信号
};