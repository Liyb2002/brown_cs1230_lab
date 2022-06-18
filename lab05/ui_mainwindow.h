/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *triangle;
    QGroupBox *shapeGroupBox;
    QCheckBox *linesEnabled;
    QWidget *triangleCanvas;
    QWidget *fragShaders;
    QWidget *fragCanvas;
    QGroupBox *shaderProgram;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *solidShader;
    QRadioButton *gradientShader;
    QRadioButton *textureShader;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 561, 341));
        triangle = new QWidget();
        triangle->setObjectName(QString::fromUtf8("triangle"));
        shapeGroupBox = new QGroupBox(triangle);
        shapeGroupBox->setObjectName(QString::fromUtf8("shapeGroupBox"));
        shapeGroupBox->setGeometry(QRect(10, 10, 142, 332));
        linesEnabled = new QCheckBox(shapeGroupBox);
        linesEnabled->setObjectName(QString::fromUtf8("linesEnabled"));
        linesEnabled->setEnabled(true);
        linesEnabled->setGeometry(QRect(10, 30, 151, 22));
        linesEnabled->setChecked(false);
        triangleCanvas = new QWidget(triangle);
        triangleCanvas->setObjectName(QString::fromUtf8("triangleCanvas"));
        triangleCanvas->setGeometry(QRect(189, 29, 321, 271));
        tabWidget->addTab(triangle, QString());
        fragShaders = new QWidget();
        fragShaders->setObjectName(QString::fromUtf8("fragShaders"));
        fragCanvas = new QWidget(fragShaders);
        fragCanvas->setObjectName(QString::fromUtf8("fragCanvas"));
        fragCanvas->setGeometry(QRect(190, 20, 275, 275));
        shaderProgram = new QGroupBox(fragShaders);
        shaderProgram->setObjectName(QString::fromUtf8("shaderProgram"));
        shaderProgram->setGeometry(QRect(10, 20, 171, 121));
        verticalLayoutWidget = new QWidget(shaderProgram);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 30, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        solidShader = new QRadioButton(verticalLayoutWidget);
        solidShader->setObjectName(QString::fromUtf8("solidShader"));

        verticalLayout->addWidget(solidShader);

        gradientShader = new QRadioButton(verticalLayoutWidget);
        gradientShader->setObjectName(QString::fromUtf8("gradientShader"));

        verticalLayout->addWidget(gradientShader);

        textureShader = new QRadioButton(verticalLayoutWidget);
        textureShader->setObjectName(QString::fromUtf8("textureShader"));

        verticalLayout->addWidget(textureShader);

        tabWidget->addTab(fragShaders, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab 5 - 2D OpenGL", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        shapeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Shape", nullptr));
        linesEnabled->setText(QCoreApplication::translate("MainWindow", "Draw lines", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(triangle), QCoreApplication::translate("MainWindow", "VAOs + VBOs", nullptr));
        shaderProgram->setTitle(QCoreApplication::translate("MainWindow", "Shader Program", nullptr));
        solidShader->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
        gradientShader->setText(QCoreApplication::translate("MainWindow", "Gradient", nullptr));
        textureShader->setText(QCoreApplication::translate("MainWindow", "Texture", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(fragShaders), QCoreApplication::translate("MainWindow", "Fragment Shaders", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Fi&le", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
