#ifndef HELPER_H
#define HELPER_H
#include <math.h>
#include <cmath>
#include <cstdlib>

#include <utility>
class Helper{
public:
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        int x1=item1.first;
        int y1=item1.second;
        int x2=item2.first;
        int y2=item2.second;
        double x_result=pow(x1-x2,2);
        double y_result=pow(y1-y2,2);
        double combined_result=pow(x_result+y_result,0.5);
        return combined_result;
    }

};


#endif