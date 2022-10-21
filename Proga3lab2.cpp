#include "deal.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int count;
    string crname = "Форд Фокус";
    deal deal1, * deals[3];
    deal deal2(crname);
    manager Manager(10, 4700, "Иванов А.А.");
    specifications spec(78, 133, 1, 1.5);
    car Car(400000, "Лада Самара", spec);
    client Client(12, "Шнейдер А.Д.");
    service Service("Установка сигнализации", 20100);
    deal deal3(Car, Client, Manager, Service);

    cout << "Вывод сделок, созданных конструкторами:\n" << endl;
    deal1.deal_output();
    cout << endl;
    deal2.deal_output();
    cout << endl;
    deal3.deal_output();
    cout << endl;
    cout << "Суммарная плата клиента за третью сделку: " << deal3.sum_costs() << endl;
    cout << "\nВведите размер массива объектов: ";
    cin >> count;
    deal* arrDeal = new deal[count]; //динамический массив объектов класса deal.
    for (int i = 0; i < count; i++) {
        (arrDeal + i)->deal_input();
        puts("");
        (arrDeal + i)->deal_output();
        cout << "\n" << endl;
    }
    delete[] arrDeal;
    deal* Deal = new deal;
    *Deal = deal1;
    cout << "\nСделка 1:" << endl;
    deal1.deal_output();
    cout << endl;
    cout << "\nКопия сделки 1 с помощью new:" << endl;
    (*Deal).deal_output();
    cout << endl;
    cout << endl;
    delete Deal;

    //Работа с динамическим массивом объектов класса deal.
    deals[0] = &deal1;
    deals[1] = &deal2;
    deals[2] = &deal3;
    for (int i = 0; i < 3; i++) {
        deals[i]->deal_output();
        cout << endl;
    }
    return 0;
}
