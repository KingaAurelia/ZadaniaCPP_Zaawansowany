#include <iostream>
#include <random>
#include <fstream>

int main()
{
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution<int> dist(-100000, 100000);



    std::string fileName("C:\\Users\\Michal\\source\\repos\\liczbyLosowe.txt");
    std::ofstream fileToWrite(fileName, std::ios::out | std::ios::trunc);


    //    //dodac sprawdzanie czy plik otwarty oraz przed kazdym zapiem czy plik jest w dobrym stanie
    //    for ()
    //    {
    //        //dist(randomEngine);
    //        //zapiyswnaie wygnerowanych liczb do pliku przy uzyciu operatora: <<
    //    }

    std::vector<int> vect;

    //Otworzyc plik fileName za pomoca ifstream i odczytac w pelti (do napotkania eof) wszystkie dane. 
    //Odczytujemy za pomoca operatora >> do zmiennej tymczasowej, a nastepnie wolamy push_back

    //wypisac 100 pierwszych liczb
    //sprawdzmy czy w zapisanym pliku te liczby sa w tej samej kolejnosci
}