#ifndef HELPBROWSER_H
#define HELPBROWSER_H

#include <QtGui/QTextBrowser>

class HelpBrowser : public QTextBrowser
{
    Q_OBJECT
public:
    explicit HelpBrowser(QWidget *parent = 0);
    
signals:
    
public slots:
    
};

#endif // HELPBROWSER_H