#ifndef SEGMENT_H__
#define SEGMENT_H__

#include <ngl/Vec3.h>

class segment
{
private:
    ngl::Vec3 m_LP;
    ngl::Vec3 m_RP;

    //array of driving lines

public:
    segment(int numLines);
    ~segment();

};

#endif
