#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Object.hpp"
#include "Edge.hpp"
#include "Face.hpp"

using namespace std;

Object::Object(string obj)
{
    string cad;
    string prueba;

    ifstream archivo(obj, prueba);
    while(getline(archivo, cad))
    {
        vector<string> elems = this->split(cad, " ");
        if(elems.size() >0 )
        {
            if(elems[0].compare("v") == 0)
            {
                char vertice1[10];
                char vertice2[10];
                char vertice3[10];

                fscanf(archivo, )

                float x = 0.0;
                float y = 0.0;
                float z = 0.0;

                Vertex vertice(x, y, z);
                this->vertices.push_back(vertice);
            }
            if(elems[0].compare("f") == 0)
            {
                vector<string> indice1 = split(elems[1], "/");
                vector<string> indice2 = split(elems[2], "/");
                vector<string> indice3 = split(elems[3], "/");

                Edge arista1(vertices[indice1-1], vertices[indice2-1]);
                Edge arista2(vertices[indice2-1], vertices[indice3-1]);
                Edge arista3(vertices[indice3-1], vertices[indice1-1]);

                Face cara1(arista1, arista2, arista3);

                caras.push_back(cara1);
            }
        }   
    }
}

vector<string> Object::split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if(pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if(!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}

bool Lector::AbreArchivo(char * NombreArchivo, char* modo)
{
    if(Arc)
}