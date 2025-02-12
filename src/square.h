#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
struct Square {
    float x;
    float y;
    float posx;
    float posy;
};

Square squares[100] = {
                    // Column 1
                    {80.f, 80.f, 1180.f, 20.f},
                    {80.f, 80.f, 1180.f, 120.f},
                    {80.f, 80.f, 1180.f, 220.f},
                    {80.f, 80.f, 1180.f, 320.f},
                    {80.f, 80.f, 1180.f, 420.f},
                    {80.f, 80.f, 1180.f, 520.f},
                    {80.f, 80.f, 1180.f, 620.f},
                    // Column 2
                    {80.f, 80.f, 1080.f, 20.f},
                    {80.f, 80.f, 1080.f, 120.f},
                    {80.f, 80.f, 1080.f, 220.f},
                    {80.f, 80.f, 1080.f, 320.f},
                    {80.f, 80.f, 1080.f, 420.f},
                    {80.f, 80.f, 1080.f, 520.f},
                    {80.f, 80.f, 1080.f, 620.f},
                    // Column 3
                    {80.f, 80.f, 980.f, 20.f},
                    {80.f, 80.f, 980.f, 120.f},
                    {80.f, 80.f, 980.f, 220.f},
                    {80.f, 80.f, 980.f, 320.f},
                    {80.f, 80.f, 980.f, 420.f},
                    {80.f, 80.f, 980.f, 520.f},
                    {80.f, 80.f, 980.f, 620.f},
};
int squaresLength = sizeof(squares) / sizeof(squares[0]);

#endif