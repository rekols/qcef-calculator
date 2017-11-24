#include "mainwindow.h"
#include "dtitlebar.h"

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    m_mainWidget = new QWidget;
    m_mainLayout = new QVBoxLayout(m_mainWidget);
    m_webView = new QCefWebView();
    m_titleBar = new TitleBar;
    m_webView->setUrl(QUrl("qrc://resources/index.html"));

    titlebar()->setCustomWidget(m_titleBar, Qt::AlignVCenter, false);
    titlebar()->setFixedHeight(30);
    titlebar()->setSeparatorVisible(true);
    m_mainLayout->setMargin(0);
    m_mainLayout->addWidget(m_webView);

    setCentralWidget(m_mainWidget);
}

MainWindow::~MainWindow()
{

}
