#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

int main(){
    Invoice sampleInvoice("1002", "Mouse", 5, 8);
    cout << "Number: " << sampleInvoice.getNumber() << endl;
    cout << endl;
    cout << "Description: " << sampleInvoice.getDescription() << endl;
    cout << endl;
    cout << "Quantity: " << sampleInvoice.getQuantity() << endl;
    cout << endl;
    cout << "Price per item: " << sampleInvoice.getPrice() << endl;
    cout << endl;
    cout << "Invoice amount: " << sampleInvoice.getInvoiceAmount() << endl;
    cout << endl;

    sampleInvoice.setNumber("1003");
    sampleInvoice.setDescription("Disk");
    sampleInvoice.setQuantity(10);
    sampleInvoice.setPrice(65);
    
    cout << "Number: " << sampleInvoice.getNumber() << endl;
    cout << endl;
    cout << "Description: " << sampleInvoice.getDescription() << endl;
    cout << endl;
    cout << "Quantity: " << sampleInvoice.getQuantity() << endl;
    cout << endl;
    cout << "Price per item: " << sampleInvoice.getPrice() << endl;
    cout << endl;
    cout << "Invoice amount: " << sampleInvoice.getInvoiceAmount() << endl;
    cout << endl;
}