#include <deque>
#include "Figure.h"
#include "Queue.h"

bool Queue::isEmpty() const {
    return data.empty();
}


void Queue::enqueue(Figure* element) {
    data.push(element);
}

Figure* Queue::dequeue() {
    Figure* frontElement = data.front();
    data.pop();
    return frontElement;
}

Figure* Queue::front() const {
    return data.front();
}

 void Queue::showAll(){
     while (!isEmpty()) {
         data.front()->draw();
         data.pop();
         std::cout << "Фигуры из очереди отрисованы" << std::endl;
     }
 }

 void Queue::hideAll() {
     while (!isEmpty()) {
         data.front()->hide();
         data.pop();
         std::cout << "Фигуры из очереди спрятаны" << std::endl;
     }
 }

void Queue::clear() {
    while (!isEmpty()) {
        data.pop();
        std::cout << "Контейнер очищен" << std::endl;
    }
}
