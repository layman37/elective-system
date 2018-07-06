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
	void back_button(); //���ؼ��ۺ���
	void apply_button(); //Ӧ�ü��ۺ���
	void stlist_button(); //��ʾѧ����ۺ���
	void clist_button(); //��ʾ�γ̱�ۺ���
	void recv_login_manager(); //����Աҳ��������
signals:
	void dlgshow(); //���ص�½ҳ���ź�
signals:
	void stlshow(); //��ʾѧ����ҳ���ź�
signals:
	void clshow(); //��ʾ�γ̱�ҳ���ź�
};
