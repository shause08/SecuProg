#include <iostream>
using namespace std;

#ifndef MONEY_HPP__
#define MONEY_HPP__

class Money{
    private:
        int dollars;
        int cents;
    public:
        Money(int balance);
        Money operator+(const Money &m) const;
        Money operator-(const Money &m) const;
        Money operator*(double val) const;
        Money operator/(const Money &m) const;

        bool operator==(const Money &m) const;
        bool operator!=(const Money &m) const;
        bool operator>(const Money &m) const;
        bool operator<(const Money &m) const;
        bool operator>=(const Money &m) const;
        bool operator<=(const Money &m) const;

        Money &operator+=(const Money &m);
        Money &operator-=(const Money &m);
        Money &operator*=(double val);
        Money &operator/=(const Money &m);

        Money(void);
        Money(int dollars, int cents);
        ~Money(void);
        friend std::ostream& operator<<(std::ostream& os, const Money& m);
};

#endif