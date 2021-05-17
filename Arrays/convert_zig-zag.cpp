class Solution
{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) 
	{
	    // code here
	    for(int i=0; i<n-1; i++)
	    {
	        if(i%2 == 0){
	            if(arr[i] < arr[i+1])
	            {
	                continue;
	            }
	            else
	            {
	                swap(arr[i], arr[i+1]);
	            }
	        }
	        if(i%2 != 0){
	            if(arr[i] > arr[i+1]){
	                continue;
	            }
	            else
	            {
	                swap(arr[i], arr[i+1]);
	            }
	        }
	    }
	}
};

/*
For Input:
7
4 3 7 8 6 2 1
Your Output is: 
3 7 4 8 2 6 1 
*/
