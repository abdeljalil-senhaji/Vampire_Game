

#include "Section.h"
//la definition des méthodes et et leur implémentation.
Section::Section() {}
Section::Section(string name):name(name){
    initForm();
}

void Section::initForm() {
    form = Gtk::VBox(true);
        //pour encadrée la section
        frame.set_label("");
        frame.set_label_align(Gtk::ALIGN_END,Gtk::ALIGN_START);
        frame.set_shadow_type(Gtk::SHADOW_ETCHED_OUT);

        horizForm = Gtk::HBox(true);
        LabelName = Gtk::Label(name);
        //set_markup pour défini le texte de l'étiquette coleur, font ..
        LabelName.set_markup("<span color= 'Red' weight='bold' font='18'>"+name+"</span>");
        //article
        form.pack_start(LabelName);
        frame.add(horizForm);
         //form.add(horizForm);
        form.pack_start(frame);

}
void Section::addArticle(Article &article) {
    horizForm.pack_start(article.form);
}