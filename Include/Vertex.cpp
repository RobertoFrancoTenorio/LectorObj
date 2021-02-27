#include <iostream>
#include "Vertex.hpp"

using namespace std;

Vertex::Vertex()
{
    x=y=z=0.0;
}

Vertex::Vertex(float xi, float yi, float zi)
{
    x = xi;
    y = yi;
    z = yi;
}

void Vertex::Print()
{
    cout << this->x << this->y << this->z << endl;
}