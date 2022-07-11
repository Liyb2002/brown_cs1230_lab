#include "FilterIdentity.h"
#include "FilterUtils.h"

FilterIdentity::FilterIdentity()
{
    // TODO: Task 17 Initialize kernel for identity
    m_kernel = std::vector<float>(3);

}

FilterIdentity::~FilterIdentity()
{
}

void FilterIdentity::apply(Canvas2D *canvas) {
    // TODO: Task 16 Call convolve function from superclass
    FilterUtils::Convolve2D(canvas->data(), canvas-> width(), canvas-> height(),  m_kernel);

}
