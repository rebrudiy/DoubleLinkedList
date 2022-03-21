#include <iostream>
#include <vector>
#include <algorithm>
#include "cmake-build-debug/LinkedList.h"
using namespace std;

int main() {
    DoubleLinkedList<int>c(100);//создаем с помощью конструктора лист заполненыый нулями
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.resize(34); // уменьшаем размер до 34
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.clear(); // теперь полностью очищаем
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.assign(15,100);//заполняем числами от 15 до 99
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.reverse();//разворачиваем все местами
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    sort(c.begin(),c.end());//сортируем
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.erase(c.begin() + 3,c.begin() + 13); // удаляем какие-то элементы
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.insert(c.begin() + 34,-1,34); //добавляем -1 единички
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    cout << c.front() << " " << c.back() << endl; //выводим первый последний элемент
    cout << c.size() << endl; //выврдим размер листа
    c.push_front(12);//добавляем в конец 12 и 15
    c.push_back(56);
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    c.pop_back();
    c.pop_front();//удаляем 1 последний элемент
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    //бежим по списку с помошью итераторов
    for(DoubleLinkedList<int>::Iterator it = c.begin();it != c.end();it ++){
        cout << *it << " ";
    }
    cout << endl;
    //бежим с помощью оьратных итераторов
    for(DoubleLinkedList<int>::Reverse_Iterator it = c.rbegin();it != c.rend();it ++){
        cout << *it << " ";
    }
    cout << endl;
    //демонстрируем арифметику операторов
    auto it = c.begin() + 15;
    auto it2 = c.end() - 2;
    cout << *it << " " << *it2 << endl;
    swap(it,it2);
    cout << *it << " " << *it2 << endl;
    for(auto i : c){
        cout << i << " ";
    }
    cout << endl;
    sort(c.rbegin(),c.rend());
    for(auto  i : c){
        cout << i << " ";
    }
    return 0;
}
