// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int low = 0;  //  поместить сюда реализацию алгоритма
    int high = size - 1;
 
    int mid;
 
    while (low <= high)
      {
        mid = (low + high) / 2;
 
        if (value == arr[mid])
        {
            return mid;
        }
        else if (value > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
  return 0; // если ничего не найдено
}
