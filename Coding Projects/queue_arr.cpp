#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FOR(i,a) for(int i=0; i<a; i++)


// Complexity is O(1)
void insertAtEnd(ll* back_index, ll* que, ll data){
    *back_index = *back_index + 1;
    que[*back_index] = data;
}

// Complexity is O(N)
// void Deque(ll* back_index, ll* que){
//     cout << que[0] << " was dequeued" << endl;
//     for (int i = 0; i < *back_index; i++){
//         que[i] = que[i+1];
//     }
//     que[*back_index] = 0;
//     *back_index = *back_index - 1;
// }

// Complexity is O(1)
void Deque(ll* front_index, ll* que){
    cout << que[*front_index+1] << " was dequeued" << endl;
    *front_index = *front_index + 1;
}

void printQue(ll* que, ll back_index, ll front_index){
    for(ll i = front_index+1; i < back_index+1; i++){
        cout << que[i] << " ";
    }
    cout << "\tBack Index = " << back_index << "\tFront Index = " << front_index << endl;
}

void IsEmpty(ll back_index, ll front_index){
    if(back_index == front_index){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
}

void IsFull(ll back_index){
    if(back_index == 14){
        cout << "Queue is full" << endl;
    }
    else{
        cout << "Queue is not full" << endl;
    }
}

int main(){
    ll back_index = -1;
    ll front_index = -1;
    ll que[15];
    FOR(i, 15){
        que[i] = 0;
    }   
    
    IsEmpty(back_index, front_index);
    insertAtEnd(&back_index, que, 132);
    insertAtEnd(&back_index, que, 43);
    printQue(que, back_index, front_index);
    insertAtEnd(&back_index, que, 7867);
    printQue(que, back_index, front_index);
    Deque(&front_index, que);
    printQue(que, back_index, front_index);
    insertAtEnd(&back_index, que, 3423);
    printQue(que, back_index, front_index);
    Deque(&front_index, que);
    insertAtEnd(&back_index, que, 676);
    printQue(que, back_index, front_index);
    IsEmpty(back_index, front_index);

    return 0;
}