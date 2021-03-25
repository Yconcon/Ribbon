#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H



#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = Q_NULLPTR);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;
};

#endif // !MAINWINDOW_H