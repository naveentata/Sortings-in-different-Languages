#include <iostream>

void print(int A[], std::size_t len)
{
    std::cout << ">>> A[";
    for(auto i(0u); i < len; i++)
	{
        std::cout << A[i] << " ";
    }
    std::cout << "], Size = " << len << "\n";
}

void insert_element(int A[], int & len, int N, int new_element)
{
    if(len == N) return;

    auto i(len-1);
    while( i >= 0 and new_element < A[i])
    {
        //Open hole
        A[i+1] = A[i];
        i--;
    }
    //Add new element
    A[i+1] = new_element;
    len++;
}

void insertion_sort(int A[], int len)
{
    auto tamanho_logico_subvetor_ordenado(1);
    for(auto i(1); i < len; i++)
	{
        auto target(A[i]);
        insert_element(A, tamanho_logico_subvetor_ordenado, len, target);
    }
}

int main()
{
    int A[10] = {5,7,3,9,2,1,8,4,6,10};

    int len = 10;

    std::cout << ">>> Before Insertion Sort -> Array A:\n";
    print(A, len);

    insertion_sort(A,len);

    std::cout << ">>> After Insertion Sort -> Array A:\n";
    print(A, len);

    return 0;
}
