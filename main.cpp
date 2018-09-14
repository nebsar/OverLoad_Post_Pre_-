/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 14, 2018, 3:34 AM
 */

#include <iostream>

struct Int {
    int m_val;

    Int(int val) : m_val(val) {
    }

    Int& operator++() { // pre-increment
        m_val++;
        return *this;
    }

    Int operator++(int dummy) {//post increment
        Int tmp = *this;
        ++(*this);
        return tmp;
    }
};

int main() {

    Int b = 100;

    Int z = b++;

    std::cout << z.m_val << '\n';

    b=100;

    z = ++b;

    std::cout << z.m_val << '\n';

    return 0;
}

