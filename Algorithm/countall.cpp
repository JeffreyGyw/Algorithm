//
//  countall.cpp
//  Algorithm
//
//  Created by guyiwei on 6/12/15.
//  Copyright (c) 2015 guyiwei. All rights reserved.
//

#include "countall.h"
#include <iostream>
using namespace std;
int solution[5];    // 用來存放一組可能的數據

void print_solution()   // 印出一組可能的數據
{
    for (int i=0; i<5; i++)
        cout << i << ' ';
    cout << endl;
}

void backtrack(int n)   // n 為現在正在列舉的維度
{
    // it's a solution
    if (n == 5)
    {
        print_solution();
        return;
    }
    
    // 逐步列舉數字1到10，並且各自遞迴下去，列舉之後的維度
    solution[n] = 1;
    backtrack(n+1);
    
    solution[n] = 2;
    backtrack(n+1);

    solution[n] = 10;
    backtrack(n+1);
}