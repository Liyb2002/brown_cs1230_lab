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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *mainWidget;
    QTabWidget *tabWidget;
    QWidget *tab_vert;
    QWidget *vertCanvas;
    QWidget *tab_phong;
    QWidget *phongCanvas;
    QWidget *layoutWidget;
    QGridLayout *settings;
    QGroupBox *spheresGroupBox;
    QPushButton *sphereLColorButton;
    QLabel *sphereLLabel;
    QLineEdit *sphereLREdit;
    QLineEdit *sphereLGEdit;
    QLineEdit *sphereLBEdit;
    QLineEdit *sphereMBEdit;
    QLabel *sphereMLabel;
    QLineEdit *sphereMGEdit;
    QLineEdit *sphereMREdit;
    QPushButton *sphereMColorButton;
    QPushButton *sphereRColorButton;
    QLabel *sphereRLabel;
    QLineEdit *sphereRGEdit;
    QLineEdit *sphereRBEdit;
    QLineEdit *sphereRREdit;
    QGroupBox *lightGroupBox;
    QSlider *lightIntensitySlider;
    QLabel *lightIntensityLabel;
    QPushButton *lightColorButton;
    QLabel *lightColorLabel;
    QLineEdit *lightIntensityEdit;
    QLineEdit *lightREdit;
    QLineEdit *lightGEdit;
    QLineEdit *lightBEdit;
    QGroupBox *attenuationGroupBox;
    QSlider *attQuadraticSlider;
    QLabel *attLinearLabel;
    QLabel *attConstantLabel;
    QLineEdit *attConstantEdit;
    QSlider *attLinearSlider;
    QLineEdit *attLinearEdit;
    QSlider *attConstantSlider;
    QLineEdit *attQuadraticEdit;
    QLabel *attQuadraticLabel;
    QGroupBox *materialGroupBox;
    QLabel *ambientLabel;
    QLineEdit *ambientEdit;
    QSlider *ambientSlider;
    QLabel *diffuseLabel;
    QLineEdit *diffuseEdit;
    QSlider *diffuseSlider;
    QLabel *specularLabel;
    QLineEdit *specularEdit;
    QSlider *specularSlider;
    QLabel *shininessLabel;
    QLineEdit *shininessEdit;
    QSlider *shininessSlider;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 566);
        MainWindow->setMinimumSize(QSize(800, 525));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        mainWidget = new QWidget(MainWindow);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        tabWidget = new QTabWidget(mainWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 791, 541));
        tab_vert = new QWidget();
        tab_vert->setObjectName(QString::fromUtf8("tab_vert"));
        vertCanvas = new QWidget(tab_vert);
        vertCanvas->setObjectName(QString::fromUtf8("vertCanvas"));
        vertCanvas->setGeometry(QRect(20, 20, 411, 401));
        tabWidget->addTab(tab_vert, QString());
        tab_phong = new QWidget();
        tab_phong->setObjectName(QString::fromUtf8("tab_phong"));
        phongCanvas = new QWidget(tab_phong);
        phongCanvas->setObjectName(QString::fromUtf8("phongCanvas"));
        phongCanvas->setGeometry(QRect(290, 10, 471, 461));
        layoutWidget = new QWidget(tab_phong);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 271, 564));
        settings = new QGridLayout(layoutWidget);
        settings->setSpacing(6);
        settings->setContentsMargins(11, 11, 11, 11);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setContentsMargins(0, 0, 0, 0);
        spheresGroupBox = new QGroupBox(layoutWidget);
        spheresGroupBox->setObjectName(QString::fromUtf8("spheresGroupBox"));
        spheresGroupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spheresGroupBox->sizePolicy().hasHeightForWidth());
        spheresGroupBox->setSizePolicy(sizePolicy);
        spheresGroupBox->setMinimumSize(QSize(0, 115));
        sphereLColorButton = new QPushButton(spheresGroupBox);
        sphereLColorButton->setObjectName(QString::fromUtf8("sphereLColorButton"));
        sphereLColorButton->setGeometry(QRect(80, 30, 41, 25));
        sphereLLabel = new QLabel(spheresGroupBox);
        sphereLLabel->setObjectName(QString::fromUtf8("sphereLLabel"));
        sphereLLabel->setGeometry(QRect(10, 20, 62, 31));
        sphereLREdit = new QLineEdit(spheresGroupBox);
        sphereLREdit->setObjectName(QString::fromUtf8("sphereLREdit"));
        sphereLREdit->setGeometry(QRect(130, 30, 41, 21));
        sphereLGEdit = new QLineEdit(spheresGroupBox);
        sphereLGEdit->setObjectName(QString::fromUtf8("sphereLGEdit"));
        sphereLGEdit->setGeometry(QRect(170, 30, 41, 21));
        sphereLBEdit = new QLineEdit(spheresGroupBox);
        sphereLBEdit->setObjectName(QString::fromUtf8("sphereLBEdit"));
        sphereLBEdit->setGeometry(QRect(210, 30, 41, 21));
        sphereMBEdit = new QLineEdit(spheresGroupBox);
        sphereMBEdit->setObjectName(QString::fromUtf8("sphereMBEdit"));
        sphereMBEdit->setGeometry(QRect(210, 60, 41, 21));
        sphereMLabel = new QLabel(spheresGroupBox);
        sphereMLabel->setObjectName(QString::fromUtf8("sphereMLabel"));
        sphereMLabel->setGeometry(QRect(10, 50, 62, 31));
        sphereMGEdit = new QLineEdit(spheresGroupBox);
        sphereMGEdit->setObjectName(QString::fromUtf8("sphereMGEdit"));
        sphereMGEdit->setGeometry(QRect(170, 60, 41, 21));
        sphereMREdit = new QLineEdit(spheresGroupBox);
        sphereMREdit->setObjectName(QString::fromUtf8("sphereMREdit"));
        sphereMREdit->setGeometry(QRect(130, 60, 41, 21));
        sphereMColorButton = new QPushButton(spheresGroupBox);
        sphereMColorButton->setObjectName(QString::fromUtf8("sphereMColorButton"));
        sphereMColorButton->setGeometry(QRect(80, 60, 41, 25));
        sphereRColorButton = new QPushButton(spheresGroupBox);
        sphereRColorButton->setObjectName(QString::fromUtf8("sphereRColorButton"));
        sphereRColorButton->setGeometry(QRect(80, 90, 41, 25));
        sphereRLabel = new QLabel(spheresGroupBox);
        sphereRLabel->setObjectName(QString::fromUtf8("sphereRLabel"));
        sphereRLabel->setGeometry(QRect(10, 80, 62, 31));
        sphereRGEdit = new QLineEdit(spheresGroupBox);
        sphereRGEdit->setObjectName(QString::fromUtf8("sphereRGEdit"));
        sphereRGEdit->setGeometry(QRect(170, 90, 41, 21));
        sphereRBEdit = new QLineEdit(spheresGroupBox);
        sphereRBEdit->setObjectName(QString::fromUtf8("sphereRBEdit"));
        sphereRBEdit->setGeometry(QRect(210, 90, 41, 21));
        sphereRREdit = new QLineEdit(spheresGroupBox);
        sphereRREdit->setObjectName(QString::fromUtf8("sphereRREdit"));
        sphereRREdit->setGeometry(QRect(130, 90, 41, 21));

        settings->addWidget(spheresGroupBox, 2, 0, 1, 1);

        lightGroupBox = new QGroupBox(layoutWidget);
        lightGroupBox->setObjectName(QString::fromUtf8("lightGroupBox"));
        lightGroupBox->setEnabled(true);
        sizePolicy.setHeightForWidth(lightGroupBox->sizePolicy().hasHeightForWidth());
        lightGroupBox->setSizePolicy(sizePolicy);
        lightGroupBox->setMinimumSize(QSize(0, 105));
        lightIntensitySlider = new QSlider(lightGroupBox);
        lightIntensitySlider->setObjectName(QString::fromUtf8("lightIntensitySlider"));
        lightIntensitySlider->setGeometry(QRect(150, 70, 101, 22));
        lightIntensitySlider->setOrientation(Qt::Horizontal);
        lightIntensityLabel = new QLabel(lightGroupBox);
        lightIntensityLabel->setObjectName(QString::fromUtf8("lightIntensityLabel"));
        lightIntensityLabel->setGeometry(QRect(10, 70, 91, 21));
        lightColorButton = new QPushButton(lightGroupBox);
        lightColorButton->setObjectName(QString::fromUtf8("lightColorButton"));
        lightColorButton->setGeometry(QRect(80, 30, 41, 25));
        lightColorLabel = new QLabel(lightGroupBox);
        lightColorLabel->setObjectName(QString::fromUtf8("lightColorLabel"));
        lightColorLabel->setGeometry(QRect(10, 30, 62, 31));
        lightIntensityEdit = new QLineEdit(lightGroupBox);
        lightIntensityEdit->setObjectName(QString::fromUtf8("lightIntensityEdit"));
        lightIntensityEdit->setGeometry(QRect(100, 70, 41, 21));
        lightREdit = new QLineEdit(lightGroupBox);
        lightREdit->setObjectName(QString::fromUtf8("lightREdit"));
        lightREdit->setGeometry(QRect(140, 30, 41, 21));
        lightGEdit = new QLineEdit(lightGroupBox);
        lightGEdit->setObjectName(QString::fromUtf8("lightGEdit"));
        lightGEdit->setGeometry(QRect(180, 30, 41, 21));
        lightBEdit = new QLineEdit(lightGroupBox);
        lightBEdit->setObjectName(QString::fromUtf8("lightBEdit"));
        lightBEdit->setGeometry(QRect(220, 30, 41, 21));

        settings->addWidget(lightGroupBox, 0, 0, 1, 1);

        attenuationGroupBox = new QGroupBox(layoutWidget);
        attenuationGroupBox->setObjectName(QString::fromUtf8("attenuationGroupBox"));
        attenuationGroupBox->setEnabled(true);
        sizePolicy.setHeightForWidth(attenuationGroupBox->sizePolicy().hasHeightForWidth());
        attenuationGroupBox->setSizePolicy(sizePolicy);
        attenuationGroupBox->setMinimumSize(QSize(0, 105));
        attenuationGroupBox->setCheckable(false);
        attQuadraticSlider = new QSlider(attenuationGroupBox);
        attQuadraticSlider->setObjectName(QString::fromUtf8("attQuadraticSlider"));
        attQuadraticSlider->setGeometry(QRect(150, 20, 101, 22));
        attQuadraticSlider->setOrientation(Qt::Horizontal);
        attLinearLabel = new QLabel(attenuationGroupBox);
        attLinearLabel->setObjectName(QString::fromUtf8("attLinearLabel"));
        attLinearLabel->setGeometry(QRect(10, 40, 61, 41));
        attConstantLabel = new QLabel(attenuationGroupBox);
        attConstantLabel->setObjectName(QString::fromUtf8("attConstantLabel"));
        attConstantLabel->setGeometry(QRect(10, 70, 91, 41));
        attConstantEdit = new QLineEdit(attenuationGroupBox);
        attConstantEdit->setObjectName(QString::fromUtf8("attConstantEdit"));
        attConstantEdit->setGeometry(QRect(100, 80, 41, 21));
        attLinearSlider = new QSlider(attenuationGroupBox);
        attLinearSlider->setObjectName(QString::fromUtf8("attLinearSlider"));
        attLinearSlider->setGeometry(QRect(150, 50, 101, 22));
        attLinearSlider->setOrientation(Qt::Horizontal);
        attLinearEdit = new QLineEdit(attenuationGroupBox);
        attLinearEdit->setObjectName(QString::fromUtf8("attLinearEdit"));
        attLinearEdit->setGeometry(QRect(100, 50, 41, 21));
        attConstantSlider = new QSlider(attenuationGroupBox);
        attConstantSlider->setObjectName(QString::fromUtf8("attConstantSlider"));
        attConstantSlider->setGeometry(QRect(150, 80, 101, 22));
        attConstantSlider->setOrientation(Qt::Horizontal);
        attQuadraticEdit = new QLineEdit(attenuationGroupBox);
        attQuadraticEdit->setObjectName(QString::fromUtf8("attQuadraticEdit"));
        attQuadraticEdit->setGeometry(QRect(100, 20, 41, 21));
        attQuadraticLabel = new QLabel(attenuationGroupBox);
        attQuadraticLabel->setObjectName(QString::fromUtf8("attQuadraticLabel"));
        attQuadraticLabel->setGeometry(QRect(10, 10, 91, 41));

        settings->addWidget(attenuationGroupBox, 1, 0, 1, 1);

        materialGroupBox = new QGroupBox(layoutWidget);
        materialGroupBox->setObjectName(QString::fromUtf8("materialGroupBox"));
        materialGroupBox->setMinimumSize(QSize(0, 219));
        ambientLabel = new QLabel(materialGroupBox);
        ambientLabel->setObjectName(QString::fromUtf8("ambientLabel"));
        ambientLabel->setGeometry(QRect(10, 20, 71, 41));
        ambientEdit = new QLineEdit(materialGroupBox);
        ambientEdit->setObjectName(QString::fromUtf8("ambientEdit"));
        ambientEdit->setGeometry(QRect(100, 30, 41, 21));
        ambientSlider = new QSlider(materialGroupBox);
        ambientSlider->setObjectName(QString::fromUtf8("ambientSlider"));
        ambientSlider->setGeometry(QRect(150, 30, 101, 22));
        ambientSlider->setOrientation(Qt::Horizontal);
        diffuseLabel = new QLabel(materialGroupBox);
        diffuseLabel->setObjectName(QString::fromUtf8("diffuseLabel"));
        diffuseLabel->setGeometry(QRect(10, 50, 71, 41));
        diffuseEdit = new QLineEdit(materialGroupBox);
        diffuseEdit->setObjectName(QString::fromUtf8("diffuseEdit"));
        diffuseEdit->setGeometry(QRect(100, 60, 41, 21));
        diffuseSlider = new QSlider(materialGroupBox);
        diffuseSlider->setObjectName(QString::fromUtf8("diffuseSlider"));
        diffuseSlider->setGeometry(QRect(150, 60, 101, 22));
        diffuseSlider->setOrientation(Qt::Horizontal);
        specularLabel = new QLabel(materialGroupBox);
        specularLabel->setObjectName(QString::fromUtf8("specularLabel"));
        specularLabel->setGeometry(QRect(10, 80, 81, 41));
        specularEdit = new QLineEdit(materialGroupBox);
        specularEdit->setObjectName(QString::fromUtf8("specularEdit"));
        specularEdit->setGeometry(QRect(100, 90, 41, 21));
        specularSlider = new QSlider(materialGroupBox);
        specularSlider->setObjectName(QString::fromUtf8("specularSlider"));
        specularSlider->setGeometry(QRect(150, 90, 101, 22));
        specularSlider->setOrientation(Qt::Horizontal);
        shininessLabel = new QLabel(materialGroupBox);
        shininessLabel->setObjectName(QString::fromUtf8("shininessLabel"));
        shininessLabel->setGeometry(QRect(10, 110, 81, 41));
        shininessEdit = new QLineEdit(materialGroupBox);
        shininessEdit->setObjectName(QString::fromUtf8("shininessEdit"));
        shininessEdit->setGeometry(QRect(100, 120, 41, 21));
        shininessSlider = new QSlider(materialGroupBox);
        shininessSlider->setObjectName(QString::fromUtf8("shininessSlider"));
        shininessSlider->setGeometry(QRect(150, 120, 101, 22));
        shininessSlider->setOrientation(Qt::Horizontal);

        settings->addWidget(materialGroupBox, 3, 0, 1, 1);

        tabWidget->addTab(tab_phong, QString());
        MainWindow->setCentralWidget(mainWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lab 6 - 3D OpenGL", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(accessibility)
        tabWidget->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tab_vert), QCoreApplication::translate("MainWindow", "Vertex Shaders", nullptr));
        spheresGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Sphere Colors", nullptr));
        sphereLColorButton->setText(QString());
        sphereLLabel->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        sphereMLabel->setText(QCoreApplication::translate("MainWindow", "Middle", nullptr));
        sphereMColorButton->setText(QString());
        sphereRColorButton->setText(QString());
        sphereRLabel->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        lightGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Light", nullptr));
        lightIntensityLabel->setText(QCoreApplication::translate("MainWindow", "Intensity", nullptr));
        lightColorButton->setText(QString());
        lightColorLabel->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        attenuationGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Light Attenuation", nullptr));
        attLinearLabel->setText(QCoreApplication::translate("MainWindow", "Linear", nullptr));
        attConstantLabel->setText(QCoreApplication::translate("MainWindow", "Constant", nullptr));
        attQuadraticLabel->setText(QCoreApplication::translate("MainWindow", "Quadratic", nullptr));
        materialGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Sphere Material", nullptr));
        ambientLabel->setText(QCoreApplication::translate("MainWindow", "Ambient", nullptr));
        diffuseLabel->setText(QCoreApplication::translate("MainWindow", "Diffuse", nullptr));
        specularLabel->setText(QCoreApplication::translate("MainWindow", "Specular", nullptr));
        shininessLabel->setText(QCoreApplication::translate("MainWindow", "Shininess", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_phong), QCoreApplication::translate("MainWindow", "Phong Shaders", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "Fi&le", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
