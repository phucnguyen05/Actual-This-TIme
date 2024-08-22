#ifndef Store_H
#define Store_H
#include "StockItem.h"

class Store{
public: 
    Store();           
    Store(int capacity); 
    int get_Total_Stock_Count(); 
    int get_Stock_Count(int item_code);
    StockItem *get_Stock_List();
    bool add_Stock(StockItem new_stock);
    ~Store();
private:
    int max_capacity;
    int current_capacity;
    StockItem* stock_list;
};
#endif 