#include "phan_so.h"
#include <iostream>
void phan_so::in_phan_so(int tu,int mau){
    std::cout<<"phan so la: %d/%d\n"<<tu,mau;
}
void phan_so::nhan_phan_so(int tu1,int mau1,int tu2,int mau2){
    in_phan_so(tu1*tu2,mau1*mau2);
}
phan_so::phan_so(){
    std::cout<<"khoi tao gia tri";
    int tu =0;
    int mau=1;
}
phan_so::~phan_so(){
    std::cout<<" huy khoi tao gia tri";
}