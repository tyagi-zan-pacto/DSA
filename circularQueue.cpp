#include<bits/stdc++.h>
#define SIZE 10
using namespace std;

template < typename T > class Queue {
    private:
        T * arr;
    int fIndex, rIndex;
    public:
        Queue() {
            arr = new T[SIZE];
            fIndex = 0;
            rIndex = 0;
        }


    bool isFull() {
        return (rIndex + 1) % SIZE == fIndex;
    }

    bool isEmpty() {
        return rIndex == fIndex;
    }

    void enqueue(T item) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        *(this->arr + this->rIndex) = item;
        this->rIndex = (this->rIndex + 1) % SIZE;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout<<front()<<" dequeued"<<endl;
        fIndex = (fIndex + 1) % SIZE;
    }

    T front(){
        return isEmpty() ? NULL : *(arr + fIndex);
    }
};



int main(){
	   bool quit = false;
    Queue < int > queue;
    int temp;
    
    
    
    
    do {
        cout << "====================================" << endl;
        cout << "What do you want to perform :" << endl;
        cout << "1.Enqueue" << endl;
        cout << "2.Dequeue" << endl;
        cout << "3.Retrieve front item" << endl;
        cout << "4.Exit" << endl;
        int ch;
        cin >> ch;
        cout << "====================================" << endl;
        switch (ch) {
            case 1:
                cout << "Enter an item to enqueue:" << endl;
                cin >> temp;
                queue.enqueue(temp);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                if (queue.isEmpty()) {
                    cout << "Queue is empty" << endl;
                } else {
                    cout << "Front: " << queue.front() << endl;
                }
                break;
            case 4:
                quit = true;
                break;
            default:
                cout << "Invalid selection" << endl;
                break;
        }
    } while (!quit);
	
	return 0;
}
