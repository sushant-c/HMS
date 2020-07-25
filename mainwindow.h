#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QLabel>
#include <QFont>
#include <QPushButton>
#include <QLayout>
#include <QBoxLayout>
#include <QLineEdit>
#include <QMovie>
#include <QtWidgets>
#include <QSizePolicy>

class QAction;
class QActionGroup;
class QLabel;
class QMenu;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void loggedIn();

// SLOTS
private slots:
    void loginScreen();
    void homeScreen();
    void dashboard();
    void loginButton_clicked();
    void save();
    void contact();
    void question();
    void style();
    void Package();
    void Bill();
    void Customer();
    void Room();


private:
    QLineEdit *emailText;
    QLineEdit *passwordText;
    QWidget *rightside;
    void Action();
    void MenuItem();

    QMenu *file;
    QMenu *help;
    QMenu *about;
    QAction *saveAct;
    QAction *contactAct;
    QAction *QuesAct;
    QFormLayout *main_layout ;
    QLabel *managerLabel;
    QLabel *infoLabel;
    QPushButton *managerBtn ;
    QLabel *label;



};

#endif // MAINWINDOW_H
