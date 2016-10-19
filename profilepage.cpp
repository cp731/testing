#include "profilepage.h"
#include "ui_profilepage.h"

EmployeeInfo::EmployeeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmployeeInfo)
{
    ui->setupUi(this);

  ui->label->setText("Hello");
  //ui->label->setText(QString::fromStdString("username"));

}

EmployeeInfo::~EmployeeInfo()
{
    delete ui;
}

void EmployeeInfo::setUser(QString new_username){

    username = new_username;


}
