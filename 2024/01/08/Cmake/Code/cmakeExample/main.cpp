#include "include/myMath.h"
#include<iostream>
#include"include/div.h"
// #include"include/muti.h"
int main()
{
    MyMath a;
    std::cout << "加法: " << a.Add(1,2) << std::endl;
    std::cout << "减法: " << div123(1, 2) << std::endl;
    // std::cout << "乘法: " << muti(1, 2) << std::endl;
    return 0;
}