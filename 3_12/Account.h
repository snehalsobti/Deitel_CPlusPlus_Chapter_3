class Account{
    public:
        explicit Account(int initBal);
        void credit(int amount);
        void debit(int amount);
        int getBalance() const;
    private:
        int balance;
};