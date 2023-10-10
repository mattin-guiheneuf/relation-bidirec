/**
 * @file Individu.h
 * @author Lopisteguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2023-10-10
 * 
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe définit un Individu par un nom, un prénom et évenetuellement une Voiture qu'il conduit
 * 
 * @details Au dela de représenter un Individu par son nom et son prénom, la classe Individu permet également
 *          de renseigner la voiture qu'il conduit.
 * 
 * La voiture associée à l'Individu est représentée par un pointeur vers un objetc Voiture qui peut être à null 
 * si l'Individu en possède pas de voiture.
 * 
 * @warning Un Individu ne peut être associé qu'à au plus une Voiture
 */

class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief // Le nom de l'individu
     * 
     */
    string nom;      

    /**
     * @brief // Le prénom de l'individu
     * 
     */
    string prenom;      

    /**
     * @brief // Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu à partir de son nom (1er param) et son prénom (2eme param)
     * 
     */
    Individu(string = "", string = "");
    
    /**
     * @brief Détruit un objet Individu
     * 
     */
    ~Individu();

    /**
     * @brief // Affiche l'identité de l'Individu
     * 
     * @return string sous la forme nom prénom
     * 
     * @bug Un espace en trop entre nom et prénom
     */
    string toString();        
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit la Voiture conduite par l'Individu
     * 
     * @param [in] voiture pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H