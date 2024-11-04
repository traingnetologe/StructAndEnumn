#include <iostream>

enum months {
    null,
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December 
};
    

int main()
{
    int currentNumber = -1;
    months currentMonths; 
    while (currentNumber != months::null){

    std::cout << "Введите номер месяца: ";
    std::cin >> currentNumber; 
    switch (currentNumber)
    {
    case (months::January):
        std::cout << "Январь";
	std::cout << "\n";
        break;
    
    case (months::February):
        std::cout << "Февраль";
	std::cout << "\n";
        break;
    
    case (months::March):
        std::cout << "Март";
	std::cout << "\n";
        break;
    
    case (months::April):
        std::cout << "Январь";
	std::cout << "\n";
        break;
    
  case (months::May):
        std::cout << "Май";
	std::cout << "\n";
        break;
    
    case (months::June):
        std::cout << "Июнь";
	std::cout << "\n";
        break;
    
    case (months::July):
        std::cout << "Июль";
	std::cout << "\n";
        break;
    
    case (months::August):
        std::cout << "Авгутст";
	std::cout << "\n";
        break;
    
    case (months::September):
        std::cout << "Сентябрь";
	std::cout << "\n";
        break;
    
    case (months::October):
        std::cout << "Октябрь";
	std::cout << "\n";
        break;
    
    case (months::November):
        std::cout << "Ноябрь";
	std::cout << "\n";
        break;
    
    case (months::December):
        std::cout << "Декабрь";
	std::cout << "\n";
        break;
    
    }
    }
	std::cout << "До свидания";
	std::cout << "\n";
}
