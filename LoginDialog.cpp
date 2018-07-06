#include "LoginDialog.h"
#include "SQL.h"

extern SQL *sql;
extern char *msg;
QString id; //ѧ��ѧ��
QString name; //ѧ������

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::Dialog)
{
	ui->setupUi(this);
	ui->BG->setId(ui->radioButton, 0);
	ui->BG->setId(ui->radioButton_2, 1);
	ui->radioButton_2->setChecked(true);
	ui->label_2->setVisible(false); //���ش�����Ϣ
}

LoginDialog::~LoginDialog()
{
	delete ui;
}

//��½���ۺ���
void LoginDialog::login_button()
{
	int a = ui->BG->checkedId();
	ui->label_2->setVisible(false); 
	switch (a)
	{
	case 0: 
	{
		if (ui->lineEdit->text() == QString("admin")) {

			this->hide();
			emit ManagerShow(); //ת������Աҳ��
			break;
		}
		else
		{
			ui->label_2->setVisible(true); //��ʾ������Ϣ
			break;
		}
		break;
	}
	case 1:
	{
		id = ui->lineEdit->text();
		QString str = QString("%1'%2'").arg("SELECT Sname FROM student WHERE Sno=").arg(id);
		//ת��QStringΪchar*
		QByteArray cpath = str.toLocal8Bit();
		char *p = cpath.data();
		char query[100];
		memset(query, 0, sizeof(query));
		strcpy(query, p);
		QStringList result = sql->SelectData(query, msg);
		if (result.isEmpty())
		{
			ui->label_2->setVisible(true); //��ʾ������Ϣ
			break;
		}
		name = result.at(0);
		this->hide();
		emit StudentShow(); //ת��ѧ��ҳ��
		break;
	}	
	default:
		break;
	}
}

//���ؼ�����
void LoginDialog::recv_back()
{
	this->show();
}