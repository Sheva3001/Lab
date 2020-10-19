#include <string>
#include <iostream>
#include "list.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int size;
    cout << "Введите размер списка ";
    cin >> size;
    file* List = addList(size);
    findSpec(List, size);
    return 0;
}