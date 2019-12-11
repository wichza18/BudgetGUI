#include "gui_Login.h"
#include "gui_Category.h"
#include <QtWidgets/QApplication>

int main1(int argc, char *argv[])
{
	QApplication a(argc, argv);
	gui_Login w;
	w.show();
	return a.exec();
}
