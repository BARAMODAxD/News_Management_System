#ifndef LOGIN_H
#define LOGIN_H
#include"signup.h"
#include "stdafx.h"
#include"adminx.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE
class Login : public QMainWindow
{

    Q_OBJECT

public:
    Adminx ad;
    static int UserID;
    Login(QWidget *parent = nullptr);
    ~Login();

public slots:
    void close_window();
    void show_window();
    bool write_Data();
    bool Log_Admin();


private slots:
    void on_pushButton_Exit_clicked();

    void on_pushButton_Login_clicked();

private:
    Ui::Login *ui;
    SignUP *sign=new SignUP;
};
#endif // LOGIN_H