#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <iostream>
#include <stack>

class USBConnection {
private:
    int ID; // Unique ID for the USB connection

    // Private constructor
    USBConnection(int id) : ID(id) {}

public:
    // Public destructor to return the ID to the stack
    ~USBConnection() {
        ids.push(ID); // Return the ID to the stack when the object is destroyed
    }

    // Static function to create a new USBConnection object
    static USBConnection* create() {
        if (ids.empty()) {
            return nullptr; // No available ID
        }
        int id = ids.top(); // Get the available ID
        ids.pop(); // Remove the ID from the stack
        return new USBConnection(id); // Create and return the new object
    }

    // Static stack to keep track of available IDs
    static std::stack<int> ids;

    // Function to get the ID of the USB connection
    int getID() const {
        return ID;
    }
};

// Initialize the static stack with available IDs
std::stack<int> USBConnection::ids({3, 2, 1});

#endif // USBCONNECTION_H