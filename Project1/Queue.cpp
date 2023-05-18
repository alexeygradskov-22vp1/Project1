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

/* void Queue::showAll() const{
     while (!isEmpty()) {

         data.pop();

     }
 }

 void Queue::hideAll() const {
     for (auto figure : data) {
         figure->hide();
     }
 }*/

void Queue::clear() {
    while (!isEmpty()) {
        data.pop();
    }
}
