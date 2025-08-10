#pragma once
#include <iostream>

class phan_so {
public:
    int tu;
    int mau;

    phan_so();   // Constructor mặc định
    ~phan_so();  // Destructor

    void in_phan_so(int tu, int mau);

    // Toán tử nhân
    phan_so operator*(phan_so a);
};
