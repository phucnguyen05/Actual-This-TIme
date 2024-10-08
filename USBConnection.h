#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>

class USBConnection {
private:
    int ID; 

    USBConnection(int id) : ID(id) {}

public:
    ~USBConnection() {
        ids.push(ID); 
    }

    static USBConnection* create() {
        if (ids.empty()) {
            return nullptr; 
        }
        int id = ids.top(); 
        ids.pop(); 
        return new USBConnection(id); 
    }
    static std::stack<int> ids;
    int getID() const {
        return ID;
    }
};
std::stack<int> USBConnection::ids({3, 2, 1});

#endif // USBCONNECTION_H