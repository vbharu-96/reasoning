#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
auto addDiff(auto first, auto last){
  return last-first;
}
auto mulDiff(auto first, auto last){
  return last/first;
}
//c = a+b constant difference
std::optional<int> pattern1(std::vector<int> seq){
  // pattern matching 
  for(auto method:{ addDiff, mulDiff) {
    auto diff = method(seq[1],seq[0]);
    auto index = 1;
    auto res = std::all_of(seq.begin()+2,seq.end(),[&index,seq,diff](int &n){
       return method(n,seq[index++]) == diff; //b-a = constant
    });
    if(res) {
      return (seq[seq.size()-1]);  
    }
  }
  //NOTE::[error: operands to '?:' have different types '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} and 'const std::nullopt_t']
  return std::nullopt;
}
