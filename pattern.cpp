#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
auto addDiff(auto first, auto last){
  return last-first;
}
auto add(auto val, auto diff){
  return val+diff;
}
auto mul(auto val, auto diff){
  return val*diff;
}
auto mulDiff(auto first, auto last){
  return last/first;
}
//c = a+b constant difference
std::optional<int> pattern1(std::vector<int> seq){
  // pattern matching 
  for(auto [clue,symbol]:{ {addDiff,add}, {mulDiff,mul}) {
    auto diff = clue(seq[1],seq[0]);
    auto index = 1;
    auto res = std::all_of(seq.begin()+2,seq.end(),[&index,seq,diff](int &n){
       return clue(n,seq[index++]) == diff; //b-a = constant
    });
    if(res) {
      return symbol(seq[seq.size()-1], diff);  
    }
  }
  //NOTE::[error: operands to '?:' have different types '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} and 'const std::nullopt_t']
  return std::nullopt;
}
