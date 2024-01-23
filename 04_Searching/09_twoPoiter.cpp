bool isPair (int arr[], int n, int x)
{ 
    int i=0, j=n-1; 
    while (i<j){
        
        if (arr[i] + arr[j] == x) 
            return true; 
        else if (arr[i] + arr [j] <x)i++;
        else j--;
    }

    return false;
}