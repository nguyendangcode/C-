#include <iostream>
#include "hinh_hoc.h"
#include "phan_so.h"
using namespace std;
int main(void){
    phan_so A;
    A.tu=3;
    A.mau=1;
    phan_so B;
    B.tu =4;
    B.mau =1;
    phan_so C= A * B;
    return 0;
}