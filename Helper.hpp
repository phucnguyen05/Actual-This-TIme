#ifndef HELPER_H
#define HELPER_H
#include <math.h>
#include <cmath>
#include <cstdlib>

#include <utility>
class Helper{
public:
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        int x1=std::get<0>(item1);
        int y1=std::get<1>(item1);
        int x2=std::get<0>(item2);
        int y2=std::get<1>(item2);
        double x_result=(x1-x2)^2;
        double y_result=(y1-y2)^2;
        double combined_result=pow(x_result+y_result,0.5);
        return combined_result;
    }

};


#endif