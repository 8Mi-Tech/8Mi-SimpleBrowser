#include "mainwindow.h"
#include <DMainWindow>
#include <QVBoxLayout>

DWIDGET_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    w = new Widget;
    resize(w->size()); //设置窗口大小
    setCentralWidget(w);
    m_mainWidget = new QWidget;
    m_mainLayout = new QVBoxLayout(m_mainWidget);
    m_webView = new QCefWebView();
    m_webView->setUrl(QUrl("http://yacd.haishan.me/"));

    m_mainLayout->setMargin(0);
    m_mainLayout->addWidget(m_webView);

    setCentralWidget(m_mainWidget);
}

MainWindow::~MainWindow()
{

}
