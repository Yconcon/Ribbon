#include "Ribbon.h"
#include "ui_Ribbon.h"

#include"RibbonTabContent.h"
#include<qapplication.h>
#include<qstyleoption.h>
#include<qpainter.h>
#include"RibbonVerticalButtonGroup.h"

Ribbon::Ribbon(QWidget* parent)
	: QTabWidget(parent)
{
	QColor bg = qApp->palette().color(QPalette::Background);
	QColor mid = qApp->palette().color(QPalette::Mid);

	setAutoFillBackground(true);

	QString styleSheetText = QString(
		"QTabWidget::pane {"
		"  border-top: 0px solid rgb(%4, %5, %6);"
		"  position: absolute;"
		"  top: -1px;"
		"}"
		""
		"QTabBar::tab {"
		"  padding-top: 5px;"
		"  padding-bottom: 5px;"
		"  padding-left: 10px;"
		"  padding-right: 10px;"
		"  margin-top: 1px;"
		"}"
		""
		"QTabBar::tab::!selected {"
		"  border-bottom: 1px solid rgb(%4, %5, %6);"
		"  background-color:#ffffff;"
		"}"
		""
		"QTabBar::tab:selected {"
		"  background-color: rgb(%1, %2, %3);"
		"  border-top: 1px solid rgb(%4, %5, %6);"
		"  border-right: 1px solid rgb(%4, %5, %6);"
		"  border-left: 1px solid rgb(%4, %5, %6);"
		"  border-bottom: 1px solid rgb(%1, %2, %3);"
		"}"
		""
		"QTabBar::tab:hover"
		"{"
		"  background-color: rgb(205, 232, 255);"
		"}"
		""
		"QTabBar::tab:selected:hover {"
		"  background-color: rgb(%1, %2, %3);"
		"}"
	).arg(bg.red()).arg(bg.green()).arg(bg.blue())
		.arg(mid.red()).arg(mid.green()).arg(mid.blue());

	setStyleSheet(styleSheetText);

	QPalette pal = palette();
	pal.setColor(QPalette::Background, Qt::white);
	setPalette(pal);
}

void Ribbon::addTab(const QString& tabName)
{
	RibbonTabContent* ribbonTabContent = new RibbonTabContent;
	QTabWidget::addTab(ribbonTabContent, tabName);
}

void Ribbon::addTab(const QIcon& tabIcon, const QString& tabName)
{
	RibbonTabContent* ribbonTabContent = new RibbonTabContent;
	QTabWidget::addTab(ribbonTabContent, tabIcon, tabName);
}

void Ribbon::removeTab(const QString& tabName)
{
	for (int i = 0; i < count(); i++)
	{
		if (tabText(i).toLower() == tabName.toLower())
		{
			QWidget* tab = QTabWidget::widget(i);
			QTabWidget::removeTab(i);
			delete tab;
			break;
		}
	}
}

void Ribbon::addGroup(const QString& tabName, const QString& groupName)
{
	QWidget* tab = nullptr;
	for (int i = 0; i < count(); i++)
	{
		if (tabText(i).toLower() == tabName.toLower())
		{
			tab = QTabWidget::widget(i);
			break;
		}
	}

	if (tab != nullptr)
	{
		RibbonTabContent* ribbonTabContent = static_cast<RibbonTabContent*>(tab);
		ribbonTabContent->addGroup(groupName);
	}
	else
	{
		addTab(tabName);
		addGroup(tabName, groupName);
	}
}

void Ribbon::addVerticalGroup(const QString& tabName, const QString& groupName)
{
	QWidget* tab = nullptr;
	for (int i = 0; i < count(); i++)
	{
		if (tabText(i).toLower() == tabName.toLower())
		{
			tab = QTabWidget::widget(i);
			break;
		}
	}

	if (tab != nullptr)
	{
		RibbonTabContent* ribbonTabContent = static_cast<RibbonTabContent*>(tab);
		ribbonTabContent->addVerticalGroup(groupName);
	}
	else
	{
		addTab(tabName);
		addVerticalGroup(tabName, groupName);
	}
}

void Ribbon::addButton(const QString& tabName, const QString& groupName, QToolButton* button)
{
	QWidget* tab = nullptr;
	for (int i = 0; i < count(); i++)
	{
		if (tabText(i).toLower() == tabName.toLower())
		{
			tab = QTabWidget::widget(i);
			break;
		}
	}

	if (tab != nullptr)
	{
		RibbonTabContent* ribbonTabContent = static_cast<RibbonTabContent*>(tab);
		ribbonTabContent->addButton(groupName, button);
	}
	else
	{
		addTab(tabName);
		addButton(tabName, groupName, button);
	}
}

void Ribbon::addVerticalButton(const QString& tabName, const QString& groupName, QToolButton* button)
{
	QWidget* tab = nullptr;
	for (int i = 0; i < count(); i++)
	{
		if (tabText(i).toLower() == tabName.toLower())
		{
			tab = QTabWidget::widget(i);
			break;
		}
	}

	if (tab != nullptr)
	{
		RibbonTabContent* ribbonTabContent = static_cast<RibbonTabContent*>(tab);
		ribbonTabContent->addVerticalButton(groupName, button);
	}
	else
	{
		addTab(tabName);
		addVerticalButton(tabName, groupName, button);
	}
}

void Ribbon::removeButton(const QString& tabName, const QString& groupName, QToolButton* button)
{
	QWidget* tab = nullptr;
	for (int i = 0; i < count(); i++)
	{
		if (tabText(i).toLower() == tabName.toLower())
		{
			tab = QTabWidget::widget(i);
			break;
		}
	}

	if (tab != nullptr)
	{
		RibbonTabContent* ribbonTabContent = static_cast<RibbonTabContent*>(tab);
		ribbonTabContent->removeButton(groupName, button);

		if (ribbonTabContent->groupCount() == 0)
		{
			removeTab(tabName);
		}
	}
}


