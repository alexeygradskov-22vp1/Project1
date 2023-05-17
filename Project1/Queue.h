#pragma once
#include <deque>
#include "Figure.h"

class Queue {
private:
    std::deque<Figure*> data;  // ������������ �������

public:
    // ��������, ����� �� �������
    bool isEmpty() const;
    // ��������� ������� �������
    size_t size() const;
    // ���������� �������� � ����� �������
    void enqueue(Figure*);
    // �������� � ������� �������� �� ������ �������
    Figure* dequeue();
    // ��������� �������� �� ������ ������� ��� ��� ��������
    Figure* front() const;
    //��������� ���� �����
    void showAll() const;
    //������� ������ ��� ������
    void hideAll() const;
};
