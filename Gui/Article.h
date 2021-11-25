

#ifndef JALIL_ARTICLE_H
#define JALIL_ARTICLE_H
#include "string"
#include <gtkmm.h>

using namespace std;
//creation de la classe Article
class Article {
//definition des attributs de la classe Article
public:
    string name;
    Gtk::Label LabelName;
    Gtk::VBox form;
    Article();
    Article(string name);
    void initForm();
    void addField(Field &field1);//Pour ajouté ls Field
};


#endif //JALIL_ARTICLE_H
