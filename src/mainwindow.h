#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
        MainWindow(QWidget *parent = 0, Qt::WindowFlags = 0);

private:
        void setupMenuBar();
};

#endif // MAINWINDOW_H
