//Zad 0.3
//Utw�rz wektor liczb ca�kowitych od - 100 do 100.
//a) Nast�pnie sprawd� czy wszystkie liczby s� dodatnie.
//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
//c) Usu� z kontenera 0.
//d) Nast�pnie sprawd� czy kontener nie zawiera warto�ci 0.
//e) Sprawd� czy kontener jest posortowany
//f) Skopiuj do drugiego wektora wszystkie liczby wi�ksze od 90 i mniejsze od - 90
//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynaj�c od 78

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>



int main()
{
    std::vector<int> numbers(100);
    std::iota(numbers.begin(), numbers.end(), -100);
    numbers.reserve(200);

  
}

