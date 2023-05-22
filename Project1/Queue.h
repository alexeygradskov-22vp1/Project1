#pragma once
#include <queue>
#include <deque>
#include "Figure.h"

class Queue {
private:
    std::queue<Figure*> data;  //очередь

public:
    // Проверка, пуста ли очередь
    bool isEmpty() const;
    // Добавление элемента в конец очереди
    void enqueue(Figure*);
    // Удаление и возврат элемента из начала очереди
    Figure* dequeue();
    // Получение элемента из начала очереди без его удаления
    Figure* front() const;
    //Отрисовка всех фигур
    void showAll();
    //Функция прячет все фигуры
    void hideAll();
    void clear();
};
