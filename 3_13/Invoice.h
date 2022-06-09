#include <string>

class Invoice{
    public:
        explicit Invoice(std :: string number, std :: string description,
                         int quan, int price);
        std :: string getNumber() const;
        std :: string getDescription() const;
        int getQuantity() const;
        int getPrice() const;
        int getInvoiceAmount() const;
        void setNumber(std :: string number);
        void setDescription(std :: string description);
        void setQuantity(int quan);    
        void setPrice(int price);
    private:
        std :: string partNum;
        std :: string partDesc;
        int quantity;
        int pricePerItem;
};