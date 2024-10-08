#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <stdexcept>

class Invoice {
public:
    // Constructor
    Invoice(const std::string& invoiceId);

    // Adds a service cost to the invoice
    void addServiceCost(double costDollars);

    // Returns the total amount owed
    double getDollarsOwed() const;

    // Returns the unique identifier for the invoice
    std::string getInvoiceId() const;

private:
    std::string invoiceId;
    double dollarsOwed = 0.0;
};

#endif // INVOICE_H