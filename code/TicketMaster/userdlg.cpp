#include "userdlg.h"
#include "ui_userdlg.h"

UserDlg::UserDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("用户购票-");
}

UserDlg::~UserDlg()
{
    delete ui;
}
