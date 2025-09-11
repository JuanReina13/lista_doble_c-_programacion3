#include <iostream>
#include "DoubleList.h"
#include "Node.h"

using namespace std;

int main() {
    // Lista de enteros
    DoubleList<int> listInt;
    listInt.insertFront(10);
    listInt.insertFront(5);
    listInt.insertBack(20);
    listInt.insertBack(30);

    cout << "Lista de enteros hacia adelante: ";
    listInt.showForward();

    cout << "Lista de enteros hacia atras: ";
    listInt.showBackward();

    listInt.remove(20);
    cout << "Lista de enteros despues de eliminar 20: ";
    listInt.showForward();

    // Lista de strings
    DoubleList<string> listStr;
    listStr.insertBack("Juan");
    listStr.insertBack("Ana");
    listStr.insertFront("Luis");
    cout << "\nLista de strings hacia adelante: ";
    listStr.showForward();

    cout << "Lista de strings hacia atras: ";
    listStr.showBackward();

    return 0;
}
