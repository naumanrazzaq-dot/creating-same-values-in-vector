#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main(){

    vector<int> vec(3,9); // it means size is 3 and we want 9 in each box
    for(int val : vec){
        cout<<val<<" ";
    }
}