#include <iostream>
using namespace std;

//convert input in celsius degrees
float converter(float val)
{
	float celsius = (val-32)*5/9; //convert value
	return 	celsius; //return celsius
};

int main(void)
{
	float F, answer;
	cout << "Enter a Fahrenheit temperature:"; //prompt user for temperature
	cin >> F; //get value
	answer = converter(F); //convert value
	cout << "Result of conversion to Celsius: \n" << answer << "\n"; //print result
	system("PAUSE"); //pause system to let user see the answer
	return 0;

}