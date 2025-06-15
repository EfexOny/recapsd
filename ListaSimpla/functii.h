#pragma once

/*

-Lista simpla inlantuita /circulara 

    Singura diferenta intre cea simpla si circulara este ca , la circulara nu faci verificari de NULL, faci verificari 
    ca elementul curent sa nu fie acelasi ca si capul, cap pe care il retii de la inceput ca fiind primul element
    astfel ai aceeasi structura pentru ambele

*/


struct lista{

    int data;
    lista *urm;

};
// inlantuita
void si_insert(lista *&l,int data,int where);
void si_afisare(lista *l);
void si_stergere(lista *&l,int data);
// circulara
void sc_insert(lista *&l,int data);
void sc_afisare(lista *l);
void sc_stergere(lista *&l,int data);


// 
