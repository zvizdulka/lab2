#include "Battlefield.hpp"
#include <fstream>
#include <cmath>
Battlefield::Battlefield(int radius, string fileCoordinates){
    r = radius;
    save(fileCoordinates);
    maxNeighbors = 0;
}

Battlefield::~Battlefield(){}

void Battlefield::save(string file){
    ifstream in(file);
    if (in.is_open()){
        while (!in.eof()){
            Point p;
            in >> p;
            field.push_back(p);
        }
    }
    else{
        throw invalid_argument("File with coordinates not found.");
    }
    in.close();
}

int Battlefield::countNeighbors(Point p){
    int count = 0;
    for(int i = 0; i < field.size(); i++){
        if(pow((field[i].getX() - p.getX()), 2) + pow((field[i].getY() - p.getY()), 2) <= pow(r, 2)){
            count++;
        }
    }
    return count;
}

void Battlefield::goalSearch(){
    int goals = 0;
    Point cur;
    for(int i = 0 - r; i < 100; i++){
        for(int j = 0 - r; j < 100; j++){
            cur.set(i, j);
            goals = countNeighbors(cur);
            if(goals > maxNeighbors){
                maxNeighbors = goals;
                bestGoal = cur;
            }
        }
    }
}

void Battlefield::result(){
    cout << "Number of goals: " << maxNeighbors << endl;
    cout << "Coor: " << bestGoal << endl;
}


