#Практична робота №1_2: Вказівники (Частина 1)
**Виконав:** студент групи 4СОМ Серветнік Лілія (Варіант № 3)

##  Завдання.
**Завдання:** 
<img width="815" height="27" alt="image" src="https://github.com/user-attachments/assets/0287c375-7dbd-435d-8373-51ddb07e2dbd" />
<img width="325" height="30" alt="image" src="https://github.com/user-attachments/assets/42caa36d-f326-42b1-a5c1-23128a6a50f8" />



### 💻 Код програми:
```cpp
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
```
<img width="1887" height="851" alt="image" src="https://github.com/user-attachments/assets/f1f964f4-53c8-4c33-9753-f842ca771f91" />
<img width="1766" height="851" alt="image" src="https://github.com/user-attachments/assets/c69bb02b-5006-4adf-a45d-6f91d8cbb039" />

### 👁️ Візуалізація пам'яті:
![Стрілочки пам'яті Розділ 1](lab4_sec1.png)
<img width="1006" height="716" alt="image" src="https://github.com/user-attachments/assets/67641322-f93f-4895-adb2-f7211bbd7f59" />
<img width="1161" height="720" alt="image" src="https://github.com/user-attachments/assets/8bf1a5d1-b008-4c43-9e28-5bb0d12b7211" />
<img width="1062" height="673" alt="image" src="https://github.com/user-attachments/assets/afd8e8b1-33cd-4fe9-80aa-a992ccaaee3a" />
<img width="1095" height="625" alt="image" src="https://github.com/user-attachments/assets/cb798534-952e-4b06-beed-d3a01a38e94d" />
<img width="1257" height="705" alt="image" src="https://github.com/user-attachments/assets/f13b2ca5-7535-4042-9517-a61e6f7b099a" />
<img width="1196" height="668" alt="image" src="https://github.com/user-attachments/assets/664b034a-7cf6-44b6-9e6b-f0c79693625f" />
<img width="1185" height="648" alt="image" src="https://github.com/user-attachments/assets/b2c50ee4-1425-46af-a0f6-9ec9adf5c82d" />
<img width="1217" height="660" alt="image" src="https://github.com/user-attachments/assets/438b7ea6-031d-4ea1-8b2c-cc7c7d607431" />
<img width="1041" height="668" alt="image" src="https://github.com/user-attachments/assets/3e3cf7ba-ca66-4c0e-b204-e7a6a05c7d65" />
<img width="1083" height="682" alt="image" src="https://github.com/user-attachments/assets/2a0c3686-ac09-46da-952f-4b3d5cbcaed9" />
---
У практичній роботі успішно продемонстровано базову роботу з вказівниками в мові C++. Створено змінні для збереження ключових даних замовлення (`orderNumber`, `weight`, `price`), отримано їхні адреси за допомогою оператора `&` та ініціалізовано відповідні вказівники. Практично закріплено механізм зчитування та зміни значень безпосередньо в пам'яті через операцію розіменування (`*`). Окремо реалізовано функцію `changePrice`, яка приймає вказівник як аргумент і успішно модифікує початкове значення вартості замовлення за її адресою відповідно до умов заданого варіанта.
