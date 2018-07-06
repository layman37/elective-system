#include "CTable.h"
#include "SQL.h"
#include<QString>
#include<QStringList>
#include<QDebug>

extern SQL *sql;
extern char *msg;
extern QString id; //ѧ��ѧ��

CTable::CTable(QWidget *parent)
	: QWidget(parent),
	ui(new Ui::CTable)
{
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(4);
	ui->tableWidget->setRowCount(0);
	ui->tableWidget->setColumnWidth(0, 120);
	ui->tableWidget->setColumnWidth(1, 170);
	ui->tableWidget->setColumnWidth(2, 120);
	ui->tableWidget->setColumnWidth(3, 120);
	ui->tableWidget->setColumnWidth(4, 120);
	ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
	QHeaderView *header = ui->tableWidget->verticalHeader();
	header->setHidden(true);// �����к�  
}

CTable::~CTable()
{
	delete ui;
}

void CTable::recv_login_ctable()
{
	ui->tableWidget->clear();
	QStringList List;
	List << "No" << "Name" << "Cpno" << "Credit";
	ui->tableWidget->setHorizontalHeaderLabels(List);
	QStringList result;
	QString temp;
	QString str;
	str = "SELECT * FROM course";
	//ת��QStringΪchar*
	QByteArray cpath = str.toLocal8Bit();
	char *p = cpath.data();
	char query[100];
	memset(query, 0, sizeof(query));
	strcpy(query, p);
	result = sql->SelectData(query, msg);
	if (result.isEmpty())
	{
		qDebug() << msg;
	}
	else
	{
		int rows = result.size() / 4;
		if (rows > ui->tableWidget->rowCount())
		{
			ui->tableWidget->setRowCount(rows); //�������
		}
		for (int row = 0; row < rows; row++)
		{
			for (int col = 0; col < 4; col++)
			{
				temp = result.at(4 * row + col);
				qDebug() << temp;
				ui->tableWidget->setItem(row, col, new QTableWidgetItem(temp));  //��д�������
			}
		}
	}
	this->show();
}