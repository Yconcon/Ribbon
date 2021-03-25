#include "RibbonVerticalButtonGroup.h"
#include "ui_RibbonVerticalButtonGroup.h"
#include<qtoolbutton.h>

RibbonVerticalButtonGroup::RibbonVerticalButtonGroup(QWidget* parent)
	: QWidget(parent), m_title("")
{
	ui = new Ui::RibbonVerticalButtonGroup();
	ui->setupUi(this);
}

RibbonVerticalButtonGroup::~RibbonVerticalButtonGroup()
{
	delete ui;
}

void RibbonVerticalButtonGroup::setTitle(const QString& title)
{
	m_title = title;
	ui->label->setText(title);
}

QString RibbonVerticalButtonGroup::title()const
{
	return m_title;
}

int RibbonVerticalButtonGroup::buttonCount()const
{
	return ui->verticalLayoutLeft->count();
}

void RibbonVerticalButtonGroup::addButton(QToolButton* button)
{
	button->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
	button->setMinimumSize(80, 20);
	button->setAutoRaise(true);
	button->setIconSize(QSize(16, 16));
	button->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	if (ui->verticalLayoutLeft->count() < 3)
	{
		ui->verticalLayoutLeft->addWidget(button);
	}
	else
	{
		ui->verticalLayoutRight->addWidget(button);
	}
}
