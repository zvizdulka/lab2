#include "Point.hpp"
Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int a, int b){
    x = a;
    y = b;
}

Point::~Point(){}
istream& operator>> (istream &in, Point &point){
    in >> point.x;
    char c;
    in >> c;
    in >> point.y;
    return in;
}

ostream& operator<< (ostream &out, const Point &point){
    out << point.x << ", " << point.y << "\n";
    return out;
}

bool operator!=(const Point& a, const Point& b){
    return (a.x != b.x || a.y != b.y);
}

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

void Point::set(int x, int y){
    this -> x = x;
    this -> y = y;
}

