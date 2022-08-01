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
    //Utw�rz wektor liczb ca�kowitych od - 100 do 100.
    std::vector<int> numbers(200);
    std::iota(numbers.begin(), numbers.end(), -100);
    numbers.reserve(200);
    //a) Nast�pnie sprawd� czy wszystkie liczby s� dodatnie.


    //g) Skopiuj do innego wektora 10 kolejnych liczb zaczynaj�c od 78

    std::vector<int> second;

    std::copy_n(numbers.begin(), 10, std::back_inserter(second));
    
      std::cout << std::endl << std::endl << std::endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

//int main()
//{
//    std::vector<int> numbers(100);
//    std::iota(numbers.begin(), numbers.end(), -80);
//
//    auto it = std::remove(numbers.begin(), numbers.end(), 0);
//    numbers.erase(it, numbers.end());
//
//    numbers.erase(std::remove(numbers.begin(), numbers.end(), -1), numbers.end()); //erase-remove idiom
//
//    auto it2 = std::remove_if(numbers.begin(), numbers.end(), [](const int i) {return i < -30; });
//    //numbers.erase(it2, numbers.end());
//
//    std::for_each(numbers.begin(), numbers.end(), [](const int i) { std::cout << i << ";\n"; });
//
//    std::vector<int> second;
//
//    std::copy_n(numbers.begin(), 10, std::back_inserter(second));
//
//    std::cout << std::endl << std::endl << std::endl;
//
//    auto second_inserter = std::back_inserter(second);
//    second_inserter = 123;
//    second_inserter = 99;
//
//    std::for_each(second.begin(), second.end(), [](const int i) { std::cout << i << ";\n"; });
//
//
//
//}
