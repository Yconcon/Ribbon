#pragma once
#ifndef RIBBON_H
#define RIBBON_H

#include <QTabWidget>
#include <qtoolbutton.h>

namespace Ui { class Ribbon; };

class Ribbon : public QTabWidget
{
	Q_OBJECT

public:
	explicit Ribbon(QWidget *parent = Q_NULLPTR);

	void addTab(const QString& tabName);
	void addTab(const QIcon& tabIcon, const QString& tabName);
	void removeTab(const QString& tabName);
	void addGroup(const QString& tabName, const QString& groupName);
	void addVerticalGroup(const QString& tabName, const QString& groupName);
	void addButton(const QString& tabName, const QString& groupName, QToolButton* button);
	void addVerticalButton(const QString& tabName, const QString& groupName, QToolButton* button);
	void removeButton(const QString& tabName, const QString& groupName, QToolButton* button);


private:
	Ui::Ribbon *ui;
};

#endif // !RIBBON_H