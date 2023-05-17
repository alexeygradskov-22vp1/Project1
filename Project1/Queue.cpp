#include <deque>
#include "Figure.h"
#include "Queue.h"

    bool Queue::isEmpty() const {
        return data.empty();
    }


    void Queue::enqueue(Figure* element) {
        data.push_back(element);
    }

    Figure* Queue::dequeue() {
        Figure* frontElement = data.front();
        data.pop_front();
        return frontElement;
    }

    Figure* Queue::front() const {
        return data.front();
    }

    void Queue::showAll() const{
        for (auto figure : data) {
            figure->draw();
        }
    }

    void Queue::hideAll() const {
        for (auto figure : data) {
            figure->hide();
        }
    }

    void Queue::clear() {
        while (!isEmpty()) {
            data.pop_front();
        }
    }