#include<iostream>
template<typename T>
void InsertionSort(T* arr,int size){
 int j;
 T key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            --j;

        }
        arr[j + 1] = key;
    }


}

int main(){
    int temp[] = {12,4,56,81,3,14,0};
    int size = sizeof(temp)/sizeof(temp[0]);
    InsertionSort(temp,size);
    
    for(size_t i = 0; i < size; ++i)
    {
        std::cout<<temp[i]<<std::endl;
    }
    
    return 0;
}
