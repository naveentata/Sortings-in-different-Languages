#include<iostream>
#include<vector>
#include<functional>

template<typename InputOutputIt>
void selection_sort(InputOutputIt first, InputOutputIt last){
    for(; first != last; ++first)
        for(auto it = first; it != last; ++it)
            if(*it < *first)
                std::swap(*it, *first);   
}

template<typename InputOutputIt, class Comp>
void selection_sort(InputOutputIt first, InputOutputIt last, Comp comp){
    for(; first != last; ++first)
        for(InputOutputIt it = first; it != last; ++it)
            if(comp(*it, *first) )
                std::swap(*it, *first);   
}


int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(auto & i : a)
        std::cin >> i;
    
    selection_sort(a.begin(), a.end());
    for(auto & i : a)
        std::cout << i << ' ';
    std::cout << std::endl;


    selection_sort(a.begin(), a.end(), std::greater<int>());
    for(auto & i : a)
        std::cout << i << ' ';
    
    return 0;
}