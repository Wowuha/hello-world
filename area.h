#ifndef AREA_H_
#define AREA_H_

#include <iostream>
#include <vector>

typedef std::vector<float> Array;                       // вектор из чисел с плавающей точкой

bool arrayRead(Array &arr);                             // прототип функции чтения масиива
bool arraySearchArea(Array &arr, Array &resultArr);     // прототип функции поиска наибольшего участка монотонного возрастания

#endif /* AREA_H_ */
