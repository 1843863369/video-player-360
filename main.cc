#include "mainglwindow.h"

#include <QApplication>
#include <QFileDialog>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainGLWindow w;
	w.resize(800, 600);

	QString homePath = QDir::toNativeSeparators(QDir::homePath());
	QString fileName = QFileDialog::getOpenFileName(0,
		"Open Video", homePath, "Image Files (*.mp4 *.wmv)");

	w.initializeVideo(fileName.toStdString());

	w.show();

	return a.exec();
}
