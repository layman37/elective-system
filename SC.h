#pragma once

#include<QtWidgets/QMainWindow>
#include "ui_SC.h"

class SC:public QMainWindow
{
	Q_OBJECT

public:
	SC(QWidget *parent = Q_NULLPTR);
	~SC();
private:
	Ui::SC *ui;
	void ShowMyCourse(); //显示已选课程

	private slots:
	void course_button(); //显示课程表按钮槽函数
	void sc_button(); //选课按钮槽函数
	void back_button(); //返回按钮槽函数
	void recv_login_Student();
signals:
	void dlgshow(); //返回登陆页面信号
signals:
	void clshow(); //显示课程表页面信号
};
