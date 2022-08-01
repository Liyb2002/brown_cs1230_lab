#ifndef FILTERIDENTITY_H
#define FILTERIDENTITY_H

#include "Filter.h"

class FilterIdentity : public Filter {
public:
    FilterIdentity();
    virtual ~FilterIdentity() override;

    virtual void apply(Canvas2D *canvas) override;

    void memcpyTest(RGBA* data, int width, int height);

private:
    std::vector<float> m_kernel;
};

#endif

