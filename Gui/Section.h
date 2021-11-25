
#ifndef JALIL_SECTION_H
#define JALIL_SECTION_H
#include "string"
#include <gtkmm.h>
#include "Article.h"

using namespace std;

//creation de la classe Section
class Section: public Gtk::Window {
public:
    string name;
    Gtk::Label LabelName;
    Gtk::VBox form;
    Gtk::HBox horizForm;
    Gtk::Frame frame;
    Section();
    Section(string name);
    void initForm();
    void addArticle(Article &article);
};


#endif //JALIL_SECTION_H
