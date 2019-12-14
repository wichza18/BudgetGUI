#include "gui_Category.h"
#include <string>

gui_Category::gui_Category(QWidget *parent)
	: QDialog(parent)
{

	ui.setupUi(this);
}

//constructor with string so we know what category info will fill in this gui
//gui_Category::gui_Category(std::string mainLabel)
//{
//	//gui_Category(QWidget * parent = Q_NULLPTR);
//}

gui_Category::~gui_Category()
{
}
