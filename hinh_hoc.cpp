#include "hinh_hoc.h"
#include <iostream>
int hinh_hoc::tinh_chu_vi(){
    return (dai+rong)/2;
}
int hinh_hoc::tinh_dien_tich(){
    return (dai*rong);
}
hinh_hoc::hinh_hoc(){
    std::cout<<"khoi tao gia tri";
    int dai =0;
    int rong=0;
}
hinh_hoc::~hinh_hoc(){
    std::cout<<" huy khoi tao gia tri";
}