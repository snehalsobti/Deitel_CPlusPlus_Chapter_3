class Date
{
public:
    explicit Date(int year, int month, int day);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void setYear(int year);
    void setMonth(int month);
    void setDay(int day);
    void displayDate() const;
private:
    int myYear;
    int myMonth;
    int myDay;
};