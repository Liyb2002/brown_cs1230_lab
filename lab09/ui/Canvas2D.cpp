/**
 * @file Canvas2D.cpp
 *
 * CS123 2-dimensional canvas.
 *
 */

#include <assert.h>
#include <memory>
#include "Canvas2D.h"
#include "Settings.h"
#include <QCoreApplication>
#include "filter/Filter.h"
#include "filter/FilterGray.h"
#include "filter/FilterInvert.h"
#include "filter/FilterIdentity.h"
#include "filter/FilterShift.h"

#include <QPainter>

Canvas2D::Canvas2D() {
    notifySizeChanged(width(), height());
}

Canvas2D::~Canvas2D()
{
}

/*    FILTER_INVERT,
FILTER_GRAYSCALE,
FILTER_IDENTITY,
FILTER_SHIFT_LEFT,
FILTER_SHIFT_RIGHT,
NUM_FILTER_TYPES
*/

void Canvas2D::filterImage() {
    // TODO: Task 1
     std::unique_ptr<Filter> m_filter;

    // TODO: Task 2
     switch (settings.filterType){
      case 1:
         m_filter = std::make_unique<FilterInvert>();
      case 2:
         m_filter = std::make_unique<FilterGray>();
     case 3:
        m_filter = std::make_unique<FilterIdentity>();
     case 4:
        m_filter = std::make_unique<FilterShift>(SHIFT_LEFT);
     case 5:
        m_filter = std::make_unique<FilterShift>(SHIFT_RIGHT);

     }


    // TODO: Task 3
     m_filter->apply(this);

    this->update();
}

void Canvas2D::paintEvent(QPaintEvent *e) {
    // You probably won't need to fill this in, but you can if you want to override any painting
    // events for the 2D canvas. For now, we simply call the superclass.
    SupportCanvas2D::paintEvent(e);
}
