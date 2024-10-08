#include "Invoice.h"

// Constructor
Invoice::Invoice(const std::string& invoiceId) : invoiceId(invoiceId), dollarsOwed(0.0) {}

// Adds a service cost to the invoice
void Invoice::addServiceCost(double costDollars) {
    if (costDollars < 0) {
        throw std::invalid_argument("Cost must be a positive amount.");
    }
    dollarsOwed += costDollars;
}

// Returns the total amount owed
double Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

// Returns the unique identifier for the invoice
std::string Invoice::getInvoiceId() const {
    return invoiceId;
}