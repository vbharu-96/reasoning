#include<iostream>
#include<algorithm>

#include<pattern.h>

//c = a+b constant difference
bool addDiff(std::vector<int> seq){
  int a,x;
  x = seq[1]-seq[0];
  a= seq[1];
  auto satisfies = std::all_of(seq.begin()+2,seq.end(), [&a,x](int b){
            auto ret = (b == (a+x));
            a = b;
            return ret;
  });
  if(satisfies) {
    std::cout<<"formula : " <<"b = a * x"<<std::endl;
    std::cout<<"result : "<< seq[seq.size()-1]+x<<std::endl;
  }
  return satisfies;
}

bool mulDiff(std::vector<int> seq){
  int a,x;
  x = seq[1]/seq[0];
  a= seq[1];
  auto satisfies = std::all_of(seq.begin()+2,seq.end(), [&a,x](int b){
            auto ret = (b == (a*x));
            a = b;
            return ret;
  });
  if(satisfies) {
     std::cout<<"formula : " <<"b = a * x"<<std::endl;
    std::cout<<"result : "<< seq[seq.size()-1]*x<<std::endl;
  }
  return satisfies;
}
