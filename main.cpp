#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

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
    
