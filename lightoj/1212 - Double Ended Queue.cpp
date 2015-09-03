#include<iostream>
using namespace std;

class Queue{
    private:
        int left, right, size, data[250], currentSize;
    public:
        Queue(int size);
        int getLeft();
        int getRight();
        int getSize();
        int getCurrentSize();
        bool isEmpty();
        bool isFull();
        void pushLeft(int n);
        void pushRight(int n);
        int popLeft();
        int popRight();
};

Queue::Queue(int size){
    this->size = size;
    this->left = 100;
    this->right = 101;
    this->currentSize = 0;
}
int Queue::getLeft(){
    return this->left;
}
int Queue::getRight(){
    return this->right;
}
int Queue::getSize(){
    return this->size;
}
int Queue::getCurrentSize(){
    return this->currentSize;
}
bool Queue::isEmpty(){
    if(this->left + 1 == this->right || this->currentSize == 0){
        return true;
    }else{
        return false;
    }
}
bool Queue::isFull(){
    if(this->currentSize >= this->size || this->currentSize == this->size){
        return true;
    }else{
        return false;
    }
}
void Queue::pushLeft(int n){
    this->data[this->left] = n;
    this->left -= 1;
    this->currentSize++;
}
void Queue::pushRight(int n){
    this->data[this->right] = n;
    this->right += 1;
    this->currentSize++;
}
int Queue::popLeft(){
    int n = this->data[this->left + 1];
    this->left += 1;
    this->currentSize--;
    return n;
}
int Queue::popRight(){
    int n = this->data[this->right - 1];
    this->right -= 1;
    this->currentSize--;
    return n;
}

int main(){
    int t, counter = 1;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        Queue q(n);
        cout<<"Case "<< counter++ <<":"<<endl;
        for(int i=0; i<m; i++){
            string command;
            int num;
            cin>>command;
            if(command == "pushLeft" || command == "pushRight"){
                cin>>num;
            }
            if(command == "pushLeft"){
                if(q.isFull()){
                    cout<<"The queue is full"<<endl;
                }else{
                    q.pushLeft(num);
                    cout<<"Pushed in left: "<< num <<endl;
                }
            }
            if(command == "pushRight"){
                if(q.isFull()){
                    cout<<"The queue is full"<<endl;
                }else{
                    q.pushRight(num);
                    cout<<"Pushed in right: "<< num <<endl;
                }
            }
            if(command == "popLeft"){
                if(q.isEmpty()){
                    cout<<"The queue is empty"<<endl;
                }else{
                    cout<<"Popped from left: "<< q.popLeft() <<endl;
                }
            }
            if(command == "popRight"){
                if(q.isEmpty()){
                    cout<<"The queue is empty"<<endl;
                }else{
                    cout<<"Popped from right: "<< q.popRight() <<endl;
                }
            }
        }
    }
}
