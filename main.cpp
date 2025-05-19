#include<iostream>
#include<string>
#include<vector>
#include<sstream>

#include <pattern.h>


int main() {
  std::string input;
  std::vector<int> sequence;
  for(auto chance =0;chance<3;chance++) {
      std::cout<<"Enter Sequence : "<<std::endl;
      std::getline(std::cin, input);
      std::stringstream ss (input);
      while(std::getline(ss, input, ' ')){
        sequence.emplace_back(std::stoi(input));
      }
      std::cout<<"Sequence : ";
      for(auto number: sequence){
        std::cout<<number<<" ";
      }
      std::cout<<"--"<<std::endl;
      if(sequence.size() < 3) {
        std::cout<<"WARNING : need to provide atleast 3 numbers. Please provide remining "<<(3-sequence.size())<<" numbers"<<std::endl;
        continue;
      }
      break;
  }
  if(sequence.size() < 3) {
    std::cout<<"ERROR : invalid input..."<<std::endl;
    return 0;
  }

  using Forarmula = bool(*)(std::vector<int>);
  std::vector<Forarmula> formulas {addDiff, mulDiff}; 
  auto resultFound =false;
  for(auto& formula: formulas) {
    resultFound = formula(sequence);
    if(resultFound) break;
  }
  if(!resultFound) {
    std::cout<<"I hope you are not kidding...otherwise, I don't know the answer.... :( "<<std::endl;
  }
}
    
