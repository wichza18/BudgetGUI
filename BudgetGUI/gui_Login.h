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
	~gui_Login();

private:
	Ui::gui_Login ui;
	QPushButton *loginButton;
	QPushButton *unhideButton;
	QLineEdit *usernameLine;
	QLineEdit *passwordLine;

private slots:
	void unhidePressed();
	void loginPressed();

};
