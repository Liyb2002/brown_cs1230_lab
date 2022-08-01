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

#include <iostream>

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

     if(settings.filterType == FILTER_INVERT){
         m_filter = std::make_unique<FilterInvert>();
     }

     if(settings.filterType == FILTER_GRAYSCALE){
         m_filter = std::make_unique<FilterGray>();
     }

     if(settings.filterType == FILTER_SHIFT_LEFT){
         m_filter = std::make_unique<FilterShift>(SHIFT_LEFT);
     }

     if(settings.filterType == FILTER_SHIFT_RIGHT){
         m_filter = std::make_unique<FilterShift>(SHIFT_RIGHT);
     }

     if(settings.filterType == FILTER_IDENTITY){
         m_filter = std::make_unique<FilterInvert>();
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
