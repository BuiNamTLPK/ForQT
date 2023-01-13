#ifndef PIXMAPITEM_H
#define PIXMAPITEM_H

//Own
#include "graphicssence.h"

//Qt
#include <QGraphicsObject>

class pixmapitem : public QGraphicsObject
{
public:
    pixmapitem(const QString &fileName, graphicssence::Mode mode, QGraphicsItem *parent = nullptr);
    pixmapitem(const QString &fileName, QGraphicsScene *scene);
private:
    QPixmap pix;
};

#endif // PIXMAPITEM_H
