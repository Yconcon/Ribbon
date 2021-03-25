#pragma once
#ifndef RIBBONBUTTONGROUP_H
#define RIBBONBUTTONGROUP_H

#include <QWidget>
#include <qtoolbar.h>

namespace Ui { class RibbonButtonGroup; };

class RibbonButtonGroup : public QWidget
{
	Q_OBJECT

public:
	explicit RibbonButtonGroup(QWidget *parent = Q_NULLPTR);
	virtual ~RibbonButtonGroup();

	void setTitle(const QString& title);
	QString title()const;
	int buttonCount()const;
	void addButton(QToolButton* button);
	void removeButton(QToolButton* button);

private:
	Ui::RibbonButtonGroup *ui;
	QString m_title;
};

#endif // !RIBBONBUTTONGROUP_H