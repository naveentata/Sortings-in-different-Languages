#include<iostream>
#include<vector>
#include<functional>
#include<iterator>


template<typename T>
size_t default_transformer(T x){
    return (size_t) x;
}

template<typename InputOutputIt, typename Transformer>
void counting_sort(InputOutputIt first, InputOutputIt last, Transformer transform){
    
    using T = typename std::iterator_traits<InputOutputIt>::value_type;
    std::vector<std::vector<T> > cnt;

    for(auto it = first; it != last; ++it){
        auto index = transform(*it); 
        if(index >= cnt.size())
            cnt.resize(index + 1);
        cnt[index].push_back(*it);
    }

    for(auto it = cnt.begin(); it != cnt.end(); ++it)
        for(auto jt = it->begin(); jt != it->end(); ++jt, ++first){
            *first = *jt;
        }
}

int main(){
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for(auto & i : a)
        std::cin >> i;

    counting_sort(a.begin(), a.end(), default_transformer<int>);

    for(auto & i : a)
        std::cout << i << ' ';
}