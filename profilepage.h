#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>
#include <string>

namespace Ui {
class EmployeeInfo;
}

class EmployeeInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeInfo(QWidget *parent = 0);
    ~EmployeeInfo();

    void setUser(QString username);

private slots:

private:
    Ui::EmployeeInfo *ui;
    QString username;
};

#endif // EMPLOYEEINFO_H
