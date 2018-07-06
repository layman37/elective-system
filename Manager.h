#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Manager.h"

class Manager : public QMainWindow
{
	Q_OBJECT

public:
	Manager(QWidget *parent = Q_NULLPTR);
	~Manager();
private:
	Ui::Manager *ui;

	private slots:
	void back_button(); //返回键槽函数
	void apply_button(); //应用键槽函数
	void stlist_button(); //显示学生表槽函数
	void clist_button(); //显示课程表槽函数
	void recv_login_manager(); //管理员页面主函数
signals:
	void dlgshow(); //返回登陆页面信号
signals:
	void stlshow(); //显示学生表页面信号
signals:
	void clshow(); //显示课程表页面信号
};
