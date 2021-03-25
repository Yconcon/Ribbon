#pragma once

#include <QWidget>
#include <qtoolbar.h>

namespace Ui { class RibbonVerticalButtonGroup; };

class RibbonVerticalButtonGroup : public QWidget
{
	Q_OBJECT

public:
	RibbonVerticalButtonGroup(QWidget *parent = Q_NULLPTR);
	~RibbonVerticalButtonGroup();

	void setTitle(const QString& title);
	QString title()const;
	int buttonCount()const;
	void addButton(QToolButton* button);
	//void removeButton(QToolButton* button);

private:
	Ui::RibbonVerticalButtonGroup *ui;
	QString m_title;
};
