
#include "string"
#include "Field.h"
#include <gtkmm.h>
//la definition des méthodes et et leur implémentation.
//Creation des constructeur:

using  namespace std;
Field::Field(const string label, const string value) : name(label), value(value){
    initForm();
}
Field::Field(){
    labelValue = Gtk::Label("");
    LabelName = Gtk::Label("");
}
void Field::initForm() {
    form = Gtk::HBox(true);//la boite placer horizontal
    labelValue = Gtk::Label(value);
    LabelName = Gtk::Label(name + " : ");
    //set_markup pour défini le texte de l'étiquette coleur, font ..
    LabelName.set_markup("<span color= 'black' weight='bold' font='10'>"+name + " : "+"</span>");
    form.pack_start(LabelName);//pour emballer HBox au début à la fin.
    form.pack_start(labelValue);
}

