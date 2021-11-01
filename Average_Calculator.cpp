#include <cstdlib>
#include <iostream> 
#include <fstream>

using namespace std;

//AVERAGE CALCULATOR

int main(){
double number = 0;
string x;
int count = 0;
ofstream myfile;
ifstream F;
int start = 0;
double file_read = 0;
double average;
double sum = 0;
int n;


myfile.open("Numbers.txt");
cout << "Enter the Numbers You would like the average of (each number followed by a space): " << endl;
getline(cin, x);

int sp_pos = 0;

while(count <= x.size()){
	
sp_pos = x.find(" ",sp_pos+1);
myfile << x.substr(start, (sp_pos - start)) << endl;
start = sp_pos+1;
count = sp_pos;

}

count = 0; 

F.open("Numbers.txt");

while(F >> file_read){
sum = file_read + sum;
count++;
}

count = count;

average = sum/count;

cout << "The Average of the given numbers is: " << average << endl;

}