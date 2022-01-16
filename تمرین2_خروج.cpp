#include<iostream>
#include <sstream>
#include<string>

using namespace std;

int main() 
{
	
    string ebarat;
	cin >> ebarat;
	int sum = 0;


	while (ebarat != "exit") 
    {
		int adad = 0;
		stringstream stringToInt(ebarat);
		stringToInt >> adad;
		sum += adad;
		cin >> ebarat;
	}

	cout << sum ;

	return 0;
}