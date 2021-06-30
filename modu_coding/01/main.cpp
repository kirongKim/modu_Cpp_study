#include <stdio.h>
#include <iostream>
#include <header_1.hpp>
//using namespace header1;

namespace Header1 

void print (void)
{
    printf("ssipal nun");
}

int main ()
{
    print();
    header_1::print();
    
    return 0;
}
