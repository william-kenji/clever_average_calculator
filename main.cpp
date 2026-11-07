#include <iostream>
#include <iomanip>

using namespace std;

int get_size();
int* make_array(int);
void set_scores(int*, int);
double find_average(int*, int);
void print(int*, int);


int main()
{
	int size = get_size();
	int* arr = make_array(size);
	set_scores(arr, size);
	print(arr, size);

	delete[] arr;
	return 0;
}

int get_size()
{
	int size = 0;
	bool done = false;
	do
	{
		cout << "Enter a size greater than 0: ";
        cin >> size;
		if (!cin.fail() && size > 0)
		{
			done = true;
		}
		else
		{
			cin.clear();
			string item;
			cin >> item;
			cout << "Error. Try again.\n";
		}
	}
	while (!done);

	return size;
}

int* make_array(int size)
{
    int* arr = new int[size];
    return arr;
}

void set_scores(int* arr, int size)
{
    for (int c = 0; c < size; c++)
    {
        cout << "Enter score #" << c + 1 << ": ";
        cin >> arr[c];
    }
}

double find_average(int* arr, int size)
{
    int sum = 0;
    double average;
    for (int c = 0; c < size; c++)
    {
        sum += arr[c];
    }
    average = sum / (size * 1.0);
    return average;
}

void print(int* arr, int size)
{
    cout << endl << endl;
    cout << "You entered " << size << " scores: ";
    for (int c = 0; c < size; c++)
    {
        cout << arr[c];
        if (c < size - 1)
        {
            cout << " ";
        }
    }
    cout << ".\n\n";
    cout << "The average score is " << fixed << setprecision(1) << find_average(arr, size) << ".";
}