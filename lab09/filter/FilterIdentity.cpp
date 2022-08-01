#include "FilterIdentity.h"
#include "FilterUtils.h"
#include <iostream>

FilterIdentity::FilterIdentity()
{
    // TODO: Task 17 Initialize kernel for identity
    m_kernel = std::vector<float>(3);

}

FilterIdentity::~FilterIdentity()
{

}

void FilterIdentity::apply(Canvas2D *canvas) {
    std::cout <<"FilterIdentity calls";
    // TODO: Task 16 Call convolve function from superclass
    FilterUtils::Convolve2D(canvas->data(), canvas-> width(), canvas-> height(),  m_kernel);
    RGBA * pix = canvas->data();

    for (int i = 0; i < canvas->width() * canvas->height(); i++) {
        if(i < 10){
            std::cout<< "this pixel color is" << std::endl;
            std::cout<< "red is" << (float)pix[i].r << std::endl;
            std::cout<< "green is" << (float)pix[i].g << std::endl;
            std::cout<< "blue is" << (float)pix[i].b << std::endl;
            std::cout<< "alpha is" << (float)pix[i].a << std::endl;

        }

        pix[i] = RGBA (255, 0, 0, 0);
        }

 //   memcpyTest(canvas->data(), canvas-> width(), canvas-> height());
   canvas->update();

}

void FilterIdentity::memcpyTest(RGBA* data, int width, int height){
    RGBA* deepCopy = new RGBA[width*height];

    std::cout <<"sizeof(data)" << sizeof(data);
    std::cout <<"sizeof(result)" << sizeof(deepCopy);

        for (int i = 0; i < width * height; i++) {
            deepCopy[i] = RGBA(255, 0, 255, 0);
        }

        memcpy(data, deepCopy, sizeof(RGBA) * width*height);

        delete deepCopy;

}
