#include <iostream>
#include "Character.h"

/// <summary>
/// adds 2 integers togethor
/// </summary>
/// <param name="a">LHS int</param>
/// <param name="b">RHS int</param>
/// <returns>integer which is the combination of a + b</returns>
int add(int a, int b)
{
	return a + b;
}


/// <summary>
/// adds 2 integers and prints the result to the console.
/// </summary>
/// <param name="a">LHS int</param>
/// <param name="b">RHS int</param>
/// <returns>sum of 2 integers after printing that sum to the console </returns>
int printAdd(int a, int b)
{
	int c = a + b;
	std::cout << c << std::endl;
	return c;
}

/// <summary>
/// Starting with 0 and continueing until the integer specified in initial arguments, this function prints out a number, skips a line, and adds one to itself.
/// </summary>
/// <param name="numba">the final number to count to on the console.</param>
void count(int numba)
{
	for (int i = 0; i <= numba; i++)
	{
		std::cout << i << std::endl;
	}
	return;
}

/// <summary>
/// saodif
/// </summary>
/// <param name="numbers"></param>
/// <param name="size"></param>
void printNumbersArray(int numbers[], int size)
{

	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
	return;
}




///create a function for a character creation menu
///the function should ask the player to input a health and damage
/// value for a new character. create a new dynamically allocated character with the
/// stats and return it.
///  print the chatacter's stats in the main function.

Character* createCharacter()
{
	float health;
	float damage;
	std::cout << "Let's make your character!" << std::endl;
	std::cout << "What's your character's health?" << std::endl;
	std::cin >> health;
	std::cout << "What's your character's damage?" << std::endl;
	std::cin >> damage;

	Character* created = new Character(health, damage);


	return created;
	
}

int addArraySlot(int numbers[], int size, int lastNumber)
{
	int* newNumbers = new int[size + 1];

	for (int i = 0; i < size + 1; i++)
	{
		numbers[i] = newNumbers[i];
		
			if (i = size)
			{
				lastNumber = newNumbers[size + 1];
			}
	}
	numbers = newNumbers;
	delete[] newNumbers;
	newNumbers = nullptr;

}



int main()
{ 
	//these are the  2 ways to initialize a new instance of a class' type
	Character player(200, 50);
	Character plater2 = Character(150, 25);
	
	//Automatic memory allocation
	Character autumn(100, 5);
	Character* autumnPtr = &autumn;

	//Dynamic memory allocation. you must delete yourself.
	Character* dyna = new Character;
	

		//These are the 2 ways to dereference something in C++
	int autumnHealth = (*autumnPtr).getHealth();
	int autumnDamage = autumnPtr->getDamage();

	player.attack(plater2);
	
	//C++ does not hold your hand nearly as much as C# does.
	int number = 500000;
	int* numPtr = &number;
	float decimal = 0.5f;
	bool onOff = true; 
	char letter = 'a';
	double BigDecimal = .123456789;

	bool weapon = true; //it works.


	std::cout << *numPtr << std::endl;

	//everything is numbers so you can store other types in eachother without issue. for ex a bool = true or false aka 1 or 0 which can be used in equations;
	letter = 5;
	number = onOff;
	decimal = number;
	

	float health = 100;

	if (!health)
	{
		std::cout  << "you died";
	}


	//Example of console  output
	std::cout << "Justin" << std::endl;
	std::cout << "Judice" << std::endl;
	int age;
	//Example of consol input
	std::cout << "What's your age? " << std::endl;
	std::cout << "> ";
	std::cin >> age;
	system("cls"); // this is console.clear; your telling the system to CLear the Screen.
	std::cout << age << std::endl;

	printAdd(5, 5);
	count(25);

	int numbos[3] = { 1,2,3 };
	numbos[0] = 4;
	printNumbersArray(numbos, 3);
	addArraySlot(numbos, 3, 6);

	char name1[] = { 'J', 'u', 's', 't', 'i', 'n', '\0'};
	char name2[] = "Judice";

	
	dyna = createCharacter();

	dyna->printStats();


	delete dyna;

	

	return 1;


	///create a fucntion that acan add an integer to the end of an integer array
	///input {1,2,3,4,5}, 6
	///output {1,2,3,4,5,6}
	                                                                                                                                                                                                                                                                                                                                       
	
















}