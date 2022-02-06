
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <DMainWindow>
#include <QVBoxLayout>
//#include <qcef/qcef_context.h>
//#include <qcef/qcef_web_page.h>
//#include <qcef/qcef_web_settings.h>
//#include <qcef/qcef_web_view.h>
#include "widget.h"

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    MainWindow(DWidget *parent = 0);
    ~MainWindow();

private:
    Widget *w;
    QWidget *m_mainWidget;
    QVBoxLayout *m_mainLayout;
    //QCefWebView *m_webView;
};

#endif // MAINWINDOW_H
