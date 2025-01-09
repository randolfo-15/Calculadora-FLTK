#include "math.hpp"
#include <FL/Enumerations.H>
#include <FL/Fl_Output.H>
#include <form.hpp>
#include <string>

bool Form::click_op=false;

Form::Form(){
    wd = new Fl_Window(260,380,"Calc-FLTK");
    out = new Fl_Output(10,20,240,50,""); 
    btn_init();

    
}


void Form::btn_init(){
    btn_builds();
    btn_person();
    btn_action();
}

void Form::btn_builds(){
    btn.push_back(new Fl_Button(10,100,50,50,"9"));
    btn.push_back(new Fl_Button(70,100,50,50,"8"));
    btn.push_back(new Fl_Button(130,100,50,50,"7"));
    btn.push_back(new Fl_Button(10,170,50,50,"6"));
    btn.push_back(new Fl_Button(70,170,50,50,"5"));
    btn.push_back(new Fl_Button(130,170,50,50,"4"));
    btn.push_back(new Fl_Button(10,240,50,50,"3"));
    btn.push_back(new Fl_Button(70,240,50,50,"2"));
    btn.push_back(new Fl_Button(130,240,50,50,"1"));
    btn.push_back(new Fl_Button(10,310,50,50,"0"));

    btn.push_back(new Fl_Button(70,310,50,50,"c"));
    btn.push_back(new Fl_Button(130,310,50,50,"="));

    btn.push_back(new Fl_Button(200,100,50,50,"+"));
    btn.push_back(new Fl_Button(200,170,50,50,"-"));
    btn.push_back(new Fl_Button(200,240,50,50,"*"));
    btn.push_back(new Fl_Button(200,310,50,50,"/"));
}

void Form::btn_person(){
    // Colorir números:
    for(int i=0;i<10;i++) btn[i]->color(fl_rgb_color(140,110,125));
    btn[10]->color(fl_rgb_color(140,150,125));
    btn[11]->color(fl_rgb_color(100,150,100));
    for(int i=12;i<16;i++) btn[i]->color(fl_rgb_color(90,90,125));
}

void Form::btn_action(){
    for(int i=0;i<10;i++) btn[i]->callback(on_click_number,(void*) out);
    btn[10]->callback(on_click_clear,(void*) out);
    btn[11]->callback(on_click_result,(void*) out);
    for(int i=12;i<16;i++) btn[i]->callback(on_click_operate,(void*) out);
}

void Form::on_click_number(Fl_Widget* wg,void* obj){
    
    Fl_Output* out = (Fl_Output*) obj;
    std::string text= out->value();
    text+=wg->label();

    out->value(text.c_str());
    click_op = false;
}

void Form::on_click_operate(Fl_Widget* wg,void* obj){
    if(click_op) return;

    Fl_Output* out = (Fl_Output*) obj;
    std::string text= out->value();
    text+=wg->label();

    out->value(text.c_str());
    click_op = true;
}

void Form::on_click_clear(Fl_Widget* wg,void* obj){
    Fl_Output* out = (Fl_Output*) obj;
    out->value("");
}

void Form::on_click_result(Fl_Widget* wg,void* obj){
    Fl_Output* out = (Fl_Output*) obj;
    std::string text= out->value();
    out->value(Operate::calc(text).c_str());
}

bool Form::show(){
    wd->end();
    wd->show();
    return Fl::run();;
}
