#include<iostream>
using namespace std;

int main()
{ 
    int Arr[] = {1 , 2, 5 , 7 , 8};
    

    for each(Arr.begin() , Arr.end()  , [](int y){cout<<y<<"\t"});


    return 0;
}