//Own
#include "mainwindow.h"
#include "graphicssence.h"

//Qt
#include <QGraphicsView>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QLayout>

#ifndef QT_NO_OPENGL
# include <QtOpenGL>
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow{parent}
{
    // menu cho thanh tren cung
    QMenu *file = menuBar()-> addMenu(tr("&File"));
    //Dat muc chon lua file <tao | thoat>
        QAction *newAction = file->addAction(tr("New"));
            newAction->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_N)); //Ctrl + N new file
        QAction *quitAction = file->addAction(tr("Quit"));
        quitAction->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_Q)); //Ctrl + Q thoat
            connect(quitAction, &QAction::triggered, qApp, &QApplication::quit);
            file->addAction(quitAction);
    //Chon kieu ket noi trong voi PC

    QMenu *file2 = menuBar() -> addMenu(tr("&Connect"));
        QAction *uart_cnt = file2->addAction(tr("UART"));
            uart_cnt->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_U)); //Ctrl + U dung UART
        QAction *usb_cnt = file2->addAction(tr("USB"));
            usb_cnt->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_T)); //Ctrl + T dung USB
        /*
        QMenuBar* menuBar = new QMenuBar();
        QMenu* fileMenu = new QMenu("File");
        menuBar->addMenu(fileMenu);
        QMenu* newMenu = new QMenu("NewMenu");
        menuBar->addMenu(newMenu);
*/
        setWindowState(Qt::WindowMaximized | Qt::WindowMinimized); //Tuy chinh man hinh cho phep phong to thu nho

   /*
    if (QApplication::arguments().contains("-fullscreen")) {
            scene = new QGraphicsScene(0, 0, 750, 400, GraphicsScene::Small, this);
            setWindowState(Qt::WindowFullScreen);
        } else {
            scene = new QGraphicsScene(0, 0, 880, 630, GraphicsScene::Big, this);
            layout()->setSizeConstraint(QLayout::SetFixedSize);
        }
  */
  ///

    /*
    #ifndef QT_NO_OPENGL
        QGLWidget *glWidget = new QGLWidget(QGLFormat(QGL::SampleBuffers));
        if (glWidget->context()->isValid()) {
            view->setViewport(glWidget);
        } else {
            qWarning("Unable to create an Open GL context with sample buffers, not using Open GL.");
            delete glWidget;
        }
    #endif
        */

}
