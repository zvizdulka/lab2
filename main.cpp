#include <iostream>
#include <string>
#include <sstream>
#include <exception>
#include "Battlefield.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    try{
        if(argc != 3){
            throw invalid_argument("Wrong numbers of arguments. There should be 3 of them.");
        }
        
        //stringstream convert;{
        //    argv[2];
       // };
        int radius;
        sscanf(argv[2], "%d", &radius);
        //convert >> radius;
        Battlefield field(radius, argv[1]);
        field.goalSearch();
        field.result();
    }
    catch(invalid_argument err){
        cout << err.what() << endl;
    }
}

