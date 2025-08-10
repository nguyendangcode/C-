#include "phan_so.h"
#include <iostream>
void phan_so::in_phan_so(int tu,int mau){
    std::cout << "Phan so la: " << tu << "/" << mau << "\n";
}
phan_so phan_so::operator*(phan_so a) {
    phan_so kq;
    kq.tu = tu * a.tu;
    kq.mau = mau * a.mau;
    return kq;
}
phan_so::phan_so(){
    std::cout<<"khoi tao gia tri";
    tu =0;
    mau=1;
}
phan_so::~phan_so(){
    std::cout<<" huy khoi tao gia tri";
}