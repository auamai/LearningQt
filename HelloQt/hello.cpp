#include<QtWidgets/QApplication>
#include<QtWidgets/QLabel>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	QLabel* label = new QLabel("");
	label->show();
	return app.exec();
}