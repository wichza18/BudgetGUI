#pragma once

#include <QWidget>
#include <QPushButton>
#include "ui_gui_Login.h"

namespace Ui { class gui_Login; }

class gui_Login : public QWidget
{
	Q_OBJECT

public:
	gui_Login(QWidget *parent = Q_NULLPTR);
	//void gui_Login::on_pushButton_Login_clicked();
	~gui_Login();

private:
	Ui::gui_Login ui;
	QPushButton *loginButton;
	QPushButton *unhideButton;
	QLineEdit *usernameLine;
	QLineEdit *passwordLine;
	//void gui_Login::flipHiddenPassword();

private slots:
	void unhidePressed();
	void loginPressed();
	//void keyEntered(QLineEdit eventSpace);
};
