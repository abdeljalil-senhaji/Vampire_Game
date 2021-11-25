

#include "Article.h"
//la definition des méthodes et et leur implémentation.
//Creation des constructeur:
Article::Article() {}
Article::Article(string name):name(name){
    initForm();
}

void Article::initForm() {
    form = Gtk::VBox(true);//une boite verticale
    LabelName = Gtk::Label(name);//placer du texte (Name) non modifiable dans les fenetres
    //set_markup pour défini le texte de l'étiquette coleur, font ..
    LabelName.set_markup("<span color= 'blue' weight='bold' font='14'>"+name+"</span>");
    form.pack_start(LabelName);//pour emballer les widgets VBox au début à la fin.
}
void Article::addField(Field &field1) {
    form.pack_start(field1.form);
}