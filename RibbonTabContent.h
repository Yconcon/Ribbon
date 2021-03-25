#pragma once
#ifndef RIBBONTABCONTENT_H
#define RIBBONTABCONTENT_H

#include <QWidget>
#include <qtoolbutton.h>

namespace Ui { class RibbonTabContent; };

class RibbonTabContent : public QWidget
{
	Q_OBJECT

public:
	explicit RibbonTabContent(QWidget *parent = Q_NULLPTR);
	virtual ~RibbonTabContent();

	void addGroup(const QString& groupName);
	void addVerticalGroup(const QString& groupName);
	void removeGroup(const QString& groupName);
	void removeVerticalGroup(const QString& groupName);
	int groupCount() const;
	void addButton(const QString& groupName, QToolButton* button);
	void addVerticalButton(const QString& groupName, QToolButton* button);
	void removeButton(const QString& groupName, QToolButton* button);

private:
	Ui::RibbonTabContent *ui;
};

#endif // !RIBBONTABCONTENT_H