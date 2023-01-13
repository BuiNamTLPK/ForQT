#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//Qt
#include <QMainWindow>
class GraphicsSence;
QT_BEGIN_NAMESPACE
class QGraphicsView;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);

private:
    //
    GraphicsSence *scene;
    QGraphicsView *view;

};

#endif // MAINWINDOW_H
