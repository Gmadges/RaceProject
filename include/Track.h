#ifndef TRACK_H__
#define TRACK_H__

#include <vector>
#include "Segment.h"

class track
{
private:

    std::vector<class segment> segments;


public:

    track();
    ~track();


};

#endif
