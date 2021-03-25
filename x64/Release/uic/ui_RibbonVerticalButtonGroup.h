/********************************************************************************
** Form generated from reading UI file 'RibbonVerticalButtonGroup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIBBONVERTICALBUTTONGROUP_H
#define UI_RIBBONVERTICALBUTTONGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RibbonVerticalButtonGroup
{
public:

    void setupUi(QWidget *RibbonVerticalButtonGroup)
    {
        if (RibbonVerticalButtonGroup->objectName().isEmpty())
            RibbonVerticalButtonGroup->setObjectName(QString::fromUtf8("RibbonVerticalButtonGroup"));
        RibbonVerticalButtonGroup->resize(400, 300);

        retranslateUi(RibbonVerticalButtonGroup);

        QMetaObject::connectSlotsByName(RibbonVerticalButtonGroup);
    } // setupUi

    void retranslateUi(QWidget *RibbonVerticalButtonGroup)
    {
        RibbonVerticalButtonGroup->setWindowTitle(QCoreApplication::translate("RibbonVerticalButtonGroup", "RibbonVerticalButtonGroup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RibbonVerticalButtonGroup: public Ui_RibbonVerticalButtonGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIBBONVERTICALBUTTONGROUP_H
