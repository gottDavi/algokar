#include <iostream>

int JePrvocislo(int c)
{
	for (int i = 2; i < (c/2+1); i++)
	{
		if (c % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	bool first = true;
	if (first)
	{
		for (int i = 1; i <= 10; i++)
		{
			std::cout << "\t" << i;
		}
		first = false;
		std::cout << "\n";
	}
	for (int i = 1; i <= 10; i++)
	{
		std::cout << i;

		for (int e = 0; e <= 10*i; e+=i)
		{
			if (e != 0)
			{
				std::cout << "\t" << e;
			}
		}
		std::cout << "\n";
	}
	std::cout << "Zadej spodni a horni meze: ";
	int top, bot, pocetPrvocisel = 0;
	std::cin >> bot >> top;

	for (int i = bot; i <= top; i++)
	{
		if (JePrvocislo(i) == 1)
		{
			//std::cout << i << "\t";
			pocetPrvocisel++;
		}
	}
	std::cout << "\n" << "Pocet prvocisel v danem intervalu je: " << pocetPrvocisel;
}

