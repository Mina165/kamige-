#include <vector>
#include <iostream>
struct Aiueo{
  int a;
  Aiueo(int a):a(a){}
};
int main(int argc, char **argv){
  std::vector<std::vector<Aiueo>> data(10,std::vector<Aiueo>(10,Aiueo(0)));
  for(int i=0;i<data.size();i++){
    for(int j=0;j<data.at(0).size();j++){
      std::cout<<data.at(i).at(j).a<<std::endl;
    }
  }
  for(int i=0;i<data.size();i++){
    for(int j=0;j<data.at(0).size();j++){
      data.at(i).at(j)=Aiueo(50);
    }
  }
  for(int i=0;i<data.size();i++){
    for(int j=0;j<data.at(0).size();j++){
      std::cout<<data.at(i).at(j).a<<std::endl;
    }
  }
}
