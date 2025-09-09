#pragma once

template <typename T>
class Node {
private:
    T value;
    Node* next;
    Node* past;

public:
    Node(T val) {
        value = val;
        next = nullptr;
        past = nullptr;
    }

    T getValue() {
        return value;
    }

    void setValue(T val) {
        value = val;
    }

    Node* getNext() {
        return next;
    }

    void setNext(Node* n) {
        next = n;
    }

    Node* getPast() {
        return past;
    }

    void setPast(Node* p) {
        past = p;
    }
};