#pragma once

#include <QDialog>
//#include "ui_gui_Budget.h"
#include "ui_gui_Budget.h"


class gui_Budget : public QDialog
{
	Q_OBJECT

public:
	gui_Budget(QWidget *parent = Q_NULLPTR);
	~gui_Budget();

private:
	Ui::gui_Budget ui;
	//tried using arrays to define buttons in a loop/function (prepareButtons), couldn't get the assignment to work
	QString buttonNames[9];
	QPushButton *arrButtons[9];
	//QGroupBox *autoGroupBox;
	QPushButton *autoButton; //added for testing
	/*QPushButton *educationButton;
	QPushButton *entertainmentButton;
	QPushButton *foodButton;
	QPushButton *homeButton;
	QPushButton *personalButton;
	QPushButton *shoppingButton;
	QPushButton *travelButton;
	QPushButton *utilityButton;*/
	void prepareButtons();

private slots:
	void updatePressed();
};
