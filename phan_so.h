#pragma once
#include <iostream>

class phan_so {
public:
    int tu;
    int mau;

    phan_so();   // Constructor mặc định
    ~phan_so();  // Destructor
    phan_so(int tu_,int mau_);
    void in_phan_so(int tu, int mau);

    // Toán tử nhân
    phan_so operator*(phan_so a);
};
