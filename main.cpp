
/* 
Fichier main avec les données des personnages manipuler et l'affichage de ces données 
sous une interface graphique.
*/

/*L'idée c'est de créer 3 classes pour la manipulation des articles, Field et Section 
afin d'optimiser le programme et d'éviter la redondance. À chaque fois qu'on crée  
un personnage il se fait juste de faire appel a ces 3 classes.
*/

//Dans chaque section il y a des articles et dans chaque article il y a des fiels.
//Par exemple section Attributes
//article  = Physical ou social ...
//fiald = Strength ou Charisma ...

/* Les taches pour crée un personnage:
 * 0-creation des sections
 * 1-creation plusieurs personnages
 * 2- creation tableau des personnages
 * 3- Methode recherche personnge par nom
*/

//Appeler des bibliothèques et toutes les classes

#include <iostream>
#include <vector>
#include <string>
#include "classes/Physical.h"
#include "classes/Physical.cpp"
#include "classes/Social.h"
#include "classes/Social.cpp"

#include "classes/Mental.h"
#include "classes/Mental.cpp"
#include "classes/Attribute.h"
#include "classes/Attribute.cpp"
#include "classes/Talent.h"
#include "classes/Talent.cpp"
#include "classes/Skill.h"
#include "classes/Skill.cpp"
#include "classes/Knowledge.h"
#include "classes/Knowledge.cpp"
#include "classes/Abilitie.h"
#include "classes/Abilitie.cpp"
#include "classes/Advantage.h"
#include "classes/Advantage.cpp"
#include "classes/Clan.h"
#include "classes/Clan.cpp"
#include "classes/Personnage.h"
#include "classes/Personnage.cpp"

#include "Gui/Field.h"
#include "Gui/Field.cpp"
#include "Gui/Article.h"
#include "Gui/Article.cpp"
#include "Gui/Section.h"
#include "Gui/Section.cpp"
#include <gtkmm.h>



