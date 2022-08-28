
/*INSTRUCTIONS
You will be given an array of  integers and you have to print the integers in the reverse order.
From <https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen> 
*/

#include <cmath>
#include <cstdio>
//use vector for dinamically changing the array size based on user input
#include <vector>
#include <iostream>
#include <algorithm>
//library to iterate values in array
#include<iterator>
using namespace std;

int main() {
//variable to store array size   
   int userSize;
//variable to store array values
    int values;
   //initialize vector of type integer named vec
   std::vector<int> vec; 
   //get the array size value from user
   cin >> userSize;
   //resize vector based on input stored on userSize variable
    vec.resize(userSize);
    
//for loop to get the array values in each corresponding index
for (int i = 0; i < userSize; ++i){
    int array_slot = i;
    cin >> values;
    vec[array_slot] = values;
    }
    
 // Print all elements in vector in reverse order
    std::copy(  vec.rbegin(),
                vec.rend(),
                std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;
    return 0;

