#ifndef StockItem
#define StockItem

class StockItem{
public:
    StockItem();                  // a default constructor 
    // a constructor that takes the item description and the item code number as inputs
    StockItem(int code_num, std::string description);      
    std::string get_description();    // returns the item description
    int get_item_code();       // returns the item code of the item
    ~StockItem();               //A default destructor
private:
    std::string state;
    int item_code;

};

#endif