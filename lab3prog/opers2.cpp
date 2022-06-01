#include <iostream>
#include <vector>
#include "lab2.h"

using namespace std;

namespace lab
{
	block operator + (block v1, block v2)
	{
		int length = 0;
		
		if (v1 > v2) length = v1.length();
		else length = v2.length();

		int* array = new int[length];

		for (int i = 0; i < length; i++)
		{
			if (i <= v1.length() && i <= v2.length())
			{
				array[i] = v1.get(i) + v2.get(i);
			} 
			else 
			{
				if (i > v1.length() && i <= v2.length())
				{
					array[i] = v2.get(i);
				}
				if (i <= v1.length() && i > v2.length())
				{
					array[i] = v1.get(i);
				}
			}
		}

		block v(array);
		
		return v;
	}

	bool operator == (block v1, block v2)
	{
		if (v1.length() == v2.length()) return true;
		else return false;
	}

	bool operator != (block v1, block v2)
	{
		if (v1.length() != v2.length()) return true;
		else return false;
	}

	bool operator > (block v1, block v2)
	{
		if (v1.length() > v2.length()) return true;
		else return false;
	}

	bool operator < (block v1, block v2)
	{
		if (v1.length() < v2.length()) return true;
		else return false;
	}
}