#include "FilterUtils.h"
#include <algorithm>
#include "math.h"
#include <cstring>

#include <iostream>


namespace FilterUtils {

inline unsigned char REAL2byte(float f) {
    int i = static_cast<int>((f * 255.0 + 0.5));
    return (i < 0) ? 0 : (i > 255) ? 255 : i;
}

void Convolve2D(RGBA* data, int width, int height, const std::vector<float> &kernel) {
    std::cout <<"Convolve!";

    // TODO: Task 9 Create buffer to store new image data
    RGBA* result = new RGBA[width*height];


    // TODO: Task 10 Obtain kernel dimension
    float dim = 3;



    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {

            // TODO: Task 11 Initialize color to accumulate convolution data
            float red_acc = 0;
            float green_acc = 0;
            float blue_acc = 0;


            // TODO: Task 12
            // Iterate over the kernel using the value from task 10
            // Obtain the value at current index of kernel
            // Find correct index in original image data
            // Accumulate the kernel applied to pixel value in color_acc
            float count = 0;
            for(int i=0-dim/2; i<dim/2; i++){
                for(int j=0-dim/2; j<dim/2; j++){

                    int thisX = c +i;
                    int thisY = r +j;

                    if(thisX>0 && thisX <width && thisY>0 && thisY<height){
                        count += 1.f;
                        RGBA curVal = data[thisX + thisY*width];

                        red_acc+= (float)curVal.r;
                        green_acc+=(float)curVal.g;
                        blue_acc+=(float)curVal.b;

                    }
                }

            }


            // TODO: Task 13 Ignore outside bounds


            // TODO: Task 14 Update buffer with accumulated color


            red_acc = red_acc/count;
            green_acc = green_acc/count;
            blue_acc = blue_acc/count;

                RGBA *tempt = new RGBA (REAL2byte(red_acc/255.),REAL2byte(green_acc/255.),REAL2byte(blue_acc/255.),0);
                result[c + r*width] = *tempt;



        }
    }

    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {

            data[c + r*width] = result[c + r*width];

        }
        }
/*
    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            if(r < 10){
                std::cout<< "red is" << (float)data[c + r*width].r << std::endl;
                std::cout<< "green is" << (float)data[c + r*width].g << std::endl;
                std::cout<< "blue is" << (float)data[c + r*width].b << std::endl;

            }

        }
        }
*/

    // TODO: Task 15 Copy over buffer to canvas data
 //   memcpy(data, result, sizeof(RGBA) * width*height);

  //  delete result;

}

}
