#include <bits/stdc++.h>
using namespace std;

class LinkedList {

private:
  struct Node {
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
  };

  Node *head;
  Node *tail;
  int size;

public:
  LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
  }

  int get(int index) {
    if (index < 0 || index >= size)
      return -1;
    Node *curr = head;
    for (int i = 0; i < index; ++i) {
      curr = curr->next;
    }
    return curr->val;
  }

  void insertHead(int val) {
    Node *newNode = new Node(val);
    if (!head) {
      head = newNode;
      tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
    size++;
  }

  void insertTail(int val) {
    Node *newNode = new Node(val);
    if (!tail) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }

  bool remove(int index) {
    if (index < 0 || index >= size)
      return false;
    Node *curr = head;
    if (index == 0) {
      head = head->next;
      delete curr;
    } else {
      for (int i = 0; i < index - 1; ++i) {
        curr = curr->next;
      }
      Node *toDelete = curr->next;
      curr->next = toDelete->next;
      if (toDelete == tail) {
        tail = curr;
      }
      delete toDelete;
    }
    size--;
    return true;
  }

  vector<int> getValues() {
    vector<int> values;
    Node *curr = head;
    while (curr) {
      values.push_back(curr->val);
      curr = curr->next;
    }
    return values;
  }
};

int main() {

  LinkedList list;

  list.insertHead(10);
  list.insertTail(20);
  list.insertHead(5);
  cout << "List values: ";
  for (int val : list.getValues()) {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}