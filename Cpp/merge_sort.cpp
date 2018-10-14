#include <iostream>
#include <algorithm>
#include <iterator>

void print( int * first_, int * last_ )
{
    std::cout << "[ ";
    while( first_ < last_ )
    {
        std::cout << *first_ << " ";
        first_++;
    }
    std::cout << "]";
}

void merge( int *first_a, int *last_a,
            int *first_b, int *last_b,
            int *first_c )
{
    while( first_a != last_a )
    {

        //If B is empty, move all remaining elements from A to C
        if (first_b == last_b)
        {
            std::copy(first_a, last_a, first_c);
            return;
        }

        if(*first_a <= *first_b)
        {
            *first_c++ = *first_a++;

        }else
        {
            *first_c = *first_b;
            first_b++;
            first_c++;
        }
    }

    //If A is empty, move all remaining elements from B to C
    std::copy(first_b, last_b, first_c);
}

void merge_sort( int *first, int *last )
{
    auto n = std::distance(first, last);
    if(n == 1) return; 

    auto len_left = n/2;
    auto len_right = n - n/2;

    int *L = new int[len_left];
    int *R = new int[len_right];

    std::copy(first, first+len_left, L);
    std::copy(first+len_left, last, R);

    merge_sort( L, L+len_left );
    merge_sort( R, R+len_right );
    
    merge(L, L+len_left, R, R+len_right, first);

    delete [] L;
    delete [] R;
}

int main( void )
{
    int A[] = { 3, 2, 7, 4, 1, 8, 5, 6, 9, 0};

    std::cout << ">>> Before Merge Sort -> Array A:\n";
    print( std::begin(A), std::end(A) );
    std::cout << std::endl;

    merge_sort( std::begin(A), std::end(A) );

    std::cout << ">>> After Merge Sort -> Array A:\n";
    print( std::begin(A), std::end(A) );
    std::cout << std::endl;

    return 0;
}
