#include <iostream>
#include <ctime>
#include <string>

bool verified = false;
std::string tempString;
void Palindrome(std::string phrase, int start, int end)
{
	verified = false;
	if (start < end)
	{
		while (phrase[start] == ' ')
			start += 1;

		while (phrase[end] == ' ')
			end -= 1;
	}
	
	if (tolower(phrase[start]) == tolower(phrase[end]))
	{
		if (start >= end)
		{
			verified = true;
			return;
		}
		start += 1;
		end -= 1;
		Palindrome(phrase, start, end);
	}
}

int Partition(int input[], int start, int end)
{
	int pivot = input[end];
	int index = start;
	
	for (int i = start; i < end; i++)
	{
		if (input[i] < pivot)
		{
			std::swap(input[i], input[index]);
			index++;
			
		}
	}

	std::swap(input[end], input[index]);
	return index;
}

void QuickSort(int input[], int start, int end )
{
	if(start < end)
	{
		int pivot = Partition(input, start, end);
		
		QuickSort(input, start, pivot-1);
		QuickSort(input, pivot + 1, end);
	}
}



void ReverseString(std::string reverse, int location)
{
	tempString += reverse[location];
	if (location == 0)
	{
		std::cout << "\n\n" << tempString << "\n";
		return;
	}

	location -= 1;
	ReverseString(reverse, location);

}

void printArray(int arrToPrint[], int size)
{
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
	{
		if (i != size - 1)
			std::cout <<arrToPrint[i] << ", ";
		else
			std::cout << arrToPrint[i];
	}
	std::cout << " }\n";
}

int main()
{
	int choice;
	std::string stringInput;
	int size;
	int* Numbers;
	bool running = true;

	while (running)
	{
		std::cout << "Welcome to the Recursive Function Program. Please choose one of the following options\n\n"
			<< "1. Palindrome Checker\n2. Quicksort a Random list of Numberes\n3. Reverse a List\n4. Exit\n\nSelection: ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			std::cout << "Please input a string to check if it is a Palindrome.\n\nInput: ";
			std::cin.ignore();
			std::getline(std::cin, stringInput);

			Palindrome(stringInput, 0, stringInput.size() - 1);
			std::cout << "\n";

			if (verified)
				std::cout << stringInput << " is a Palindrome!\n";
			else
				std::cout << stringInput << " is not a Palindrome!\n";

			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			std::cout << "Please input the Number of Integers you wish to create.\n\nInput: ";
			std::cin >> size;
			Numbers = new int[size];

			srand(time(NULL));
			for (int i = 0; i < size; i++)
				Numbers[i] = rand() % 100 + 1;

			std::cout << "\nOriginal Array: ";
			printArray(Numbers, size);

			QuickSort(Numbers, 0, size - 1);
			std::cout << "Sorted Array: ";
			printArray(Numbers, size);
			
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			std::cout << "Please input a String to Reverse.\n\nInput: ";
			tempString = "";
			std::cin.ignore();
			std::getline(std::cin, stringInput);

			ReverseString(stringInput, stringInput.size() - 1);

			system("pause");
			system("cls");
			break;
		case 4:
			std::cout << "Bye!";
			running = false;
			break;
		default:
			system("cls");
			std::cout << "Incorrect Input! Try again.\n";
		}
	}
}

