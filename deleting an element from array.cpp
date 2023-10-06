#include <iostream>

using namespace std;

int main()
{
    int arr[100], position, c, n;
    
    cout<<"Enter number of elements in array\n";
    cin>>n;
    
    cout<<"Enter elements\n";
    
    for ( c = 0 ; c < n ; c++ )
    cin>>arr[c];
    
    cout<<"Enter the location where you wish to delete element\n";
    cin>>position;
    
    if ( position >= n+1 )    
    cout<<"Deletion not possible.\n";
    
    else
    {    
        for ( c = position - 1 ; c < n - 1 ; c++ ) 
        arr[c] = arr[c+1];        
        
        cout<<"Resultant array is\n";
        
        for( c = 0 ; c < n - 1 ; c++ ){        
        cout<<arr[c]<<" "; 
        }
        
    }    
    return 0;
}