#ifndef APP_H_
#define APP_H_

#include "area.h"

// АТД-приложение
struct Application {
    Array sourceArray;       // исходный массив (переменная типа Array)
    Array resultArray;       // самый длинный участок монотонного возрастания (переменная типа Array)
};

// прототип функции выполнения приложения
int appRun(Application &app);

#endif /* APP_H_ */
