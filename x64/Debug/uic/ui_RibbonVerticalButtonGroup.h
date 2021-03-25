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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RibbonVerticalButtonGroup
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutLeft;
    QVBoxLayout *verticalLayoutRight;
    QFrame *horizontalLine;
    QLabel *label;
    QFrame *verticalLine;

    void setupUi(QWidget *RibbonVerticalButtonGroup)
    {
        if (RibbonVerticalButtonGroup->objectName().isEmpty())
            RibbonVerticalButtonGroup->setObjectName(QString::fromUtf8("RibbonVerticalButtonGroup"));
        RibbonVerticalButtonGroup->resize(183, 92);
        gridLayout = new QGridLayout(RibbonVerticalButtonGroup);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayoutLeft = new QVBoxLayout();
        verticalLayoutLeft->setSpacing(0);
        verticalLayoutLeft->setObjectName(QString::fromUtf8("verticalLayoutLeft"));

        horizontalLayout->addLayout(verticalLayoutLeft);

        verticalLayoutRight = new QVBoxLayout();
        verticalLayoutRight->setSpacing(0);
        verticalLayoutRight->setObjectName(QString::fromUtf8("verticalLayoutRight"));

        horizontalLayout->addLayout(verticalLayoutRight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLine = new QFrame(RibbonVerticalButtonGroup);
        horizontalLine->setObjectName(QString::fromUtf8("horizontalLine"));
        horizontalLine->setStyleSheet(QString::fromUtf8("color: #c0c0c0;"));
        horizontalLine->setFrameShadow(QFrame::Plain);
        horizontalLine->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(horizontalLine);

        label = new QLabel(RibbonVerticalButtonGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLine = new QFrame(RibbonVerticalButtonGroup);
        verticalLine->setObjectName(QString::fromUtf8("verticalLine"));
        verticalLine->setStyleSheet(QString::fromUtf8("color: #c0c0c0;"));
        verticalLine->setFrameShadow(QFrame::Plain);
        verticalLine->setFrameShape(QFrame::VLine);

        gridLayout->addWidget(verticalLine, 0, 1, 1, 1);


        retranslateUi(RibbonVerticalButtonGroup);

        QMetaObject::connectSlotsByName(RibbonVerticalButtonGroup);
    } // setupUi

    void retranslateUi(QWidget *RibbonVerticalButtonGroup)
    {
        RibbonVerticalButtonGroup->setWindowTitle(QCoreApplication::translate("RibbonVerticalButtonGroup", "RibbonVerticalButtonGroup", nullptr));
        label->setText(QCoreApplication::translate("RibbonVerticalButtonGroup", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RibbonVerticalButtonGroup: public Ui_RibbonVerticalButtonGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIBBONVERTICALBUTTONGROUP_H
