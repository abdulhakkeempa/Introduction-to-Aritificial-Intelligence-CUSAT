#include <iostream>
using namespace std;

class Search{
    public:
        int linearSearchIterative(int list[],int N,int key);
        int linearSearchRecursive(int list[],int N,int key);
};

int Search::linearSearchIterative(int list[],int N,int key){
    for(int i  = 0; i < N; i++)
    {
        if (list[i]==key){
            return i;
        }
    }
    return -1;
}

int Search::linearSearchRecursive(int list[],int N,int key){
    if(N>0){
        if(list[N]==key){
            return N;
        }
        else{
            return linearSearchRecursive(list,N-1,key);
        }
    }
    else{
        return -1;
    }
}

int main(){
    Search search;
    int array[6]= {1,2,3,5,7,8};
    int position;
    position = search.linearSearchRecursive(array,6,9);
    if(position!=-1){
        cout<<"Search Successful"<<endl;
        cout<<"Position : "<<position+1<<endl;
    }
    else{
        cout<<"Search Failed"<<endl;
    }
    return 0;
}