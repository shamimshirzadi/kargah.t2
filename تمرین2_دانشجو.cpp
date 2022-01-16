#include<iostream>
#include<string>

using namespace std;

int main() 
{
	
    int n;
	float sum = 0, miangin, max = 0, min = 20 ;
	cin >> n;
	float* arr = new float[n];

	for (int j = 0;j < n; j++)
	{
		cin >> arr[j];
		if (arr[j] > max) 
            max = arr[j];
		
        else if (arr[j] < min) 
            min = arr[j];

		sum += arr[j];
	}

	miangin = sum / n;

	cout << "miangin nomarat: " << miangin << endl
		<< "bishtarin nomre: " << max << endl
		<< "kamtarin nomre: " << min << endl;

	system("pause");
}