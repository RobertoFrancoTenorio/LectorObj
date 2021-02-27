#ifndef EDGE_h
#define EDGE_H
#pragma once

#include "Vertex.hpp"

class Edge
{
private:
    Vertex vini, vend;
public:
    Edge(Vertex vi, Vertex ve);
};
#endif
