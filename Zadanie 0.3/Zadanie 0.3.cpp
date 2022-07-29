//Zad 0.3
//Utwórz wektor liczb ca³kowitych od - 100 do 100.
//a) Nastêpnie sprawdŸ czy wszystkie liczby s¹ dodatnie.
//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
//c) Usuñ z kontenera 0.
//d) Nastêpnie sprawdŸ czy kontener nie zawiera wartoœci 0.
//e) SprawdŸ czy kontener jest posortowany
//f) Skopiuj do drugiego wektora wszystkie liczby wiêksze od 90 i mniejsze od - 90
//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynaj¹c od 78

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

