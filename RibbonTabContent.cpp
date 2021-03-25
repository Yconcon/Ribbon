#include "RibbonTabContent.h"
#include "ui_RibbonTabContent.h"
#include "RibbonButtonGroup.h"
#include "RibbonVerticalButtonGroup.h"

RibbonTabContent::RibbonTabContent(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::RibbonTabContent();
	ui->setupUi(this);
}

RibbonTabContent::~RibbonTabContent()
{
	delete ui;
}

void RibbonTabContent::addGroup(const QString& groupName)
{
	RibbonButtonGroup* ribbonButtonGroup = new RibbonButtonGroup;
	ribbonButtonGroup->setTitle(groupName);

	ui->ribbonHorizontalLayout->addWidget(ribbonButtonGroup);
}

void RibbonTabContent::addVerticalGroup(const QString& groupName)
{
	RibbonVerticalButtonGroup* ribbonVerticalButtonGroup = new RibbonVerticalButtonGroup;
	ribbonVerticalButtonGroup->setTitle(groupName);

	ui->ribbonHorizontalLayout->addWidget(ribbonVerticalButtonGroup);
}

void RibbonTabContent::removeGroup(const QString& groupName)
{
	for (int i = 0; i < ui->ribbonHorizontalLayout->count(); i++)
	{
		RibbonButtonGroup* group = static_cast<RibbonButtonGroup*>(ui->ribbonHorizontalLayout->itemAt(i)->widget());
		if (group->title().toLower() == groupName.toLower())
		{
			ui->ribbonHorizontalLayout->removeWidget(group);
			delete group;
			break;
		}
	}
}

void RibbonTabContent::removeVerticalGroup(const QString& groupName)
{
	for (int i = 0; i < ui->ribbonHorizontalLayout->count(); i++)
	{
		RibbonVerticalButtonGroup* group = static_cast<RibbonVerticalButtonGroup*>(ui->ribbonHorizontalLayout->itemAt(i)->widget());
		if (group->title().toLower() == groupName.toLower())
		{
			ui->ribbonHorizontalLayout->removeWidget(group);
			delete group;
			break;
		}
	}
}

int RibbonTabContent::groupCount()const
{
	return ui->ribbonHorizontalLayout->count();
}

void RibbonTabContent::addButton(const QString& groupName, QToolButton* button)
{
	RibbonButtonGroup* ribbonButtonGroup = nullptr;
	for (int i = 0; i < ui->ribbonHorizontalLayout->count(); i++)
	{
		RibbonButtonGroup* group = static_cast<RibbonButtonGroup*>(ui->ribbonHorizontalLayout->itemAt(i)->widget());
		if (group->title().toLower() == groupName.toLower())
		{
			ribbonButtonGroup = group;
			break;
		}
	}
	
	if (ribbonButtonGroup != nullptr)
	{
		ribbonButtonGroup->addButton(button);
	}
	else
	{
		addGroup(groupName);

		addButton(groupName, button);
	}
}

void RibbonTabContent::addVerticalButton(const QString& groupName, QToolButton* button)
{
	RibbonVerticalButtonGroup* ribbonVerticalButtonGroup = nullptr;
	for (int i = 0; i < ui->ribbonHorizontalLayout->count(); i++)
	{
		RibbonVerticalButtonGroup* group = static_cast<RibbonVerticalButtonGroup*>(ui->ribbonHorizontalLayout->itemAt(i)->widget());
		if (group->title().toLower() == groupName.toLower())
		{
			ribbonVerticalButtonGroup = group;
			break;
		}
	}

	if (ribbonVerticalButtonGroup != nullptr)
	{
		ribbonVerticalButtonGroup->addButton(button);
	}
	else
	{
		addVerticalGroup(groupName);

		addVerticalButton(groupName, button);
	}
}

void RibbonTabContent::removeButton(const QString& groupName, QToolButton* button)
{
	RibbonButtonGroup* ribbonButtonGroup = nullptr;
	for (int i = 0; i < ui->ribbonHorizontalLayout->count(); i++)
	{
		RibbonButtonGroup* group = static_cast<RibbonButtonGroup*>(ui->ribbonHorizontalLayout->itemAt(i)->widget());
		if (group->title().toLower() == groupName.toLower())
		{
			ribbonButtonGroup = group;
			break;
		}
	}

	if (ribbonButtonGroup != nullptr)
	{
		ribbonButtonGroup->removeButton(button);

		if (ribbonButtonGroup->buttonCount() == 0)
		{
			removeGroup(groupName);
		}
	}
}

