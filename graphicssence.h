#ifndef GRAPHICSSENCE_H
#define GRAPHICSSENCE_H

//Qt
#include <QGraphicsScene>
#include <QSet>

//class
class pixmapitem;

QT_BEGIN_NAMESPACE
class QAction;
QT_END_NAMESPACE


class graphicssence : public QGraphicsScene
{
    Q_OBJECT
public:
    enum Mode {
        Big =0,
        Small
    };
    struct BoardCircur {
        int type =0;
        int points =0;
        QString name;
    };
    struct LevelDescription{
        int id=0;
        QString name;
        QVector<QPair<int, int>> signal;
    };

    graphicssence(int x, int y, int width, int height, Mode mode, QObject *parent = nullptr);
    void setupScene(QAction *newAction, QAction *quitAction);
signals:
    void Insignal(int);
    void Outsignal(int);
};

#endif // GRAPHICSSENCE_H
