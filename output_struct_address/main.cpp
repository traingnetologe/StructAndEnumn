#include <iostream>

struct address_city{
    std::string city;
    std::string street;
    int number_house = 0;
    int number_appartments = 0;
    int index = 0;
};

void print_strucr(address_city& currentAddress){
    std::cout << "Город: " << currentAddress.city << "\n";
    std::cout << "Улица: " << currentAddress.street << "\n";
    std::cout << "Номер дома: " << currentAddress.number_house << "\n";
    std::cout << "Номер квартиры: " << currentAddress.number_appartments << "\n";
    std::cout << "Индекс: " << currentAddress.index << "\n";

}

int main(){
    address_city new_address;
    std::coun << "Введите город: ";
    std::cin << new_address.city;

    std::coun << "Введите улицу: ";
    std::cin << new_address.street;

    std::coun << "Введите номер дома: ";
    std::cin << new_address.number_house;

    std::coun << "Введите номер квартиры: ";
    std::cin << new_address.number_appartments;

    std::coun << "Введите индекс: ";
    std::cin << new_address.index;

    print_strucr(new_address);
    return 0;
}