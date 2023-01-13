#include "pixmapitem.h"

pixmapitem::pixmapitem(const QString &fileName, graphicssence::Mode mode,
                       QGraphicsItem *parent): QGraphicsObject(parent)
{

}

//
pixmapitem::pixmapitem(const QString &fileName, QGraphicsScene *scene)
    :QGraphicsObject(), pix(fileName)
{

}
