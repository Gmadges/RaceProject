#ifndef CAR_H__
#define CAR_H__

#include<ngl/Vec3.h>
#include<ngl/Mat4.h>

class car
{
private:

    ngl::Vec3 m_pos;

    //steer -1.0...1.0
    float m_steer;

    //throttle/brake -1.0...1.0
    float m_throttle;

    // vehicle orientation
    ngl::Mat4 m_orient;





public:

};

#endif
