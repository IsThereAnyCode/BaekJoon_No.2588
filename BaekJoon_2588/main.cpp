//
//  main.cpp
//  BaekJoon_2588
//
//  Created by NoMore on 2022/09/04.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cin >> a >> b;
    cout << a * (b % 10) << endl;
    cout << a * ((b / 10) % 10) << endl;
    cout << a * ( b / 100) << endl;
    cout << a * b << endl;
    
    return 0;
}
