#include <bits/stdc++.h>


int binary_search_(int array[] , int l , int r , int key)
{
    while( l <= r )
    {
        int middle = l + ( r - 1 ) / 2 ;

        if( array[middle] == key)
            return(middle);
        if( array[middle] < key )
            l = middle + 1 ;
        else
            r = middle - 1 ;
    }
    return(-1);
}


int main()
{

    int array[] = { 1 , 2 , 3 ,4};
    int search_value ;
    scanf("%d", &search_value );

    int n = sizeof(array) / sizeof(array[0]);

    int result = binary_search_(array , 0 , n - 1,search_value) ;

    if( result == -1 )
        printf("The value is not present in the array \n");
    else
        printf("The search value is present here \n");

    return(0);
}
