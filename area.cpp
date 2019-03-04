#include "area.h"

bool arrayRead(Array &arr) {
    for(unsigned int i = 0; i < arr.size(); i++)
        std::cin >> arr[i];
    return true;
}

bool arraySearchArea(Array &sourceArr, Array& resultArr) {
    Array temp;                                         // вектор для хранения текущих участков возрастания
    bool flag = true;                                   // указывет что temp пуст
    for(unsigned int i = 0; i < sourceArr.size(); i++) {
        if(sourceArr[i] < sourceArr[i+1]) {             // если текщий элемент массива меньше следующего
            if(flag) {                                  // если temp пуст
                temp.push_back(sourceArr[i]);           // записываем в temp текущий элеиент
                flag = false;                           // меняем флаг, так так temp уже не пуст
            }
            temp.push_back(sourceArr[i + 1]);           // записываем элемент, следующий за текущим
        } else if(temp.size() > resultArr.size()) {     // если текущий участок возрастания больше 
            resultArr = temp;                           // заносим его в resultArr
            temp.clear();                               // очищаем temp
            flag = true;                                // меняем флаг, так так temp теперь пуст
        } else if(temp.size() <= resultArr.size()) {    // если текущий участок возрастания мегньше
            temp.clear();                               // очищаем temp
            flag = true;                                // меняем флаг, так так temp теперь пуст
        }
    }
    if(resultArr.size() == 0)                           // если участок возрастания отсутствует возвращаем false
        return false;
    else                                                // иначе возвращаем true
        return true;
}
