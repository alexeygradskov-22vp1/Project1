#pragma once
#include <deque>
#include "Figure.h"

class Queue {
private:
    std::deque<Figure*> data;  // двусторонняя очередь

public:
    // Проверка, пуста ли очередь
    bool isEmpty() const;
    // Получение размера очереди
    size_t size() const;
    // Добавление элемента в конец очереди
    void enqueue(Figure*);
    // Удаление и возврат элемента из начала очереди
    Figure* dequeue();
    // Получение элемента из начала очереди без его удаления
    Figure* front() const;
    //Отрисовка всех фигур
    void showAll() const;
    //Функция прячет все фигуры
    void hideAll() const;
};
