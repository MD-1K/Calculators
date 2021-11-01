#include <cstdlib>
#include <iostream> 

using namespace std;

//TIP CALCULATOR

int main(){
double total = 0;
double percentage;
double final_tip;

cout << "Please enter the total: ";
cin >> total ;
cout << endl;

cout << "Please enter the percentage You would like to tip: ";
cin >> percentage ;
cout << endl;

final_tip = total*(percentage/100);

cout << "Your tip will be: $" << final_tip;





}