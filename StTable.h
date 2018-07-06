#pragma once

#include<QtWidgets/Qwidget>
#include "ui_StTable.h"

class StTable :public QWidget
{
	Q_OBJECT

public:
	StTable(QWidget *parent = Q_NULLPTR);
	~StTable();
private:
	Ui::StTable *ui;
	private slots:
	void recv_login_sttable(); //学生列表页面主函数
};