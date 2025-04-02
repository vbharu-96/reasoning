#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

//c = a+b constant difference
std::optional<int> pattern1(std::vector<int> seq){
  // pattern matching 
  auto diff = seq[1]-seq[0];
  auto index = 1;
  auto res = std::all_of(seq.begin()+2,seq.end(),[&index,seq,diff](int &n){
     return n == (seq[index++]+diff);
  });
  if(res) return(seq[seq.size()-1]+1);  
  //NOTE::[error: operands to '?:' have different types '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} and 'const std::nullopt_t']
  return std::nullopt;
}


int main() {
  std::string input;
  std::vector<int> sequence;
  std::cout<<"Enter Sequence : "<<std::endl;
  while(std::getline(std::cin, input, ' ')){
    sequence.emplace_back(std::stoi(input));
  }
  std::cout<<"Sequence : ";
  std::for_each(auto number: sequence){
    std::cout<<number<<" ";
  }
  std::cout<<"--"<<std::endl;
  auto res = pattern1(sequence);
  if(res){
    std::cout<< "Answer : " <<res<<std::endl;
  }
  else{
    std::cout<<"I hope you are not kidding...otherwise, I don't know the answer.... :( "<<std::endl;
  }

}
    
