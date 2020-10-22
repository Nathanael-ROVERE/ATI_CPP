#include <iostream>

using namespace std;

// fonction prenant en paramètre un entier (int) et renvoyant le produit (int) de ce nombre par ceux qui le précèdent (fonction factorielle)
int prod(int n) {
    int produit = 1; // initialisation d'une variable produit
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        produit *= i; // calcul du produit *
    }
    return produit; // retour de la fonction --> l'entier produit
}

// fonction prenant en paramètre un entier (int) et renvoyant la somme (int) de ce nombre par ceux qui le précèdent 
int somme(int n) {
    int somme = 0; // initialisation d'une variable somme
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        somme += i; // calcul de la somme +
    }
    return somme; // retour de la fonction --> l'entier somme
}

// fonction prenant en paramètre un entier (int n) et renvoyant le produit des n premiers entiers positifs et pairs
int prodp(int n) {
    int produitp = 1;// initialisation d'une variable produitp
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        if ((i>0) && (i%2==0)) { // on ne calcule que pour les entiers positifs et pairs
            produitp *= i; // calcul du produit *
        }
    }
    return produitp; // retour de la fonction --> l'entier produitp
}

// fonction prenant en paramètre un entier (int n) et renvoyant la somme des n premiers entiers positifs et pairs
int sommep(int n) {
    int sommep = 0; // initialisation d'une variable sommep
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        if ((i>0) && (i%2 == 0)) { // on ne calcule que pour les entiers positifs et pairs
            sommep += i;// calcul de la somme +
        }
    }
    return sommep; // retour de la fonction --> l'entier sommep
}

// fonction prenant en paramètre un entier (int n) et renvoyant le produit des n premiers entiers positifs et impairs
int prodi(int n) {
    int produiti = 1; // initialisation d'une variable produiti
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        if ((i>0) && (i%2 != 0)) { // on ne calcule que pour les entiers positifs et impairs
            produiti *= i; // calcul du produit *
        }
    }
    return produiti; // retour de la fonction --> l'entier produiti
}

// fonction prenant en paramètre un entier (int n) et renvoyant la somme des n premiers entiers positifs et impairs
int sommei(int n) {
    int sommei = 0; // initialisation d'une variable sommei
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        if ((i>0) && (i%2 != 0)) { // on ne calcule que pour les entiers positifs et impairs
            sommei += i; // calcul de la somme +
        }
    }
    return sommei;// retour de la fonction --> l'entier sommei
}

// fonction prenant en paramètre deux entier (int x, int n) et renvoyant x puissance n
int puissance(int x, int n) {
    int produit = 1; // initialisation d'une variable produit
    for (int i=1; i<=n; i++) { // parcours des nombres de 1 à n
        produit *= x; // calcul du produit *
    }
    return produit; // retour de la fonction --> l'entier x puissance n
}

// affichage des solutions
int main() {
    cout << "Mon produit est : " << prod(5) << endl;
    cout << "Ma somme est : " << somme(5) << endl;
    cout << "Mon produit de nombres pairs positifs est : " << prodp(5) << endl;
    cout << "Ma somme de nombres pairs positifs est : " << sommep(5) << endl;
    cout << "Mon produit de nombres impairs est : " << prodi(5) << endl;
    cout << "Ma somme de nombres impairs est : " << sommei(5) << endl;
    cout << "5 puissance 3 : " << puissance(5,3) << endl;
}