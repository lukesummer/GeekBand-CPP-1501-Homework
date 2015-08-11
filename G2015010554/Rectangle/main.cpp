//
//  main.cpp
//  Rectangle
//
//  Created by luke wang on 11/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Rectangle rec1(1,2,3,4);
    Rectangle rec2(rec1);
    cout << rec2.getLeftUp() << endl;
    Rectangle rec3(5,6,7,8);
    cout << rec3.getWidth() << " and " << rec3.getHeight() << " and " << rec3.getLeftUp() << endl;
    rec3 = rec2;
    cout << rec3.getWidth() << " and " << rec3.getHeight() << " and " << rec3.getLeftUp() << endl;
    return 0;
}
