#include "gui_Budget.h"
#include "gui_Category.h"

//class level variable as all budget layouts will have these button names
const int numOfButtons = 9;
const QString buttonNames[numOfButtons] = { "button_Budget_Auto", "button_Budget_Education", "button_Budget_Entertainment",
							"button_Budget_Food", "button_Budget_Home", "button_Budget_Personal",
							"button_Budget_Shopping", "button_Budget_Travel", "button_Budget_Utility" };

gui_Budget::gui_Budget(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//prepareButtons(); - this didn't work like I wanted

	

	//QStrings so we can define objects off of their name
	//buttons
	const QString autoName = "button_Budget_Auto";
	
	autoButton = gui_Budget::findChild<QPushButton *>(autoName, Qt::FindChildrenRecursively);
	connect(autoButton, SIGNAL(released()), this, SLOT(updatePressed()));

}

gui_Budget::~gui_Budget()
{
}

//prepare all of our buttons to look for clicks
//this way was not working, will have to use hardcoded QPushButton variables commented out in .h
void gui_Budget::prepareButtons()
{
	for (int i = 0; i < numOfButtons; i++)
	{
		arrButtons[i] = gui_Budget::findChild<QPushButton*>(buttonNames[i], Qt::FindChildrenRecursively);
		connect(arrButtons[i], SIGNAL(released()), this, SLOT(updatePressed()));
	}
}

void gui_Budget::updatePressed()
{
	//** Want to get something here where we can feed the correct Category Class into gui_Category

	//convert qstring to string
	//std::string buttonName = butName.toStdString();
	//std::string mainLabel = "";
	////call category gui with proper info
	//if (buttonName == "button_Budget_Auto")
	//{
	//	mainLabel = "Auto/Transport";
	//}
	//else
	//{
	//	mainLabel = "Education";
	//}

	gui_Category categoryUI;
	categoryUI.setModal(true);
	categoryUI.exec();
}
