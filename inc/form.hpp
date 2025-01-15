#pragma once

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_PNG_Image.H>
#include <math.hpp>


#include <vector>

class Form{
    
    Fl_Window *wd   = nullptr;
    Fl_Output *out  = nullptr;
    Fl_PNG_Image *icon = nullptr;

    std::vector<Fl_Button*> btn{};

    static bool click_op,click_ptr,click_number;

    void wig_person();

    void btn_init();
    void btn_builds();
    void btn_person();
    void btn_action();

    static void on_click_number(Fl_Widget*,void*);
    static void on_click_operate(Fl_Widget*,void*);
    static void on_click_clear(Fl_Widget*,void*);
    static void on_click_result(Fl_Widget*,void*);
    static void on_click_point(Fl_Widget*,void*);

    public:
        
        Form();

        bool show();
};

