//
//  main.cpp
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster *p;

    monster m1("Skibidi",20,1);
    monster m2("Ohio"),m4("Sigma",30);
    monster x[5]={{"Kendall",5},{"Kylie",10,20}};
    p=new monster("Ballz",10,67);
    delete p; //destructor p
    return 0; //destructor x,m4,m2,m1
} 
