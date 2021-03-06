//
//  main.cpp
//  geekband_homework2
//
//  Created by luke wang on 31/8/15.
//  Copyright (c) 2015 Luke. All rights reserved.
//

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));//随机种子
    int total_count = 20;
    int qualified_count = 0;
    Shape** shape_list = new Shape*[total_count];
    for (int i = 0; i < total_count/2; i++)
    {
        shape_list[i] = new Rectangle(rand()%10+1,rand()%10+1,rand(),rand(),i);
        shape_list[i+total_count/2] = new Circle(rand()%10+1,rand()%10+1,rand()%10+1,i+10);
    }
    cout << "The areas of the original list are: ";
    for (int i = 0; i <total_count; i++) {
        cout << shape_list[i]->getArea() << " ";
        if (shape_list[i]->getArea() > 50)
        {
            qualified_count ++;
        }
    }
    cout << endl;
    Shape** qualified_shape_list = new Shape*[qualified_count];
    cout << "The areas of qualifed list are: ";
    for (int i = 0; i<total_count; i++)
    {
        if(shape_list[i]->getArea() > 50)
        {
            qualified_shape_list[i] = shape_list[i];
            cout << shape_list[i]->getArea() << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < total_count; i++)
    {
        delete shape_list[i];
    }
    return 0;
}
