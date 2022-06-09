#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

    Invoice :: Invoice(string number, string description, int quan, int price)
        : partNum(number), partDesc(description)
    {
        setQuantity(quan);
        setPrice(price);
    }

    string Invoice :: getNumber() const
    {
        return partNum;
    }

    string Invoice :: getDescription() const
    {
        return partDesc;
    }

    int Invoice :: getQuantity() const
    {
        return quantity;
    }

    int Invoice :: getPrice() const
    {
        return pricePerItem;
    }

    int Invoice :: getInvoiceAmount() const
    {
        return quantity * pricePerItem;
    }

    void Invoice :: setNumber(string number)
    {
        partNum = number;
    }

    void Invoice :: setDescription(string description)
    {
        partDesc = description;
    }

    void Invoice :: setQuantity(int quan)
    {
        if (quan > 0)
            quantity = quan;
        else
            quantity = 0;
    }   

    void Invoice :: setPrice(int price)
    {
        if (price > 0)
            pricePerItem = price;
        else
            pricePerItem = 0;
    }