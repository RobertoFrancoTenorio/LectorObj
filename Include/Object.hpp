#ifndef OBJECT_H
#define OBJECT_H
#pragma once

#include <string>
#include <vector>
#include "Vertex.hpp"

using namespace std;

class Object
{
private:
    /* data */  
    vector<Vertex> vertices;
    vector<string> split(const string& str, const string& delim);
public:
    Object(string file);
};
#endif
