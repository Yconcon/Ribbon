#include "RibbonButtonGroup.h"
#include "ui_RibbonButtonGroup.h"
#include<qtoolbutton.h>

RibbonButtonGroup::RibbonButtonGroup(QWidget *parent)
	: QWidget(parent),m_title("")
{
	ui = new Ui::RibbonButtonGroup();
	ui->setupUi(this);
}

RibbonButtonGroup::~RibbonButtonGroup()
{
	delete ui;
}

void RibbonButtonGroup::setTitle(const QString& title)
{
	m_title = title;
	ui->label->setText(m_title);
}

QString RibbonButtonGroup::title()const
{
	return m_title;
}

int RibbonButtonGroup::buttonCount()const
{
	return ui->horizontalLayout->count();
}

void RibbonButtonGroup::addButton(QToolButton* button)
{
	button->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
	button->setMinimumSize(48, 48);
	button->setAutoRaise(true);
	button->setIconSize(QSize(32, 32));
	button->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

	ui->horizontalLayout->addWidget(button);
}

void RibbonButtonGroup::removeButton(QToolButton* button)
{
	ui->horizontalLayout->removeWidget(button);
}
