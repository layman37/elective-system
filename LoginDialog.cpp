#include "LoginDialog.h"
#include "SQL.h"

extern SQL *sql;
extern char *msg;
QString id; //学生学号
QString name; //学生姓名

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent),
	ui(new Ui::Dialog)
{
	ui->setupUi(this);
	ui->BG->setId(ui->radioButton, 0);
	ui->BG->setId(ui->radioButton_2, 1);
	ui->radioButton_2->setChecked(true);
	ui->label_2->setVisible(false); //隐藏错误信息
}

LoginDialog::~LoginDialog()
{
	delete ui;
}

//登陆键槽函数
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
			emit ManagerShow(); //转到教务员页面
			break;
		}
		else
		{
			ui->label_2->setVisible(true); //显示错误信息
			break;
		}
		break;
	}
	case 1:
	{
		id = ui->lineEdit->text();
		QString str = QString("%1'%2'").arg("SELECT Sname FROM student WHERE Sno=").arg(id);
		//转换QString为char*
		QByteArray cpath = str.toLocal8Bit();
		char *p = cpath.data();
		char query[100];
		memset(query, 0, sizeof(query));
		strcpy(query, p);
		QStringList result = sql->SelectData(query, msg);
		if (result.isEmpty())
		{
			ui->label_2->setVisible(true); //显示错误信息
			break;
		}
		name = result.at(0);
		this->hide();
		emit StudentShow(); //转到学生页面
		break;
	}	
	default:
		break;
	}
}

//返回键处理
void LoginDialog::recv_back()
{
	this->show();
}