#include <iostream>
#include <list>

int main() {
    std::list<int> mylist; // создаем пустой список
    int value; // переменная для хранения вводимых значений

    std::cout << "Введите 5 элементов списка: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> value; // считываем значение
        mylist.push_back(value); // добавляем значение в список
    }

    int valueToRemove; // переменная для хранения значения, которое нужно удалить
    std::cout << "Введите значение для удаления: ";
    std::cin >> valueToRemove; // считываем значение

    mylist.remove(valueToRemove); // удаляем элемент с заданным значением

    std::cout << "Обновленный список: ";
    for (int x: mylist) { // проходим по всем элементам списка
        std::cout << x << ' '; // выводим элемент на экран
    }

    return 0;
}
