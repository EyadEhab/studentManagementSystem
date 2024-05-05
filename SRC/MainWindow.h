#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "QMenuBar.h"
#include "QMenu.h"

class MainWindow
{
private:
	QMenuBar menuBar;

	QMenu fileMenu;

	QMenu userMenu;


public:
	void MainWindow();

	void createMenus();

	void showAboutDialog();

	void showAdminDialog();

	void showInstructorDialog();

	void showStudentDialog();

};
#endif
