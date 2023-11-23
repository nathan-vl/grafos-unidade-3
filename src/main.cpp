#include <iostream>
#include <vector>

#include "hopcroftKarp.hpp"

int main(int argc, char const *argv[])
{
    auto g = GrafoBiPartido{
        .a = std::vector<Vertice>({"A", "B", "C", "D", "E", "F"}),
        .b = std::vector<Vertice>({"1", "2", "3", "4", "5", "6"}),
        .matrizAdjacencia = {
            {true, true, true, false, false, false},
            {true, false, false, false, false, false},
            {false, true, false, true, false, false},
            {false, false, true, true, false, false},
            {false, false, false, false, true, true},
            {false, false, false, false, false, true},
        },
    };

    auto arestas = hopcroftKarp(g);
    std::cout << "Resultado:" << std::endl;
    for (auto &&aresta : arestas)
    {
        std::cout << "(" << aresta.v1 << ", " << aresta.v2 << ")" << std::endl;
    }

    return 0;
}
