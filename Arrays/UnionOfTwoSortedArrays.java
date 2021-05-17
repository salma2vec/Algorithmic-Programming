// A java program for the Union of Two Sorted Arrays using merge sort logic.

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
    vector<int> merge;
    int i=0,j=0;
    if(arr1[i]>arr2[j]){
        merge.push_back(arr2[j]);
        j++;
    }
    else if(arr1[i]<arr2[j]){
        merge.push_back(arr1[i]);
        i++;
    }
    else{
        merge.push_back(arr1[i]);
            i++;
            j++;
    }
    while(i<n && j<m){
        if(arr1[i]==merge.back() && i>=0){
            i++;
            continue;
        }
        if(arr2[j]==merge.back() && j>=0){
            j++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            merge.push_back(arr2[j]);
            j++;
        }
        else{
            merge.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        if(arr1[i]!=merge.back()){
            merge.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(arr2[j]!=merge.back()){
            merge.push_back(arr2[j]);
        }
        j++;
    }
    return merge;
    }
};

/*
For Input:
5 3
1 2 3 4 5
1 2 3
Your Output is: 
1 2 3 4 5 
*/
