//This is quick sort code
#include <iostream>
#include <functional>

void print(int *first_, int * last_)
{
    std::cout << "[";
    while(first_ != last_)
	{
        std::cout << *first_ << " ";
        first_++;
    }
    std::cout << "]";
}

int * partition(int * first_, int * last_)
{   
    auto pivot = *(last_-1); // Last valid element
    auto slow(first_);
    auto fast(first_);

    while(fast != last_)
    {              
        if(*fast <= pivot)
        {             
            std::swap(*fast,*slow);     
            slow++;
        }
        fast++;
    }
    return slow;
}

void quick_sort(int *first_, int * last_)
{
    if(first_ == last_) return;
    auto past_pivot = partition(first_,last_);
    quick_sort(first_, past_pivot-1);
    quick_sort(past_pivot, last_);
}

int main(void){
	
    int A[] = {10,9,8,7,6,5,4,3,2,1};

     std::cout << ">>> Before Quick Sort -> Array A:\n";
    print(std::begin(A), std::end(A));
    std::cout << std::endl;

    quick_sort(std::begin(A), std::end(A));

    std::cout << ">>> After Quick Sort -> Array A:\n";
    print(std::begin(A), std::end(A));

    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
