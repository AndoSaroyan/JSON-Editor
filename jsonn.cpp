
/***Before Using Program Write In Your Command Line "sudo apt install libjsoncpp-dev" for installing json libraries in Your Computer****//

#include <iostream>
#include <jsoncpp/json/value.h>
#include <jsoncpp/json/json.h>
#include <fstream>
#include <string>



int main ()
{ system("clear");
std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
   std::cout<<"         ********************* Welcome JSON Editor *****************"<<std::endl;
std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
std::cout<<std::endl;
  
  label:
 
  std::cout<<std::endl;
  std::cout<<"1.See Full JSON Data"<<std::endl;
  std::cout<<"2.Edit Data"<<std::endl;
  std::cout<<"3.Add Data"<<std::endl;
  std::cout<<"4.Save and end programm"<<std::endl;
  std::cout<<"---------------------------"<<std::endl;
  std::cout<<"Which option Do You Want ?:";
  int a;
  int b;
      std::cin>>a;
      std::string part;
      std::string part1;
      std::string key1;
      std::string key2;
      std::string key3;
      std::string value;
      std::string line;
      std::ifstream file("details.json"); 
      std::fstream MyFile("details.json");
  Json::Value InJson;
  Json::Reader reader;
  reader.parse(file,InJson);

    

switch (a)
{
case 1:
    std::cout<<std::endl;
    std::cout<<"Total json data:\n"<<InJson<<std::endl;
    goto label;
    break;

case 2:
    std::cout<<std::endl;
    std::cout<<"Which Degree of Depth Do you Want ?"<<std::endl;
    std::cout<<"1  (Example: Key=Value) "<<std::endl;
    std::cout<<"2  (Example: Key.Key=Value) "<<std::endl;
    std::cout<<"3  (Example: Key.Key.Key=Value)"<<std::endl;
    std::cin>>b;
    switch (b)
    {
    case 1:
            std::cout<<"Write a Command "<<std::endl;
            std::cin>>line;
            value=line.substr(line.find("=")+1);
            key1=line.substr(0,line.find("="));
            InJson [key1] = value;
            MyFile<<InJson;
            goto label;
            break;
    case 2:
            std::cout<<"Write a Command "<<std::endl;
            std::cin>>line;
            value=line.substr(line.find("=")+1);
            part=line.substr(0,line.find("="));
            key1=part.substr(0,part.find("."));
            key2=part.substr(part.find(".")+1);
            InJson [key1] [key2]=value;
            MyFile<<InJson;
            goto label;
            break;

    case 3:
            std::cout<<"Write a Command "<<std::endl;
            std::cin>>line;
            value=line.substr(line.find("=")+1);
            part=line.substr(0,line.find("="));
            key1=part.substr(0,part.find("."));
            part1=part.substr(key1.length()+1);
            key2=part1.substr(0,part1.find("."));
            key3=part1.substr(part1.find(".")+1);
            InJson [key1] [key2] [key3]=value;
            MyFile<<InJson;
            goto label;
            break;
            
    default:
            std::cout<<"Wrong Number Written !!!"<<std::endl;
            break;
    }
  
   goto label;
   break;

case 3:
    std::cout<<std::endl;
   
    std::cout<<"1  (Example:New: Key=Value) "<<std::endl;
    std::cout<<"2  (Example:New: Key.Key=Value) "<<std::endl;
    std::cout<<"3  (Example:New: Key.Key.Key=Value)"<<std::endl;
    std::cout<<"Which Degree of Depth Do you Want ?"<<std::endl;
    std::cin>>b;
    switch (b)
    {
    case 1:
            std::cout<<"Write a Command "<<std::endl;
            std::cin>>line;
            value=line.substr(line.find("=")+1);
            key1=line.substr(0,line.find("="));
            InJson [key1] = value;
            MyFile<<InJson;
            goto label;
            break;
    case 2:
            std::cout<<"Write a Command "<<std::endl;
            std::cin>>line;
            value=line.substr(line.find("=")+1);
            part=line.substr(0,line.find("="));
            key1=part.substr(0,part.find("."));
            key2=part.substr(part.find(".")+1);
            InJson [key1] [key2]=value;
            MyFile<<InJson;
            goto label;
            break;

    case 3:
            std::cout<<"Write a Command "<<std::endl;
            std::cin>>line;
            value=line.substr(line.find("=")+1);
            part=line.substr(0,line.find("="));
            key1=part.substr(0,part.find("."));
            part1=part.substr(key1.length()+1);
            key2=part1.substr(0,part1.find("."));
            key3=part1.substr(part1.find(".")+1);
            InJson [key1] [key2] [key3]=value;
            MyFile<<InJson;
            goto label;
            break;
            
     default:
             std::cout<<"Wrong Number Written !!!"<<std::endl;
             break;
    }
  
 
         MyFile << InJson;
        goto label;
        break;

case 4:
   return 0;
   break;

}

  return 0;
}



