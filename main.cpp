#include "mainwindow.h"
#include <DApplication>
#include <QDesktopWidget>
#include <DWidgetUtil>  //Dtk::Widget::moveToCenter(&w); 要调用它，就得引用DWidgetUtil
//#include <qcef/qcef_util.h>


DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{

    DApplication::loadDXcbPlugin();  //让bar处在标题栏中
    DApplication dtk(argc, argv);
     dtk.setAttribute(Qt::AA_UseHighDpiPixmaps);
     dtk.loadTranslator();
     dtk.setOrganizationName("8Mi-Tech");
     dtk.setApplicationVersion(DApplication::buildVersion("1.0"));
     dtk.setApplicationAcknowledgementPage("https://blog.8mi.tech");
     //dtk.setProductIcon(QIcon(":/logo.png"));  //设置Logo
     dtk.setProductName("8Mi-SimpleBrowser");
     dtk.setApplicationName("8Mi-SimpleBrowser"); //只有在这儿修改窗口标题才有效
     dtk.setApplicationLicense("GPL-3.0");
     dtk.setApplicationDescription("8Mi-SimpleBrowser只是一个单页面的CEF的浏览器");
     dtk.setApplicationAcknowledgementVisible(true);

    MainWindow w;
    w.setMinimumSize(800, 600);
    w.show();
    w.move((QApplication::desktop()->width() - w.width()) / 2,
           (QApplication::desktop()->height() - w.height()) / 2);

    //让打开时界面显示在正中
    Dtk::Widget::moveToCenter(&w);

    //QCefBindApp(&dtk);

    return dtk.exec();
}
