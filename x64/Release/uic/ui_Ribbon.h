/********************************************************************************
** Form generated from reading UI file 'Ribbon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIBBON_H
#define UI_RIBBON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ribbon
{
public:

    void setupUi(QWidget *Ribbon)
    {
        if (Ribbon->objectName().isEmpty())
            Ribbon->setObjectName(QString::fromUtf8("Ribbon"));
        Ribbon->resize(400, 300);

        retranslateUi(Ribbon);

        QMetaObject::connectSlotsByName(Ribbon);
    } // setupUi

    void retranslateUi(QWidget *Ribbon)
    {
        Ribbon->setWindowTitle(QCoreApplication::translate("Ribbon", "Ribbon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ribbon: public Ui_Ribbon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIBBON_H
