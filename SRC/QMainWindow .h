#ifndef Q_MAIN_WINDOW _H
#define Q_MAIN_WINDOW _H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MainWindow.h"
#include "AdminDialog.h"
#include "QMenuBar.h"
#include "QStatusBar.h"
#include "QWidget.h"

class QMainWindow  : public MainWindow
{
private:
	AdminDialog adminDialog;

protected:
	QMenuBar menuBar();

	QStatusBar statusBar();

	QWidget centralWidget();

};
#endif
