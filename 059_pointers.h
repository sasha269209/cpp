#ifndef SASHA_059
#define SASHA_059

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

class pointers
{
private:
    int x;
    int y;

public:
    pointers();
    pointers(int x, int y);
    void show();
    pointers operator+(pointers other);
    pointers operator-(pointers other);
    pointers operator*(pointers other);
    pointers operator/(const pointers &other);
    pointers operator% (const pointers& other);
    bool operator== (const pointers& other) const;
    bool operator< (const pointers& other) const;
    bool operator> (const pointers& other) const;
};

#endif