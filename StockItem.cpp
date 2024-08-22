#include "Stockitem.h"
#include <string>

StockItem::StockItem(){
    state="";
    item_code=0;
}           

StockItem::StockItem(int code_num, std::string description){
    item_code=code_num;
    state=description;
}    

std::string StockItem::get_description(){
    return state;
}  

int StockItem::get_item_code(){
    return item_code;
}

~StockItem();             