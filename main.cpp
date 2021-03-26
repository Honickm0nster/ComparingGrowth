//
//  main.cpp
//  Assignment_4
//
//  Created by Noah Honickman on 1/30/21.
//compares two accounts and sees how long it takes for one to surpass the other 

#include <iostream>
using namespace std;
int main() {
    //initial amounts for Daphne and Cleo
    double d = 100;
    double c = 100;
    
    //formulas for how each person's wealth grows
    d = d + (100*.1);
    c = c + (c*.05);
    
    //setting the year number
    int i =1; // one year has passed
    
    while (d > c){
        d = d + (100*.1);
        c = c + (c*.05);
        i ++;
    }
    cout << "Daphne's total is: " << d << " dollars.\n";
    cout << "Cleo's total is: " << c << " dollars.\n";
    cout << "It took " << i << " years for Cleo's fund to surpass Daphne's.\n";
    
    return 0;
}
