#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "settings.h"
#include "glwidget.h"
#include "glvertwidget.h"


namespace Ui {
    class MainWindow;
}

class DataBinding;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void settingsChanged();

protected:
    // Overridden from QWidget
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *m_ui;
    QList<DataBinding *> m_bindings;
    GLVertWidget *m_vertCanvas;
    GLWidget *m_glWidget;

    void dataBind();
};

#endif // MAINWINDOW_H
