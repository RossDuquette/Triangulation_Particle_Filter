#ifndef VIEWER_H_
#define VIEWER_H_

#include <vector>

#include "beacon.h"
#include "vehicle.h"

class Viewer
{
    public:
        Viewer(std::vector<Vehicle>& vehicles, std::vector<Beacon>& beacons,
               float size_m);
        void update();

    private:
        float m_to_pix(float m);
        void draw_square(float x, float y, float size);
        void draw_circle(float x, float y, float r);
        void draw_vehicles();
        void draw_beacons();
        void draw_distances();

        std::vector<Vehicle>& vehicles_;
        std::vector<Beacon>& beacons_;
        const float size_m_;
        const int size_pix_;

        void set_colour(float r, float g, float b);
#define WHITE 1.0,1.0,1.0
#define BLACK 0.0,0.0,0.0
#define RED   1.0,0.0,0.0
#define GREEN 0.0,1.0,0.0
#define BLUE  0.0,0.0,0.1
};

#endif
