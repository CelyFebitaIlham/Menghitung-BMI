#include <iostream>
#include <cmath>

using namespace std;
int main(){ 

cout << "-------PROGRAM MENGHITUNG BMI BERDASAR TINGGI BADAN-------";

cout <<endl;

cout << "I N P U T" <<endl;

double tb, bb ;
cout << "Masukan Tinggi Badan =";
cin >> tb;
cout << "Masukan Berat Badan =";
cin >> bb;

cout <<endl;

cout << "R U M U S" << endl;

cout << "Masukan Tinggi Yang Dikuadratkan =";
cout << tb*tb <<endl;

cout << "O U T P U T" <<endl;

double bmi = (bb) / (tb*tb);
cout << bmi;
cout<<endl;

if (bmi < 18.5){
	cout << "Underweight" <<endl;

}
else if (bmi >= 18.5 && bmi <= 24.9){
	cout << "Normal Weight" <<endl;
}
else if (bmi >= 25.0 && bmi <= 29.9){
	cout << "OverWeight" <<endl;
}

}




