//Zad 0.2
//Stwórz wektor 100 kolejnych liczb ca³kowitych z zakresu od 1 do 100
//a) Wypisz wszystkie liczby(for_each + unary function)
//b) Wypisz wszystkie liczby mniejsze od 50 (for_each + funktor)
//c) Nastêpnie policz ile jest liczb wiêkszych ni¿ 4 (count_if + predykat)
//d) Zrób to samo dla a, b i c, ale wykorzystaj lambdê
//e) W zale¿noœci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez
//niego(for_each + lambda
//f) Zlicz sumê wszystkich liczb parzystych i zapisz j¹ do zmiennej lokalnej int sum;

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void printInt(const int value)
{
    std::cout << value << ";" << std::endl;
}

//klasa do b)
class PrintLessThan
{
public:
    PrintLessThan(int bound)
        : _bound(bound)
    {}

    void operator()(int value)
    {
        if (value < _bound)
        {
            std::cout << value << std::endl;
        }
    }

private:
    int _bound;
};

//funkcja(predykat?) do c)
bool biggerThan4(const int i)
{
    return i > 4;
}


int main()
{
    std::vector <int> numbers(100);
    numbers.reserve(100);
    std:iota(numbers.begin(), numbers.end(), 1);// wypisuje wszystkie


    //a) Wypisz wszystkie liczby(for_each + unary function) - funkcja przyjmuj¹ca 1 argument
    std::cout << "PODPUNKT A)" << std::endl;

    std::for_each(numbers.rbegin(), numbers.rend(), [](const int i) {std::cout << i << "-"; });//return (r) - iterator wspak, wypisze od ty³u
    std::cout << std::endl;
    std::for_each(numbers.begin(), numbers.end(), printInt);


    //b) Wypisz wszystkie liczby mniejsze od 50 (for_each + funktor)
    
    std::cout << "PODPUNKT B)" << std::endl;

    std::for_each(numbers.begin(), numbers.end(), PrintLessThan(50));
    //PrintLessThan lessThan50(50); -->tak tez mozna


    //c) Nastepnie policz ile jest liczb wiekszych niz 4 (count_if + predykat)
    std::cout << "PODPUNKT C)" << std::endl;

    int countBiggerThan4 = std::count_if(numbers.cbegin(), numbers.cend(), biggerThan4);
    std::cout << "LICZB WIEKSZYCH OD 4 jest: " << countBiggerThan4 << std::endl;


    //d) Zrób to samo dla a, b i c, ale wykorzystaj lambde

    //a) 
    // std::for_each(numbers.rbegin(), numbers.rend(), [](const int i) {std::cout << i << "-"; });

    //b)
    // std::for_each(numbers.begin(), numbers.end(),
    //    [](int i) {
    //        if (i < 50)
    //            std::cout << i << std::endl;
    //    });

    //c) 
    // int countBiggerThan4 = std::count_if(numbers.cbegin(), numbers.cend(), [](int i) { return i > 4; });
    // std::cout << "LICZB WIEKSZYCH OD 4 jest: " << countBiggerThan4;
    // 
//e) W zale¿noœci od zmiennej lokalnej dzielnik wypisz wszystkie liczby podzielne przez niego(for_each + lambda
    std::cout << "PODPUNKT E)" << std::endl;
    int dzielnik = 3;
    auto divByDzielnik = [dzielnik](int i)
    {
        if ((i % dzielnik) == 0)
        {
            std::cout << i << std::endl;
        }
    };

    std::for_each(numbers.cbegin(), numbers.cend(), divByDzielnik);

    //f) Zlicz sume wszystkich liczb parzystych i zapisz ja do zmiennej lokalnej int sum;
    std::cout << "PODPUNKT F)" << std::endl;
    int sum = 0;

    std::for_each(numbers.cbegin(), numbers.cend(), [&sum](int i) {
        if (i % 2 == 0)
            sum += i; });

    std::cout << sum << std::endl;
}





