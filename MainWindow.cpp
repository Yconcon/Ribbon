#include "MainWindow.h"
#include <qmenu.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui = new Ui::MainWindowClass();
    ui->setupUi(this);

    ui->ribbonDockWidget->setTitleBarWidget(new QWidget());
    
    ui->ribbonTabWidget->addTab(QIcon("./icons/briefcase_1.svg"), "Project");
    ui->ribbonTabWidget->addTab(QIcon("./icons/monitor_1.svg"), "View");
    ui->ribbonTabWidget->addTab(QIcon("./icons/engineering_1.svg"), "Tools");
    ui->ribbonTabWidget->addTab(QIcon("./icons/information_1.svg"), "Help");

    QToolButton* openProjectButton = new QToolButton;
    openProjectButton->setText(tr("Open"));
    openProjectButton->setToolTip(tr("Open existing project"));
    openProjectButton->setIcon(QIcon("./icons/live_folder_2.svg"));
    openProjectButton->setEnabled(true);
    ui->ribbonTabWidget->addButton("Project", "Project", openProjectButton);

    QToolButton* newProjectButton = new QToolButton;
    newProjectButton->setText(tr("New"));
    newProjectButton->setToolTip(tr("Create new project"));
    newProjectButton->setIcon(QIcon("./icons/create_new_2.svg"));
    newProjectButton->setEnabled(true);
    ui->ribbonTabWidget->addButton("Project", "Project", newProjectButton);

    QToolButton* saveProjectButton = new QToolButton;
    saveProjectButton->setText(tr("Save"));
    saveProjectButton->setToolTip(tr("Save project"));
    saveProjectButton->setIcon(QIcon("./icons/save_2.svg"));
    saveProjectButton->setEnabled(false);
    ui->ribbonTabWidget->addButton("Project", "Project", saveProjectButton);

    // Add 'Open file' button
    QToolButton* openFileButton = new QToolButton(this);
    openFileButton->setText(tr("File"));
    openFileButton->setToolTip(tr("Open file or directory"));
    openFileButton->setIcon(QIcon("./icons/add_folder_2.svg"));

    // Add dropdown menu to button
    openFileButton->setPopupMode(QToolButton::MenuButtonPopup);
    QMenu* menu = new QMenu("Title");
    //menu->addAction(QIcon(":/icons/folder_2.svg"),
    //                "Recent directory");
    menu->addAction(QIcon("./icons/file_2.svg"), "Recent file 1");
    menu->addAction(QIcon("./icons/file_2.svg"), "Recent file 2");
    menu->addAction(QIcon("./icons/file_2.svg"), "Recent file 3");
    openFileButton->setMenu(menu);

    ui->ribbonTabWidget->addButton("Project", "Import", openFileButton);

    QToolButton* openDatabaseButton = new QToolButton;
    openDatabaseButton->setText(tr("Database"));
    openDatabaseButton->setToolTip(tr("Connect to database"));
    openDatabaseButton->setIcon(QIcon("./icons/add_database_2.svg"));
    ui->ribbonTabWidget->addButton("Project", "Import", openDatabaseButton);

    QToolButton* connectWebserviceButton = new QToolButton;
    connectWebserviceButton->setText(tr("Web service"));
    connectWebserviceButton->setToolTip(tr("Connect to web service"));
    connectWebserviceButton->setIcon(QIcon("./icons/add_link_2.svg"));
    ui->ribbonTabWidget->addButton("Project", "Import", connectWebserviceButton);

    QToolButton* testButton0 = new QToolButton;
    testButton0->setText(tr("Web service"));
    testButton0->setToolTip(tr("Connect to web service"));
    testButton0->setIcon(QIcon("./icons/add_link_2.svg"));
    ui->ribbonTabWidget->addVerticalButton("View", "click", testButton0);

    QToolButton* testButton1 = new QToolButton;
    testButton1->setText(tr("Web service"));
    testButton1->setToolTip(tr("Connect to web service"));
    testButton1->setIcon(QIcon("./icons/add_link_2.svg"));
    ui->ribbonTabWidget->addVerticalButton("View", "click", testButton1);

    QToolButton* testButton2 = new QToolButton;
    testButton2->setText(tr("Web service"));
    testButton2->setToolTip(tr("Connect to web service"));
    testButton2->setIcon(QIcon("./icons/add_link_2.svg"));
    ui->ribbonTabWidget->addVerticalButton("View", "click", testButton2);

    QToolButton* testButton3 = new QToolButton;
    testButton3->setText(tr("Web service"));
    testButton3->setToolTip(tr("Connect to web service"));
    testButton3->setIcon(QIcon("./icons/add_link_2.svg"));
    ui->ribbonTabWidget->addVerticalButton("View", "click", testButton3);

    QToolButton* testButton4 = new QToolButton;
    testButton4->setText(tr("Web service"));
    testButton4->setToolTip(tr("Connect to web service"));
    testButton4->setIcon(QIcon("./icons/add_link_2.svg"));
    ui->ribbonTabWidget->addVerticalButton("View", "click", testButton4);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}
