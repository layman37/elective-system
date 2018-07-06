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
	void ShowMyCourse(); //��ʾ��ѡ�γ�

	private slots:
	void course_button(); //��ʾ�γ̱�ť�ۺ���
	void sc_button(); //ѡ�ΰ�ť�ۺ���
	void back_button(); //���ذ�ť�ۺ���
	void recv_login_Student();
signals:
	void dlgshow(); //���ص�½ҳ���ź�
signals:
	void clshow(); //��ʾ�γ̱�ҳ���ź�
};
