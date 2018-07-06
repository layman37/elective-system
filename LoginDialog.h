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
	void login_button(); //��½���ۺ���
	void recv_back(); //�����ؼ�
signals:
	void ManagerShow(); //ת�����Աҳ���ź�
signals:
	void StudentShow(); //ת��ѧ��ѡ��ҳ���ź�
};