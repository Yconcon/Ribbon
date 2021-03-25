/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <ribbon.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QOpenGLWidget *openGLWidget;
    QWidget *tab_4;
    QStatusBar *statusBar;
    QDockWidget *ribbonDockWidget;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout;
    Ribbon *ribbonTabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_5;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(600, 400);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        openGLWidget = new QOpenGLWidget(tab_3);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(9, 9, 451, 201));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());

        gridLayout_4->addWidget(tabWidget_2, 0, 0, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);
        ribbonDockWidget = new QDockWidget(MainWindowClass);
        ribbonDockWidget->setObjectName(QString::fromUtf8("ribbonDockWidget"));
        ribbonDockWidget->setFeatures(QDockWidget::NoDockWidgetFeatures);
        ribbonDockWidget->setAllowedAreas(Qt::TopDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        gridLayout = new QGridLayout(dockWidgetContents_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ribbonTabWidget = new Ribbon(dockWidgetContents_2);
        ribbonTabWidget->setObjectName(QString::fromUtf8("ribbonTabWidget"));
        ribbonTabWidget->setStyleSheet(QString::fromUtf8(""));
        ribbonTabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        ribbonTabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        ribbonTabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(ribbonTabWidget, 0, 0, 1, 1);

        ribbonDockWidget->setWidget(dockWidgetContents_2);
        MainWindowClass->addDockWidget(Qt::TopDockWidgetArea, ribbonDockWidget);
        dockWidget_2 = new QDockWidget(MainWindowClass);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout_2 = new QGridLayout(dockWidgetContents_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_3);
        MainWindowClass->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_2);
        dockWidget_4 = new QDockWidget(MainWindowClass);
        dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        gridLayout_3 = new QGridLayout(dockWidgetContents_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(dockWidgetContents_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        dockWidget_4->setWidget(dockWidgetContents_5);
        MainWindowClass->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_4);

        retranslateUi(MainWindowClass);

        tabWidget_2->setCurrentIndex(0);
        ribbonTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindowClass", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindowClass", "Tab 2", nullptr));
        ribbonDockWidget->setWindowTitle(QCoreApplication::translate("MainWindowClass", "Ribbon", nullptr));
        ribbonTabWidget->setTabText(ribbonTabWidget->indexOf(tab), QCoreApplication::translate("MainWindowClass", "Tab 1", nullptr));
        ribbonTabWidget->setTabText(ribbonTabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindowClass", "Tab 2", nullptr));
        label->setText(QCoreApplication::translate("MainWindowClass", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
