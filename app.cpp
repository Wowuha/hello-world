#include "app.h"

#include <iostream>
using namespace std;

//  прототипы функций "приложения"; static для того, чтобы функции были видны только в этом модуле
static bool appRead(Application &app);              // чтение массива
static bool appSearchArea(Application &app);        // поиск наибольшего участка возрастания
static void appOutputResult(Application &app);      // вывод результата на экран

int appRun(Application &app) {
    if(!appRead(app)) {
        cout << "Error 1" << endl;
        return 1;                                   // возвращает 1 при ошибке считывания с клавиатуры
    }
    if(!appSearchArea(app)) {
        cout << "Error 2" << endl;
        return 1;                                   // возвращает 1 при ошибке в поиске наибольшего участка возрастания
    }
    appOutputResult(app);
    return 0;                                       // возвращает при успешном завершении
}

static bool appRead(Application &app) {
    cout << "Number of array elements: ";
    unsigned int elementsNumber;
    cin >> elementsNumber;
    app.sourceArray.resize(elementsNumber);         // изменяем размер вектора на заданный с клавиатуры
    cout << "Array elements: ";
    return arrayRead(app.sourceArray);
}

static bool appSearchArea(Application &app) {
    return arraySearchArea(app.sourceArray, app.resultArray);
}

static void appOutputResult(Application &app) {
    cout << "result: ";
    for(unsigned int i = 0; i < app.resultArray.size(); i++)
        cout << app.resultArray[i] << ' ';
    cout << endl;
    return;
}
