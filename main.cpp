#include <iostream>
using namespace std;

#include "app.h"

int main () {
    cout << "Search for the largest ascending area\n";    // выводим название программы
    Application app;                                        // создаем переменную типа Application
    int ret = appRun(app);                                  // вызываем функцию запуска приложения
    return ret;                                             // возвращаемое значение при выходе
}

/* Пример работы программы
 * 
 *  $ ./a.out
 * 
 *  search for the largest ascending area
 *  Number of array elements: 6
 *  Array elements: 1 2 2 1 3 6
 *  result: 1 3 6 
 * 
 */
