    #include "Store.h"
    #include <string>
    #include "StockItem.h"
    #include <iostream>
    
    Store::Store(){
        current_capacity=0;
        max_capacity=0;
    }   
         
    Store::Store(int capacity){
        max_capacity=capacity;   
        current_capacity=0;
         stock_list=new StockItem[capacity];
    }

    int Store::get_Total_Stock_Count(){
        return current_capacity;
    }

    int Store::get_Stock_Count(int item_code){
        int count=0;
        int current_code=0;
        for (int i=0;i<current_capacity;i++){
            current_code=stock_list[i].get_item_code();
            if (current_code==item_code){
                count++;
            }
        }
        return count;

    }

    StockItem* Store::get_Stock_List(){
        return stock_list;
    }

    bool Store::add_Stock(StockItem new_stock){
        if(current_capacity<max_capacity){
            stock_list[current_capacity]=new_stock;
            current_capacity++;
        }else{
            return false;
        }
    }

    Store::~Store(){
        delete[] stock_list;
    }