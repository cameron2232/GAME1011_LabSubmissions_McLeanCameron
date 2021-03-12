
#include <iostream>
#include <assert.h>
#include <algorithm>
#include <string>
#include <vector>

template<typename T>
class SimpleVector
{
protected:

	T* m_pData = nullptr;

	size_t m_size = 0;

public:
	SimpleVector(size_t size)
	{
		m_size = size;

		m_pData = new T[m_size] {};
	}

	SimpleVector(const SimpleVector& other)
	{
		delete[] m_pData;
		m_size = other.m_size; 

		m_pData = new T[m_size];

		for (size_t i = 0; i < m_size; i++)
			m_pData[i] = other.m_pData[i];

	}

	virtual ~SimpleVector()
	{
		delete[] m_pData;
	}

	size_t Size()
	{
		return m_size;
	}

	T& operator[] (size_t index)
	{
		assert(index >= 0 && index < m_size);
		return m_pData[index];
	}

	void operator=(const SimpleVector& valueToAssign)
	{
		m_size = valueToAssign.m_size; 

		delete[] m_pData; 
		m_pData = new T[m_size]; 

		for (size_t i = 0; i < m_size; i++)
			m_pData[i] = valueToAssign.m_pData[i];

	}

	void push_back(T element)
	{
		if(element == NULL)
		{
			std::cout << "Cannot insert an empty element!\n\n";
			return;
		}
		for (size_t i = 0; i < 10; i++)
		{
			if(m_pData[i] == NULL)
			{
				m_pData[i] = element;
				return;
			}
			if (i == m_size - 1)
			{
				std::cout << "Array is full! Cannot insert element.\n\n";
				return;
			}
		}
	}

	void pop_back()
	{
		if(m_pData[0] ==  NULL)
		{
			std::cout << "No element to remove!\n\n";
			return;
		}
		for(size_t i = m_size; i > 0; i--)
		{
			if (m_pData[i-1] == NULL)
				continue;			
			m_pData[i-1] = NULL;
			return;

		}
	}
};

template<typename T>
std::ostream& operator<<(std::ostream& out, SimpleVector<T>& toPrint)
{
	out << "{";
	for (size_t i = 0; i < toPrint.Size(); i++)
	{
		if(toPrint[i] != NULL)
			out << " " << toPrint[i];
	}
	out << " }";

	return out;
}

template<typename T>
class SortableVector : public SimpleVector<T>
{
public:
	SortableVector(size_t size) : SimpleVector<T>(size)
	{		
	}
	void Sort()
	{

		for (size_t i = 1; i < this->Size(); i++)
		{
			T m_pTemp = this->operator[](i - 1);
			if (this->operator[](i) < m_pTemp && this->operator[](i)!= NULL)
			{
				this->operator[](i - 1) = this->operator[](i);
				this->operator[](i) = m_pTemp;
				this->Sort();
			}
		}
	}
};


template <typename T>
class SearchableVector : public SortableVector<T>
{
public:
	SearchableVector(size_t size) : SortableVector<T>(size)
	{
	}

	void Find(T value)
	{
		this->Sort();
		if(value == NULL)
		{
			std::cout << "Cannot search for NULL value!\n";
			return;
		}
		std::vector<T> tempValues;
		for(size_t i = 0; i < this->Size(); i++)
		{
			if (this->operator[](i) != NULL)
				tempValues.push_back(this->operator[](i));
		}
		
		if (std::binary_search(tempValues.begin(), tempValues.end(), value))
			std::cout << value << " found in SearchableVector!\n\n";
		else
			std::cout << value << " not found in SearchableVector!\n\n";
	}
};


int main()
{
	bool running = true;
	int choice = 0;
	int input;
	SearchableVector<int> myClassInstance = SearchableVector<int>(10);
	myClassInstance.push_back(72);
	myClassInstance.push_back(11);
	myClassInstance.push_back(89);
	myClassInstance.push_back(111);
	myClassInstance.push_back(8);
	std::cout << "SimpleVector Contents: " << myClassInstance << "\n\n";
	myClassInstance.Sort();
	while (running)
	{
		std::cout << "SimpleVector Contents: " << myClassInstance << "\n\n";
		std::cout << "1. Insert new Element\n2. Remove last Element in list\n3. Search for an Element\n4. Exit Program\n\nSelection: ";
		std::cin >> choice;

		switch(choice)
		{
		default:
			system("cls");
			std::cout << "Invalid Choice\n\n";
			break;
		case 1:
			std::cout << "\nPlease enter a numeric value to insert into the array: ";
			std::cin >> input;
			system("cls");
			myClassInstance.push_back(input);
			myClassInstance.Sort();
			break;
		case 2:
			myClassInstance.pop_back();
			system("cls");
			break;
		case 3:
			std::cout << "\nPlease enter numeric value you wish to locate: ";
			std::cin >> input;
			myClassInstance.Find(input);
			system("pause");
			system("cls");
			break;
		case 4:
			running = false;
			std::cout << "Goodbye!\n";
			break;
		}
	}

}


