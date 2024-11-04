#include <iostream>
struct accounts{
    int number_account = 0;
    std::string name;
    int balans = 0;
}

void change_balans(accounts& current_account, int new_balans){
    current_account.balans = new_balans;
}

int main(){

accounts one;
std::cout << "Введите номер счёта: ";
std::cin >> one.number_account;

std::cout <<"Введите имя владельца: ";
std::cin >> one.name;
std::cout << "Введите баланс:";
std::cin >> one.balans;

std::cout << "Введите новый баланс:";
int new_balans = 0;
std::cin >> new_balans;
change_balans(one, new_balans);
std::cout << "Ваш счёт:" << one.name << ", " << one.number_account << ", " << one.balans << "\n";
    return 0;
}