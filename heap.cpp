#include<iostream>
using namespace std;
class heap{
    public:

    
        int arr[100];
        int size;

        heap(){
            arr[0]=-1;
            size=0;
        }
        void insert(int value){
            size++;
            int index=size;
            arr[index]=value;
            while(index>1){
                int parent=index/2;
                if(arr[parent]<value){
                    swap(arr[parent],arr[index]);
                    index=parent;
                }else{
                    return;
                }

            }
        }
        void deletenode(){
            if(size==0){
                return;
            }
            arr[1]=arr[size];
            size--;
            int i=1;
            while(i<size){
                int leftindex=2*i;
                int rightindex=2*i+1;
                if(leftindex<size && arr[i]<arr[leftindex]){
                    swap(arr[i],arr[leftindex]);
                    i=leftindex;

                }else if(rightindex<size && arr[i]<arr[rightindex]){
                    swap(arr[i],arr[rightindex]);
                    i=rightindex;
                }
                else{return;}
            }
        }
        void print(){
            for (int i = 1; i <=size; i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
            
        }
};
int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.deletenode();
    h.print();


}