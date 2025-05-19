#include<pattern.h>
//c = a+b constant difference
std::optional<int> pattern1(std::vector<int> seq){

  //NOTE::[error: operands to '?:' have different types '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} and 'const std::nullopt_t']
  return std::nullopt;
}
