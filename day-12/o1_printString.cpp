#include<iostream>
#include<string>
int main(){

    // std::string name ;
    // std::string a = "unni";
    // std::string b ="kuttan";
    // std::string aa = "unni";
    // std::string bb ="unni";    

 




    // std::cout<<"enter your name : ";
    // //std::cin >> name;
    // std::getline(std::cin,name);
    // std::cout<<"Name : " << name<<std::endl;
    //  std::cout<<"length : " << name.length()<<std::endl;
    //  std::cout<<"size : " << name.size()<<std::endl;
    //  std::cout<<"full : " << a+b<<std::endl;
    //  if(a==b){
    //     std::cout<<true;
    //  }else{
    //     std::cout<<true;
    //  }
    //  if(aa==bb){
    //     std::cout << true;
    //  }else{
    //     std::cout<<false;
    //  }

    //   std::cout<<"name index 3  : " << name[3]<<std::endl;
    //   name[3] = 'p';
    //   std::cout<<"name index 3 to a : " << name<<std::endl;
    //   std::cout<<"Name : " << name<<std::endl;

    //   std::cout << name.substr(2,3)<<std::endl;


      std::cout << "----------"<<std::endl;


     std::string test ="abcdefg";
      std::cout<<test.find("de")<<std::endl;
      test.erase(1,3);
      std::cout<<test<<std::endl;
      test.insert(0,"haha");
       std::cout<<test<<std::endl;
       test.replace(2,2,"111");
       std::cout<<test<<std::endl;
        test.clear();
       std::cout<<test<<std::endl;
       if(test.empty()){
            std::cout << "Empty";
       }
       


     

    return 0;
}