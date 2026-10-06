#include <iostream>

using namespace std;

void changePrice(double* price) {
    *price = *price + 200;
}

int main() {
    cout << "--- Система обліку замовлень (Rozetka) ---" << endl << endl;

    int orderNumber = 317;
    int* orderPtr = &orderNumber;

    cout << "Номер замовлення: " << orderNumber << endl;
    cout << "Адреса orderNumber: " << &orderNumber << endl;
    cout << "Адреса через вказівник: " << orderPtr << endl;
    cout << "Значення через вказівник: " << *orderPtr << endl;

    *orderPtr = 404; 
    cout << "Новий номер замовлення (після зміни): " << orderNumber << endl << endl;

    double weight = 1.7;
    double* weightPtr = &weight;

    cout << "Вага замовлення: " << weight << " кг" << endl;
    cout << "Адреса weight: " << &weight << endl;
    cout << "Адреса через weightPtr: " << weightPtr << endl;
    cout << "Вага через вказівник: " << *weightPtr << " кг" << endl;

    *weightPtr = 2.5; 
    cout << "Нова вага (після зміни): " << weight << " кг" << endl << endl;

    double price = 1800.0;
    double* pricePtr = &price;

    cout << "Вартість замовлення: " << price << " грн" << endl;
    cout << "Адреса price: " << &price << endl;
    cout << "Адреса через pricePtr: " << pricePtr << endl;
    cout << "Вартість через вказівник: " << *pricePtr << " грн" << endl;

    *pricePtr = 1850.0;
    cout << "Вартість після ручної зміни: " << price << " грн" << endl << endl;

    cout << "--- Застосування функції changePrice (+200 грн) ---" << endl;
    cout << "Початкова вартість (до виклику): " << price << " грн" << endl;
    
    changePrice(&price);
    
    cout << "Нова вартість (після виклику): " << price << " грн" << endl;

    return 0;
}