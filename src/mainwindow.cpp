#include "mainwindow.h"

#include <QAction>
#include <QLayout>
#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent, Qt::WindowFlags flags) : QMainWindow(parent, flags) {
    setObjectName("MainWindow");
    setWindowTitle("4D Multilayer Viewer");

    setupMenuBar();
}

void MainWindow::setupMenuBar() {

    QMenu *menu = menuBar()->addMenu(tr("&File"));
    QAction *action = menu->addAction(tr("Open File"), this, SLOT(), QKeySequence("CTRL+O"));

    menu->addSeparator();

    action = menu->addAction(tr("Save File"), this, SLOT(), QKeySequence("CTRL+S"));
    action = menu->addAction(tr("Save File As.."), this, SLOT(), QKeySequence("CTRL+SHIFT+S"));

    menu->addSeparator();
    action = menu->addAction(tr("Quit"), this, SLOT(close()), QKeySequence("CTRL+Q"));

}



