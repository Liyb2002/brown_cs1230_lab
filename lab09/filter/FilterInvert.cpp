#include "FilterInvert.h"
#include <iostream>

FilterInvert::~FilterInvert()
{
}

void FilterInvert::apply(Canvas2D *canvas) {


    int width = canvas->width();

    RGBA* current_pixel = nullptr;
    RGBA* current_row = canvas->data();

    RGBA* data = canvas->data();
    size_t currentIndex = 0;


    // TODO: Task 8 [Optional] Use bitwise complement to set inversion

    for (int r = 0; r < canvas->height(); r++) {
        current_pixel = current_row;
        currentIndex = r * width;

        for (int c = 0; c < canvas->width(); c++) {
            // TODO: Task 7 Update the color with its inversion
            data[currentIndex+c].r = 255 -data[currentIndex+c].r;
            data[currentIndex+c].g = 255 - data[currentIndex+c].g;
            data[currentIndex+c].b = 255 - data[currentIndex+c].b;


            // CONTINUED: Task 8 [Optional]

            current_pixel++;
        }
        current_row += width;
    }
}
