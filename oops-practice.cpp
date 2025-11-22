#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Person{
public:
    int id;
    int age;
    string name;
    int population;
};



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Person p1;
    Person p2(25, "Alice", 101);
    

    return 0;
}