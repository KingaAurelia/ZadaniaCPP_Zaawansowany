// Zad 0.1 Lambda
//Napisz zwyk�� funkcj� oraz lambd�(przypisz j� do zmiennej) Nast�pnie je wywo�aj :
//a) funkcj� wypisuj�ca �Hello World�
//b) Funkcja dodaj�ca dwie liczby do siebie(i zwracaj�ca j�)


#include <iostream>
#include <set>
#include <algorithm>

int a = 2;
int b = 4;

int add (int a, int b)
{
    return a + b;
}

void welcome()
{
    std::cout << "Hello World1!" << std::endl;
}

int main()
{
    //a
    welcome();
    auto helloWorld = []() {std::cout << "Hello World2!\n"; };
    helloWorld();

    []() {std::cout << "Hello World3!\n"; } ();

    
   

    //b
    std::cout << "suma1: " << add(1, 2) << std::endl;
    auto addTwoNumbers = [](int a, int b) {return a + b; };
    std::cout << "suma2: " << addTwoNumbers(4,5) << std::endl;

    return 0;
   
}

