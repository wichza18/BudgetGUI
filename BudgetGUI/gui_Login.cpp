#include <QWidget>
#include "gui_Login.h"
#include "ui_gui_Login.h"

#include "qpushbutton.h"
#include "gui_Budget.h"
#include "gui_Category.h"


std::string username = ""; //class level username to store user input
std::string password = ""; //class level password to store user input


gui_Login::gui_Login(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	
	//QStrings so we can define objects off of their name
	//buttons
	const QString loginButtonName = "button_Login";
	const QString unhideButtonName = "button_Unhide";
	//lineEdits
	const QString usernameLineName = "lineEdit_Username";
	const QString passwordLineName = "lineEdit_Password";

	//get the different objects in the UI defined based on their object name
	loginButton = gui_Login::findChild<QPushButton *>(loginButtonName, Qt::FindChildrenRecursively);
	unhideButton = gui_Login::findChild<QPushButton *>(unhideButtonName, Qt::FindChildrenRecursively);
	usernameLine = gui_Login::findChild<QLineEdit *>(usernameLineName, Qt::FindChildrenRecursively);
	passwordLine = gui_Login::findChild<QLineEdit *>(passwordLineName, Qt::FindChildrenRecursively);

	//set up slots for buttons - this is how to trigger an event on a button
	connect(loginButton, SIGNAL (released()), this, SLOT (loginPressed()));
	connect(unhideButton, SIGNAL(released()), this, SLOT(unhidePressed()));

	
}

gui_Login::~gui_Login()
{
}


void gui_Login::unhidePressed()
{
	passwordLine->setEchoMode(QLineEdit::Normal);
	
}

void gui_Login::loginPressed()
{
	//qstring to get value from our lineEdits
	QString usernameText = usernameLine->text();
	QString passwordText = passwordLine->text();

	//convert qstrings to strings
	username = usernameText.toStdString();
	password = passwordText.toStdString();

	//**need to add function here to query user from database
	//query user from database

	//wanted to include Budget class in gui_Budget constructor but that was causing issues
	gui_Budget budgetUI;
	budgetUI.setModal(true);
	budgetUI.exec();
}