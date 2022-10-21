#include "deal.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введите количество сделок. ");
    int count;
    while ((count = get_int()) < 1);
    deal* deals = (deal*)malloc(count * sizeof(deal));
    puts("Введите данные.");
    for (int i = 0; i < count; i++) {
        printf("Сделка номер %d:\n", i + 1);
        deals[i] = deal_input();
        puts("");
    }
    printf("\nВывод всех сделок deals\n");
    for (int i = 0; i < count; i++) {
        printf("Сделка номер %d:\n", i + 1);
        deal_output(i + 1, deals[i]);
        printf("Суммарная соимость авто и доп. услуги: %d\n", sum_costs(deals[i]));
        puts("");
    }

    puts("\n");
    puts("Инициализация поля Car объекта deals и вывод в консоль.");
    puts("До инициализации.");
    car_output(deals[0].Car);
    deals[0].Car = car_init(260000, "Toyota corolla", 110, 172, 2, 1.6);
    puts("\nПосле инициализации.");
    car_output(deals[0].Car);
    system("pause");
    return 0;
}
