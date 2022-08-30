#ifndef Point_hpp
#define Point_hpp
#include <iostream>
using namespace std;
class Point{
private:
    int x, y;
public:
    Point();
    Point(int a, int b);
    ~Point();
    int getX();
    int getY();
    void set(int x, int y);
    friend istream& operator>> (istream &in, Point &point);
    friend ostream& operator<< (ostream &out, const Point &point);
    friend bool operator!=(const Point& a, const Point& b);
};
#endif

