#ifndef GRIDITEM_H
#define GRIDITEM_H
#include <utility>
#include <math.h>
#include <cmath>
#include <cstdlib>


class GridItem{
public:
    GridItem(int x, int y, int width, int height) : GridItem(){
        coordinates={x,y};
        this->width=width;
        this->height=height;
        GridItemCount++;
    }

    GridItem(){
        width=0;
        height=0;
        coordinates={0,0};
    }

    void setCoordinates(int x, int y){
        coordinates={x,y};
    }

    std::pair<int,int> getCoordinates(){
        return coordinates;
    }

    int getGridWidth(){
        return width;
    }

    int getGridHeight(){
        return height;
    }

    int getActiveGridItemCount(){
        return GridItemCount;
    }

    virtual ~GridItem(){
        GridItemCount--;
    }

    int width;
    int height;
    std::pair<int,int> coordinates;
    int GridItemCount=0;
};

#endif