using namespace std;
int main(int argc,char* argv[]) {

  

    /*------------------------------creation Personnage Damsel-------------------------------------- */
    //Attributes
    Physical physical(5,6,4);
    Social social(5,4,2);
    Mental mental(4,3,2);
    Attribute attribute(physical,social,mental);

    //Abbilities
    Talent talent(4, 6, 3, 7, 2, 6, 2, 5, 1, 1);
    Skill skill(1,4,1,7,6,9,1,1,3,1);
    Knowledge knowledge(5,1,8,3,1,2,1,6,1,1);
    Abilitie abilitie(talent,skill,knowledge);

    //Advantages
    //utilisation de la fonction push_back() pour pousser des éléments dans un vecteur depuis l'arrière.
    vector<string>disciplines;
    disciplines.push_back("Celerity");
    disciplines.push_back("Potence");
    disciplines.push_back("Presence");
    disciplines.push_back("Animalism");

    vector<string>backgrounds;
    backgrounds.push_back("Domain");
    backgrounds.push_back("allies");
    backgrounds.push_back("Status");
    backgrounds.push_back("Rituals");
    Advantage advantage(disciplines,backgrounds,1,3,2);

    //clan
    Clan clan("Brujah","");

    Personnage personnage("Damsel",clan,attribute,abilitie,advantage);

    /*------------------------------Fin creation Personnage Damsel-------------------------------------- */

        /*------------------------------creationPersonnage Thetmes-------------------------------------- */
    //attributes
    Physical physical2(1,6,5);
    Social social2(1,1,2);
    Mental mental2(1,1,4);
    Attribute attribute2(physical2,social2,mental2);

    //Abbilities
    Talent talent2(4,7, 3, 7, 2, 3, 1, 5, 1, 3);
    Skill skill2(1,3,7,1,2,4,2,7,3,1);
    Knowledge knowledge2(3,1,1,7,5,3,1,3,4,1);
    Abilitie abilitie2(talent2,skill2,knowledge2);

    //advantages
    vector<string>disciplines2;
    disciplines2.push_back("Celerity");
    disciplines2.push_back("Obfuscate");
    disciplines2.push_back("Quietus");
    disciplines2.push_back("Auspex");

    vector<string>backgrounds2;
    backgrounds2.push_back("Fame");
    backgrounds2.push_back("Herd");
    backgrounds2.push_back("Ressources");
    backgrounds2.push_back("Mentor");
    Advantage advantage2(disciplines2,backgrounds2,5,3,4);

    //clan
    Clan clan2("Assamite","");


    Personnage personnage2("Thetmes",clan2,attribute2,abilitie2,advantage2);


    /*------------------------------Fin creationPersonnage Thetmes-------------------------------------- */

    //Création d'un tableau de personnage contient 2 personnages 
    Personnage tab[2];
    tab[0] = personnage;
    tab[1] = personnage2;

    //Demander un nom à l'utilisateur, et parcourir le tableau afin d'afficher la fiche du personnage demandé

    cout<<"Saisi le nom de la personnalité soit Damsel ou Thetmes: " <<endl;
    string name;
    cin>>name;
    Personnage p ;
        for(int i=0;i<2;i++){
            if(tab[i].getName() == name){
                p = tab[i];
                break;
            }
        }
    
    /*------------------------------Creation window-------------------------------------- */
    //creation de la fenetre
    Gtk::Main app(argc, argv);
    Gtk::Window fenetre;
    //creation d'un boite verticale pour la pose de widgets dans une rangée verticale.
    Gtk::VBox homeBox(true);
    /*------------------------------Debut Section info-------------------------------------- */
        //Article vide
        Article article("");
        Field field("Name",""+p.getName());
        Field field2("Player","abdel1254");
        Field field3("Chronicle","chronicle vide");
        article.addField(field);
        article.addField(field2);
        article.addField(field3);
        //Article vide
        Article article2("");
        Field field4("Nature","Visionary");
        Field field5("Demeanor","demeanor vide");
        Field field6("Concept","empty");
        article2.addField(field4);
        article2.addField(field5);
        article2.addField(field6);
        //Article vide
        Article article3("");
        Field field7("Clan",p.getClan().getName());
        Field field8("Generation","7th generation");
        Field field9("Sire","sire vide");
        article3.addField(field7);
        article3.addField(field8);
        article3.addField(field9);

        Section section("Personal Information");
        section.addArticle(article);
        section.addArticle(article2);
        section.addArticle(article3);
    /*------------------------------Fin Section info-------------------------------------- */
    /*------------------------------Debut Section Attributes-------------------------------------- */
            //Article Physical
            Article article4("Physical");
            Field field10("strength",to_string(p.getAttribute().getPhysical().getStrength()));
            Field field11("Dexterity",to_string(p.getAttribute().getPhysical().getDexterity()));
            Field field12("Stamina",to_string(p.getAttribute().getPhysical().getStamina()));
            
            article4.addField(field10);
            article4.addField(field11);
            article4.addField(field12);

            //Article Social
            Article article5("Social");
            Field field13("strength","2");
            Field field14("Dexterity","1");
            Field field15("Stamina","6");
            article5.addField(field13);
            article5.addField(field14);
            article5.addField(field15);
            //Article Mental
            Article article6("Mental");
            Field field16("strength","7");
            Field field17("Dexterity","4");
            Field field18("Stamina","8");
            article6.addField(field16);
            article6.addField(field17);
            article6.addField(field18);

            Section section2("Attributes");
            section2.addArticle(article4);
            section2.addArticle(article5);
            section2.addArticle(article6);
    /*------------------------------Fin Section Attributes-------------------------------------- */

    /*------------------------------debut Section Abilities-------------------------------------- */
    //Article Talent
    Article article7("Talent");
    //Field 
    Field field19("Alertness",to_string(p.getAbilitie().getTelent().getAlertness()));
    Field field20("Athletics",to_string(p.getAbilitie().getTelent().getAthletics()));
    Field field21("Awareness",to_string(p.getAbilitie().getTelent().getAwareness()));
    Field field22("Brawl",to_string(p.getAbilitie().getTelent().getBrawl()));
    Field field23("Empathy",to_string(p.getAbilitie().getTelent().getEmpathy()));
    Field field24("Expression",to_string(p.getAbilitie().getTelent().getExpression()));
    Field field25("Intimidation",to_string(p.getAbilitie().getTelent().getIntimidation()));
    Field field26("Leadership",to_string(p.getAbilitie().getTelent().getLeadership()));
    Field field27("Streetwise",to_string(p.getAbilitie().getTelent().getStreetwise()));
    Field field28("Subterfuge",to_string(p.getAbilitie().getTelent().getSubterfuge()));
    article7.addField(field19);
    article7.addField(field20);
    article7.addField(field21);
    article7.addField(field22);
    article7.addField(field23);
    article7.addField(field24);
    article7.addField(field25);
    article7.addField(field26);
    article7.addField(field27);
    article7.addField(field28);
    //Article Skills
    Article article8("Skills");
    Field field29("AnimalKen",to_string(p.getAbilitie().getSkill().getAnimalKen()));
    Field field30("Crafts",to_string(p.getAbilitie().getSkill().getCrafts()));
    Field field31("Drive",to_string(p.getAbilitie().getSkill().getDrive()));
    Field field32("Etiquette",to_string(p.getAbilitie().getSkill().getEtiquette()));
    Field field33("Firearms",to_string(p.getAbilitie().getSkill().getFirearms()));
    Field field34("Larceny",to_string(p.getAbilitie().getSkill().getLarceny()));
    Field field35("Melee",to_string(p.getAbilitie().getSkill().getMelee()));
    Field field36("Performance",to_string(p.getAbilitie().getSkill().getPerformance()));
    Field field37("Stealth",to_string(p.getAbilitie().getSkill().getStealth()));
    Field field38("Survival",to_string(p.getAbilitie().getSkill().getSurvival()));
    article8.addField(field29);
    article8.addField(field30);
    article8.addField(field31);
    article8.addField(field32);
    article8.addField(field33);
    article8.addField(field34);
    article8.addField(field35);
    article8.addField(field36);
    article8.addField(field37);
    article8.addField(field38);
    //Article Knowledges
    Article article9("Knowledges");
    Field field39("Academics",to_string(p.getAbilitie().getKnowledge().getAcademics()));
    Field field40("Computer",to_string(p.getAbilitie().getKnowledge().getComputer()));
    Field field41("Finance",to_string(p.getAbilitie().getKnowledge().getFinance()));
    Field field42("Investigation",to_string(p.getAbilitie().getKnowledge().getInvestigation()));
    Field field43("Law",to_string(p.getAbilitie().getKnowledge().getLaw()));
    Field field44("Medicine",to_string(p.getAbilitie().getKnowledge().getMedicine()));
    Field field45("Occult",to_string(p.getAbilitie().getKnowledge().getOccult()));
    Field field46("Politics",to_string(p.getAbilitie().getKnowledge().getPolitics()));
    Field field47("Science",to_string(p.getAbilitie().getKnowledge().getScience()));
    Field field48("Technology",to_string(p.getAbilitie().getKnowledge().getTechnology()));
    article9.addField(field39);
    article9.addField(field40);
    article9.addField(field41);
    article9.addField(field42);
    article9.addField(field43);
    article9.addField(field44);
    article9.addField(field45);
    article9.addField(field46);
    article9.addField(field47);
    article9.addField(field48);
    /*------------------------------Fin Section abilities-------------------------------------- */
    /*------------------------------debut Section Advantages-------------------------------------- */
    //Article Disciplines
    Article article10("Disciplines");
    Field field49(p.getAdvantage().getDisciplines()[0],"7");
    Field field50(p.getAdvantage().getDisciplines()[1],"5");
    Field field51(p.getAdvantage().getDisciplines()[2],"8");
    Field field52(p.getAdvantage().getDisciplines()[3],"4");
    article10.addField(field49);
    article10.addField(field50);
    article10.addField(field51);
    article10.addField(field52);
    //Article Backgrounds
    Article article11("Backgrounds");
    Field field53(p.getAdvantage().getBackgrounds()[0],"4");
    Field field54(p.getAdvantage().getBackgrounds()[1],"3");
    Field field55(p.getAdvantage().getBackgrounds()[2],"7");
    Field field56(p.getAdvantage().getBackgrounds()[3],"4");
    article11.addField(field53);
    article11.addField(field54);
    article11.addField(field55);
    article11.addField(field55);





    /*------------------------------Fin Section advantages-------------------------------------- */


    Section section3("Abilities");
    section3.addArticle(article7);
    section3.addArticle(article8);
    section3.addArticle(article9);

    Section section4("Advantages");
    section4.addArticle(article10);
    section4.addArticle(article11);
    

    homeBox.pack_start(section.form);
    homeBox.pack_start(section2.form);
    homeBox.pack_start(section3.form);
    homeBox.pack_start(section4.form);
     /*--------------------------------------Affichage window------------------------------------------- */
//Fenetre d'affichage 
    fenetre.set_title("Vampire");
    fenetre.set_size_request(700,500);
    
    Gtk::ScrolledWindow scroll;
    scroll.add(homeBox);
    fenetre.add(scroll);
    fenetre.show_all();
    Gtk::Main::run(fenetre);
    /*------------------------------Fin Creation window-------------------------------------- */


    return 0;
}

