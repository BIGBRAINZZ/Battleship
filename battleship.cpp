#include <iostream>
#include <string>
using namespace std; 

int main(){
bool battleship[4][4]= {
    {1, 0, 0, 0},
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 1}
}; 
int hits = 0; 
int attacks = 0; 

while(hits<4){
    int row,coulum; 

    cout << "Enter a row: ";
    cin >> row;

    cout << "Enter a coulmn: ";
    cin >> coulum;
    if (battleship[row][coulum] == 1 ){
        hits++;
        attacks++;
        cout << "You hit one!" << endl;
    }else{
        attacks++;
        cout << "Miss L" << endl; 
    }

    if (hits == 4){
        cout<<"You hit all the ships!" << endl; 
    }
}
}
