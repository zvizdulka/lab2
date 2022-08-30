#ifndef Battlefield_hpp
#define Battlefield_hpp
#include "Point.hpp"
#include <vector>
class Battlefield{
private:
    vector < Point > field;
    int r;
    int maxNeighbors;
    Point bestGoal;
public:
    Battlefield(int r, string file);
    ~Battlefield();
    void save(string file);
    int countNeighbors(Point p);
    void goalSearch();
    void result();
};
#endif

