#include "FilterUtils.h"
#include <algorithm>
#include "math.h"
#include <cstring>


namespace FilterUtils {

inline unsigned char REAL2byte(float f) {
    int i = static_cast<int>((f * 255.0 + 0.5));
    return (i < 0) ? 0 : (i > 255) ? 255 : i;
}

void Convolve2D(RGBA* data, int width, int height, const std::vector<float> &kernel) {
    // TODO: Task 9 Create buffer to store new image data
    RGBA result [width*height];


    // TODO: Task 10 Obtain kernel dimension
    float dim = sqrt(kernel.size());



    for (int r = 0; r < height; r++) {
        for (int c = 0; c < width; c++) {
            size_t centerIndex = r * width + c;

            // TODO: Task 11 Initialize color to accumulate convolution data
            float red_acc, green_acc, blue_acc = 0;


            // TODO: Task 12
            // Iterate over the kernel using the value from task 10
            // Obtain the value at current index of kernel
            // Find correct index in original image data
            // Accumulate the kernel applied to pixel value in color_acc
            int count = 0;
            for(int i=0-dim/2; i<dim/2; i++){
                for(int j=0-dim/2; j<dim/2; j++){
                    int thisX = centerIndex +i;
                    int thisY = centerIndex +j;
                    if(thisX>0 && thisX <width && thisY>0 && thisY<height){
                        count += 1;
                        RGBA curVal = data[thisX + thisY*width];
                        red_acc+= curVal.r;
                        green_acc+=curVal.g;
                        blue_acc+=curVal.b;
                    }
                }

            }


            // TODO: Task 13 Ignore outside bounds


            // TODO: Task 14 Update buffer with accumulated color
            red_acc = red_acc/count;
            green_acc = green_acc/count;
            blue_acc = blue_acc/count;

            RGBA thisColor = RGBA(red_acc, green_acc, blue_acc, 0);
            result[c + r*width] = thisColor;
        }
    }

    // TODO: Task 15 Copy over buffer to canvas data
    memcpy(data, result, sizeof(data));

}

}
