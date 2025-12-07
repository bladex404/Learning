#ifndef LIST_H_
#define LIST_H_

class List {
private:
  int m_count;
  int *m_items;

public:
  List();
  ~List();
  int get(int index);
  void insert(int index, int val);
  int search(int val);
  void remove(int index);
  void print();
  int count();
};

#endif 

