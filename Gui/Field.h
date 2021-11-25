

#ifndef JALIL_FIELD_H
#define JALIL_FIELD_H
#include "string"
#include <gtkmm.h>
//creation de la classe Field
using namespace  std;
class Field {
public:
    Gtk::Label LabelName;
    Gtk::Label labelValue;
    Gtk::HBox form;
    string name;
    string value;
    Field(string name,string value);
    Field();
    void initForm();

};


#endif //JALIL_FIELD_H
