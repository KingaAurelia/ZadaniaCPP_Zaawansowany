// Regex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <regex>

bool checkPESEL(const std::string& pesel)
{
    std::regex peselRegex("^\\d{11}$");
    // ^ - dopasuj od poczatku string
    // \\d tylko cyfry
    // {} musi byc ich dokladnie 11
    // $ i na tym konczy sie string
    return std::regex_match(pesel, peselRegex);
}
//zadanko z mailem:
std::string readEmail()
{
    std::cout << "Podaj adres e-mail: ";
    std::string email("");
    std::cin >> email;
    return email;
}

bool checkEmail(const std::string& email)
{
    std::regex mailRegex("^[a-z0-9_.]{3,}@[a-z0-9_]+.(com|pl|edu)$");
    return std::regex_match(email, mailRegex);
}

int main()
{
    std::string pesel1("12121236548");
    std::string pesel2("121236548");
    std::string pesel3("121236548999");
    std::string definatelyNotPesel("1d212365aa4899w9");
    std::string notPesel2("w12121236548");

    std::cout << pesel1 << " wynik: " << checkPESEL(pesel1) << std::endl;
    std::cout << pesel2 << " wynik: " << checkPESEL(pesel2) << std::endl;
    std::cout << pesel3 << " wynik: " << checkPESEL(pesel3) << std::endl;
    std::cout << definatelyNotPesel << " wynik: " << checkPESEL(definatelyNotPesel) << std::endl;
    std::cout << notPesel2 << " wynik: " << checkPESEL(notPesel2) << std::endl;

    std::string mail = readEmail();
    std::cout << " Wynik sprawdzenia adresu email - " << checkEmail(mail);

}
