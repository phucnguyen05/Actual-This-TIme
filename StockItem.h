#ifndef StockItem
#define StockItem
#include <string>

class StockItem{
public:
    StockItem();                 
    StockItem(int code_num, std::string description);      
    std::string get_description();  
    int get_item_code();       
    ~StockItem();               
private:
    std::string state;
    int item_code;

};

#endif