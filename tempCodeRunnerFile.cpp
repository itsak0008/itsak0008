void Merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    vector<int> B(high + 1);

    while (i <= mid && j <= high) {
        B[k++] = (A[i] < A[j]) ? A[i++] : A[j++];
    }
    while (i <= mid) B[k++] = A[i++];
    while (j <= high) B[k++] = A[j++];

    for (int l = low; l <= high; l++) A[l] = B[l];
}

void MergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);
        Merge(A, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter size of data set: ";
    cin >> n;
    int data_set[n];

    for (int i = 0; i < n; i++) {
        cout<<"costumer Id is "<<i+1<<" : ";
        cin >>data_set[i];
    }
MergeSort(data_set, 0, n - 1);
        cout<<"Sort the customer Id : ";
    for (int i = 0; i < n; i++){
         cout << data_set[i] << " ";
    }
    cout << endl;
    
   return 0;
}