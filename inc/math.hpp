#pragma once

/*! 
*   @author: Randolfo A Gonçalves
*   @since:  17-12-24
*/

#include <FL/Fl_Output.H>
#include <FL/Fl_Widget.H>
#include <exception>
#include <string>

namespace Operate {

    const double ERRO = -999999999999999;
    
    std::string calc(std::string,Fl_Output* = nullptr);
}


class Erro:public std::exception{

    protected: Erro(Fl_Output*,std::string); 
    public: 
        static bool click_erro;
};

struct Empty_expression: public Erro{ Empty_expression(Fl_Output*); };
struct Division_by_zero: public Erro{ Division_by_zero(Fl_Output*);};
struct Bad_expression:   public Erro{ Bad_expression(Fl_Output* ); };