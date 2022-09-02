/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_redMinText;
    QLabel *label_redMinValue;
    QScrollBar *horizontalScrollBar_redMin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_greenMinText;
    QLabel *label_greenMinValue;
    QScrollBar *horizontalScrollBar_greenMin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_blueMinText;
    QLabel *label_blueMinValue;
    QScrollBar *horizontalScrollBar_blueMin;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_redMaxText;
    QLabel *label_redMaxValue;
    QScrollBar *horizontalScrollBar_redMax;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_greenMaxText;
    QLabel *label_greenMaxValue;
    QScrollBar *horizontalScrollBar_greenMax;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_blueMaxText;
    QLabel *label_blueMaxValue;
    QScrollBar *horizontalScrollBar_blueMax;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QDoubleSpinBox *angleRange;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QDoubleSpinBox *minArea;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_8;
    QDoubleSpinBox *maxHeightWidthRat;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_9;
    QDoubleSpinBox *minHeightWidthRat;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_3;
    QDoubleSpinBox *tanAngle;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QDoubleSpinBox *deviationAngle;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_5;
    QDoubleSpinBox *armourPixelAvg;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(621, 606);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setMouseTracking(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 591, 521));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_redMinText = new QLabel(layoutWidget);
        label_redMinText->setObjectName(QStringLiteral("label_redMinText"));

        horizontalLayout->addWidget(label_redMinText);

        label_redMinValue = new QLabel(layoutWidget);
        label_redMinValue->setObjectName(QStringLiteral("label_redMinValue"));

        horizontalLayout->addWidget(label_redMinValue);


        verticalLayout->addLayout(horizontalLayout);

        horizontalScrollBar_redMin = new QScrollBar(layoutWidget);
        horizontalScrollBar_redMin->setObjectName(QStringLiteral("horizontalScrollBar_redMin"));
        horizontalScrollBar_redMin->setMaximum(180);
        horizontalScrollBar_redMin->setValue(85);
        horizontalScrollBar_redMin->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalScrollBar_redMin);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_greenMinText = new QLabel(layoutWidget);
        label_greenMinText->setObjectName(QStringLiteral("label_greenMinText"));

        horizontalLayout_2->addWidget(label_greenMinText);

        label_greenMinValue = new QLabel(layoutWidget);
        label_greenMinValue->setObjectName(QStringLiteral("label_greenMinValue"));

        horizontalLayout_2->addWidget(label_greenMinValue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalScrollBar_greenMin = new QScrollBar(layoutWidget);
        horizontalScrollBar_greenMin->setObjectName(QStringLiteral("horizontalScrollBar_greenMin"));
        horizontalScrollBar_greenMin->setMaximum(255);
        horizontalScrollBar_greenMin->setValue(100);
        horizontalScrollBar_greenMin->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalScrollBar_greenMin);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_blueMinText = new QLabel(layoutWidget);
        label_blueMinText->setObjectName(QStringLiteral("label_blueMinText"));

        horizontalLayout_3->addWidget(label_blueMinText);

        label_blueMinValue = new QLabel(layoutWidget);
        label_blueMinValue->setObjectName(QStringLiteral("label_blueMinValue"));

        horizontalLayout_3->addWidget(label_blueMinValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalScrollBar_blueMin = new QScrollBar(layoutWidget);
        horizontalScrollBar_blueMin->setObjectName(QStringLiteral("horizontalScrollBar_blueMin"));
        horizontalScrollBar_blueMin->setMaximum(255);
        horizontalScrollBar_blueMin->setValue(220);
        horizontalScrollBar_blueMin->setSliderPosition(220);
        horizontalScrollBar_blueMin->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalScrollBar_blueMin);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_redMaxText = new QLabel(layoutWidget);
        label_redMaxText->setObjectName(QStringLiteral("label_redMaxText"));

        horizontalLayout_4->addWidget(label_redMaxText);

        label_redMaxValue = new QLabel(layoutWidget);
        label_redMaxValue->setObjectName(QStringLiteral("label_redMaxValue"));

        horizontalLayout_4->addWidget(label_redMaxValue);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalScrollBar_redMax = new QScrollBar(layoutWidget);
        horizontalScrollBar_redMax->setObjectName(QStringLiteral("horizontalScrollBar_redMax"));
        horizontalScrollBar_redMax->setMaximum(180);
        horizontalScrollBar_redMax->setValue(115);
        horizontalScrollBar_redMax->setSliderPosition(115);
        horizontalScrollBar_redMax->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalScrollBar_redMax);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_greenMaxText = new QLabel(layoutWidget);
        label_greenMaxText->setObjectName(QStringLiteral("label_greenMaxText"));

        horizontalLayout_5->addWidget(label_greenMaxText);

        label_greenMaxValue = new QLabel(layoutWidget);
        label_greenMaxValue->setObjectName(QStringLiteral("label_greenMaxValue"));

        horizontalLayout_5->addWidget(label_greenMaxValue);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalScrollBar_greenMax = new QScrollBar(layoutWidget);
        horizontalScrollBar_greenMax->setObjectName(QStringLiteral("horizontalScrollBar_greenMax"));
        horizontalScrollBar_greenMax->setMaximum(255);
        horizontalScrollBar_greenMax->setValue(255);
        horizontalScrollBar_greenMax->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalScrollBar_greenMax);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_blueMaxText = new QLabel(layoutWidget);
        label_blueMaxText->setObjectName(QStringLiteral("label_blueMaxText"));

        horizontalLayout_6->addWidget(label_blueMaxText);

        label_blueMaxValue = new QLabel(layoutWidget);
        label_blueMaxValue->setObjectName(QStringLiteral("label_blueMaxValue"));

        horizontalLayout_6->addWidget(label_blueMaxValue);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalScrollBar_blueMax = new QScrollBar(layoutWidget);
        horizontalScrollBar_blueMax->setObjectName(QStringLiteral("horizontalScrollBar_blueMax"));
        horizontalScrollBar_blueMax->setMaximum(255);
        horizontalScrollBar_blueMax->setValue(150);
        horizontalScrollBar_blueMax->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalScrollBar_blueMax);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_8->addWidget(label);

        angleRange = new QDoubleSpinBox(layoutWidget);
        angleRange->setObjectName(QStringLiteral("angleRange"));
        angleRange->setMaximum(1000);
        angleRange->setSingleStep(1);

        horizontalLayout_8->addWidget(angleRange);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        minArea = new QDoubleSpinBox(layoutWidget);
        minArea->setObjectName(QStringLiteral("minArea"));
        minArea->setMaximum(1000);

        horizontalLayout_9->addWidget(minArea);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_15->addWidget(label_8);

        maxHeightWidthRat = new QDoubleSpinBox(layoutWidget);
        maxHeightWidthRat->setObjectName(QStringLiteral("maxHeightWidthRat"));
        maxHeightWidthRat->setMaximum(1000);

        horizontalLayout_15->addWidget(maxHeightWidthRat);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_16->addWidget(label_9);

        minHeightWidthRat = new QDoubleSpinBox(layoutWidget);
        minHeightWidthRat->setObjectName(QStringLiteral("minHeightWidthRat"));
        minHeightWidthRat->setMaximum(1000);

        horizontalLayout_16->addWidget(minHeightWidthRat);


        verticalLayout_4->addLayout(horizontalLayout_16);


        horizontalLayout_17->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_10->addWidget(label_3);

        tanAngle = new QDoubleSpinBox(layoutWidget);
        tanAngle->setObjectName(QStringLiteral("tanAngle"));
        tanAngle->setMinimum(0);
        tanAngle->setMaximum(1.7);
        tanAngle->setSingleStep(0.05);
        tanAngle->setValue(0.6);

        horizontalLayout_10->addWidget(tanAngle);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_11->addWidget(label_4);

        deviationAngle = new QDoubleSpinBox(layoutWidget);
        deviationAngle->setObjectName(QStringLiteral("deviationAngle"));
        deviationAngle->setMaximum(30);
        deviationAngle->setSingleStep(2);
        deviationAngle->setValue(15);

        horizontalLayout_11->addWidget(deviationAngle);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_12->addWidget(label_5);

        armourPixelAvg = new QDoubleSpinBox(layoutWidget);
        armourPixelAvg->setObjectName(QStringLiteral("armourPixelAvg"));
        armourPixelAvg->setMaximum(150);
        armourPixelAvg->setValue(60);

        horizontalLayout_12->addWidget(armourPixelAvg);


        verticalLayout_3->addLayout(horizontalLayout_12);


        horizontalLayout_17->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_17);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 621, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolTipDuration(-4);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\350\260\203\350\212\202\345\267\245\345\205\267\346\240\217", Q_NULLPTR));
        label_redMinText->setText(QApplication::translate("MainWindow", "\350\211\262\347\233\270\346\234\200\345\260\217\345\200\274", Q_NULLPTR));
        label_redMinValue->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_greenMinText->setText(QApplication::translate("MainWindow", "\351\245\261\345\222\214\345\272\246\346\234\200\345\260\217\345\200\274", Q_NULLPTR));
        label_greenMinValue->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_blueMinText->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\346\234\200\345\260\217\345\200\274", Q_NULLPTR));
        label_blueMinValue->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_redMaxText->setText(QApplication::translate("MainWindow", "\350\211\262\347\233\270\346\234\200\345\244\247\345\200\274", Q_NULLPTR));
        label_redMaxValue->setText(QApplication::translate("MainWindow", "180", Q_NULLPTR));
        label_greenMaxText->setText(QApplication::translate("MainWindow", "\351\245\261\345\222\214\345\272\246\346\234\200\345\244\247\345\200\274", Q_NULLPTR));
        label_greenMaxValue->setText(QApplication::translate("MainWindow", "255", Q_NULLPTR));
        label_blueMaxText->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\346\234\200\345\244\247\345\200\274", Q_NULLPTR));
        label_blueMaxValue->setText(QApplication::translate("MainWindow", "255", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\200\276\346\226\234\350\247\222\345\272\246\351\231\220\345\210\266", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\351\235\242\347\247\257\351\231\220\345\210\266", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\351\253\230\345\256\275\346\257\224", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\351\253\230\345\256\275\346\257\224", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\347\201\257\346\237\261\345\201\217\345\220\221\350\247\222", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\350\243\205\347\224\262\346\235\277\345\201\217\345\220\221\350\247\222", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\347\224\262\346\235\277\345\203\217\347\264\240\345\235\207\345\200\274", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
