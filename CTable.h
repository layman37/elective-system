#pragma once

#include<QtWidgets/Qwidget>
#include "ui_CTable.h"

class CTable :public QWidget
{
	Q_OBJECT

public:
	CTable(QWidget *parent = Q_NULLPTR);
	~CTable();
private:
	Ui::CTable *ui;
	private slots:
	void recv_login_ctable(); //学生列表页面主函数
};