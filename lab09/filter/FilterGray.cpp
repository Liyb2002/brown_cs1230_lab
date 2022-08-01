#include "FilterGray.h"
#include <iostream>

int FilterGray::RGBAToGray(const RGBA &pixel) {
    // TODO: Task 5
//    std::cout << "FilterGray::RGBAToGray called";
    return 0.299*pixel.r + 0.587*pixel.g + 0.114*pixel.b;



}



FilterGray::~FilterGray()
{
}

void FilterGray::apply(Canvas2D *canvas) {
    int width = canvas->width();

        RGBA* current_pixel = nullptr;

        /* Initialize the first pixel of the first row */
        RGBA* current_row = canvas->data();

        RGBA* data = canvas->data();
        size_t currentIndex = 0;

        for (int r = 0; r < canvas->height(); r++) {
            current_pixel = current_row;
            currentIndex = r * width;

            for (int c = 0; c < canvas->width(); c++) {
                // TODO: Task 4
                int Li = RGBAToGray(data[currentIndex+c]);

                if(c < 10){
                    std::cout << "current_pixel.r is" << (int)data[currentIndex+c].r << std::endl;
                    std::cout << "current_pixel.g is" << (int)data[currentIndex+c].g << std::endl;
                    std::cout << "current_pixel.b is" << (int)data[currentIndex+c].b << std::endl;
                    std::cout << "Li is" << Li << std::endl;

                }
                // TODO: Task 6
                data[currentIndex+c].r = Li;
                data[currentIndex+c].g = Li;
                data[currentIndex+c].b = Li;





                /* Advance to the next pixel */
                current_pixel++;
                currentIndex++;
            }
            current_row += width;
        }
        canvas->update();

/*
    for (int r = 0; r < canvas->height(); r++) {
        current_pixel = current_row;
        currentIndex = r * width;

        for (int c = 0; c < canvas->width(); c++) {
            // TODO: Task 4
            unsigned char thisChar = RGBAToGray(*current_pixel);

            // TODO: Task 6
            current_pixel->r=thisChar;
            current_pixel->g=thisChar;
            current_pixel->b=thisChar;



            /* Advance to the next pixel
            current_pixel++;
            currentIndex++;
        }
        current_row += width;
    }
        */
}

