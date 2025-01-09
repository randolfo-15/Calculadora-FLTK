#include <iomanip>
#include <math.hpp>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>


using Db=double;          //> Doubles
using St=std::string;     //> String
using Sg=std::vector<Db>; //> Seguimento

const int MAX = 57,
          MIN = 48,
          PTR = 46;
          
Sg filter(St exp,St n,Sg sg){
    if(exp[0]==45|| exp[0]==43) {
        n.push_back(exp[0]);
        exp=exp.substr(1);
    }

    for(char e:exp)
        if((e >= MIN && e <= MAX)||e == PTR) n+=e;
        else{
            sg.push_back(std::stoi(n));
            sg.push_back(e);
            n.clear();
        }
    
    sg.push_back(std::stod(n));
    return sg;
}


St format(Db value){
    // Caso seja inteiro
    int n = static_cast<int>(value);
    if(n == value) return std::to_string(n);

    // Caso seja fracionado:
    std::ostringstream str;
    str<<std::fixed<<std::setprecision(6)<<value;
    St result = str.str();
    size_t i = result.find_last_not_of('0'); 

    if(result[i]=='.') i--;                      
    return result.substr(0,i+1);          
}

double operation(Sg::iterator n,int limit,double value) {
    if(!limit) return value;
    switch ((int)*(n+1)) {
        case 43 /* + */: return operation(n+2,limit-1,value+(*(n+2)));
        case 45 /* - */: return operation(n+2,limit-1,value-(*(n+2)));
        case 42 /* * */: return operation(n+2,limit-1,value*(*(n+2)));
        case 47 /* / */: return operation(n+2,limit-1,value/(*(n+2)));
        
        default: return Operate::ERRO;
    }
}

St Operate::calc(St expression){ 
    if(!expression.size()) return "";
    else if(expression[0]=='*'|| expression[0]=='/') return "";
    Sg fx= filter(expression,"",{});
    St out = format(operation(fx.begin(),fx.size()/2,fx[0])); 
    return (out!="inf")?out:"";
}