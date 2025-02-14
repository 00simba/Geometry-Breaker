#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
struct Square {
    float x;
    float y;
    float posx;
    float posy;
    bool active;
};

Square squares[100] = {
                    // Column 1
                    {80.f, 80.f, 1180.f, 20.f, true},
                    {80.f, 80.f, 1180.f, 120.f, true},
                    {80.f, 80.f, 1180.f, 220.f, true},
                    {80.f, 80.f, 1180.f, 320.f, true},
                    {80.f, 80.f, 1180.f, 420.f, true},
                    {80.f, 80.f, 1180.f, 520.f, true},
                    {80.f, 80.f, 1180.f, 620.f, true},
                    // Column 2
                    {80.f, 80.f, 1080.f, 20.f, true},
                    {80.f, 80.f, 1080.f, 120.f, true},
                    {80.f, 80.f, 1080.f, 220.f, true},
                    {80.f, 80.f, 1080.f, 320.f, true},
                    {80.f, 80.f, 1080.f, 420.f, true},
                    {80.f, 80.f, 1080.f, 520.f, true},
                    {80.f, 80.f, 1080.f, 620.f, true},
                    // Column 3
                    {80.f, 80.f, 980.f, 20.f, true},
                    {80.f, 80.f, 980.f, 120.f, true},
                    {80.f, 80.f, 980.f, 220.f, true},
                    {80.f, 80.f, 980.f, 320.f, true},
                    {80.f, 80.f, 980.f, 420.f, true},
                    {80.f, 80.f, 980.f, 520.f, true},
                    {80.f, 80.f, 980.f, 620.f, true},
};

int squaresLength = sizeof(squares) / sizeof(squares[0]);

#endif