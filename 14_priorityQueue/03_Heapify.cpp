#include <bits/stdc++.h>
using namespace std;
struct MyHeap
{
    int *arr;
    int capacity;
    int size;
    MyHeap(int c)
    {
        capacity = c;
        arr = new int[c];
        size = 0;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    void insert(int x)
    {
        if (size == capacity)
        {
            cout << "Heap is full" << endl;
            return;
        }
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
        cout << "The capacity of heap after inserting an element is " << size << endl;
    }
    void printElements()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    // void minHeapify(int i){
    //     int lt=left(i);
    //     int rt=right(i);
    //     int smallest=i;
    //     if(lt<size && arr[lt]<arr[smallest]){
    //         smallest=lt;
    //     }
    //     if(rt<size && arr[rt]<arr[smallest]){
    //         smallest=rt;
    //     }
    //     if(smallest!=i){
    //         swap(arr[i],arr[smallest]);
    //         minHeapify(smallest);
    //     }
    // }
    void minHeapify(int i)
    {
        while (true)
        {
            int lt = left(i);
            int rt = right(i);
            int smallest = i;

            if (lt < size && arr[lt] < arr[i])
                smallest = lt;
            if (rt < size && arr[rt] < arr[smallest])
                smallest = rt;

            if (smallest != i)
            {
                swap(arr[i], arr[smallest]);
                i = smallest;
            }
            else
            {
                break;
            }
        }
    }
    void decreseKey(inti, 9int x)
    {
        arr[i] = x;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void deleteKey(int i)
    {
        decreaseKey(i, INT_MIN);
        extractMin();
    }
    int extractMin()
    {
        if (size == 0)
            return INT_MAX;
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);
        return arr[size];
    }

        void buildHeap(){
        for(int i=(size-2)/2;i>=0;i--)
            minHeapify(i);
    }
};
int main()
{
    MyHeap MH(105);
    MH.insert(10);
    MH.insert(20);
    MH.insert(30);
    MH.insert(40);
    MH.printElements();
    cout << MH.extractMin() << endl;
    MH.printElements();
    return 0;
}
