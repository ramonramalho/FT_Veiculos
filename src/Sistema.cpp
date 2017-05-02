/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
 */

#include <string>
#include <vector>
#include <iostream>

#include "Sistema.h"
#include "Concessionaria.h"
#include "ItemVenda.h"
#include "Automovel.h"
#include "Motor.h"
#include "Cambio.h"
#include "Cor.h"
#include "Menu.h"
#include "ConcessionariaModerna.h"
#include "Direcao.h"
#include "Roda.h"
#include "Sonorizacao.h"

using namespace std;

Sistema::Sistema(ConcessionariaModerna * cliente) {
    this->cliente = cliente;
    boasVindas();
    carregarEstoque();
    orcamento.clear();
};

Sistema::~Sistema() {
    vector<ItemVenda *>::iterator varre;

    orcamento.clear(); // nao usar delete nos itens, pois sao so copias!!!

    varre = carros.begin();
    while (varre != carros.end()) {
        delete(*varre++);
    };
    carros.clear();

    varre = motores.begin();
    while (varre != motores.end()) {
        delete(*varre++);
    };
    motores.clear();

    varre = cambios.begin();
    while (varre != cambios.end()) {
        delete(*varre++);
    };
    cambios.clear();

    varre = cores.begin();
    while (varre != cores.end()) {
        delete(*varre++);
    };
    cores.clear();

    varre = direcao.begin();
    while (varre != direcao.end()) {
        delete(*varre++);
    };
    direcao.clear();

    varre = roda.begin();
    while (varre != direcao.end()) {
        delete(*varre++);
    };
    roda.clear();

    varre = sonorizacao.begin();
    while (varre != sonorizacao.end()) {
        delete(*varre++);
    };
    sonorizacao.clear();
};

void Sistema::boasVindas() {
    cout << endl << endl;
    cout << "******************************" << endl;
    cout << cliente->getNome() << endl;
    cout << cliente->getEndereco() << endl;
    cout << cliente->getCidade() << "/" << cliente->getEstado() << endl;
    cout << cliente->getFone() << endl;
    cout << cliente->getSite() << endl;
    cout << cliente->getFacebook() << endl;
    cout << cliente->getTweeter() << endl;
    cout << cliente->getWhatsapp() << endl;
    cout << "******************************" << endl << endl;
};

void Sistema::carregarEstoque() {
    carros.clear();
    carros.insert(carros.end(), new Automovel("GM", "Cruze Sedan", 2015, 107000.00));
    carros.insert(carros.end(), new Automovel("GM", "Cruze Hatch", 2015, 75000.00));
    carros.insert(carros.end(), new Automovel("GM", "Prisma Sedan", 2015, 65000.00));
    carros.insert(carros.end(), new Automovel("GM", "Onix Hatch", 2015, 40000.00));
    carros.insert(carros.end(), new Automovel("GM", "Celta Hatch", 2015, 30000.00));

    motores.clear();
    motores.insert(motores.end(), new Motor(1.8, 16, "gasolina", 3300.00));
    motores.insert(motores.end(), new Motor(1.8, 16, "flex", 3500.00));
    motores.insert(motores.end(), new Motor(1.8, 8, "flex", 3000.00));
    motores.insert(motores.end(), new Motor(1.6, 16, "flex", 2800.00));
    motores.insert(motores.end(), new Motor(1.6, 8, "flex", 2300.00));
    motores.insert(motores.end(), new Motor(1.4, 16, "flex", 2600.00));
    motores.insert(motores.end(), new Motor(1.4, 8, "flex", 2000.00));
    motores.insert(motores.end(), new Motor(1.0, 16, "flex", 2400.00));
    motores.insert(motores.end(), new Motor(1.0, 8, "flex", 0.00));

    cambios.clear();
    cambios.insert(cambios.end(), new Cambio("Automatico", 7, 7500.0));
    cambios.insert(cambios.end(), new Cambio("Automatico", 6, 4500.0));
    cambios.insert(cambios.end(), new Cambio("Automatico", 5, 4000.0));
    cambios.insert(cambios.end(), new Cambio("Manual", 6, 2500.0));
    cambios.insert(cambios.end(), new Cambio("Manual", 5, 0.0));


    cores.clear();
    cores.insert(cores.end(), new Cor("Vermelho", false, 200.0));
    cores.insert(cores.end(), new Cor("Preto", false, 200.0));
    cores.insert(cores.end(), new Cor("Azul", false, 100.0));
    cores.insert(cores.end(), new Cor("Prata", true, 350.0));
    cores.insert(cores.end(), new Cor("Cinza", true, 250.0));
    cores.insert(cores.end(), new Cor("Vermelho", true, 450.0));
    cores.insert(cores.end(), new Cor("Azul", true, 250.0));
    cores.insert(cores.end(), new Cor("Branco", false, 0.0));

    direcao.clear();
    direcao.insert(direcao.end(), new Direcao("Direcao Hidraulica", 1050.50));
    direcao.insert(direcao.end(), new Direcao("Direcao Eletrica", 1550.50));
    direcao.insert(direcao.end(), new Direcao("Direcao Mecanica", 0.0));

    roda.clear();
    roda.insert(roda.end(), new Roda("17x7,0", "Noova", 394.90));
    roda.insert(roda.end(), new Roda("17x7,0", "Socorro", 423.90));
    roda.insert(roda.end(), new Roda("18x6,0", "Volcano", 549.90));
    roda.insert(roda.end(), new Roda("20x8,5", "Black rhino", 867.90));
    roda.insert(roda.end(), new Roda("13x5,0", "Ferraro", 0.0));

    sonorizacao.clear();
    sonorizacao.insert(sonorizacao.end(), new Sonorizacao("Som Automotivo", "Pionner", 279.90));
    sonorizacao.insert(sonorizacao.end(), new Sonorizacao("DVD player", "Lenoxx", 399.90));
    sonorizacao.insert(sonorizacao.end(), new Sonorizacao("DVD player", "Pionner", 799.90));
    sonorizacao.insert(sonorizacao.end(), new Sonorizacao("Central Multimidia", "Toyota", 1279.90));
    sonorizacao.insert(sonorizacao.end(), new Sonorizacao("Som embutido no painel", "", 2000.90));
    sonorizacao.insert(sonorizacao.end(), new Sonorizacao("Sem som", "", 0.0));

};

void Sistema::processa() {
    vector<string> opcoes({"Sair do Sistema", "Iniciar Venda", "Imprimir Orcamento"});
    Menu menu("Menu Principal", opcoes);
    int escolha = -1;

    while (escolha) {
        escolha = menu.getEscolha();

        switch (escolha) {
            case 1:
            {
                iniciarVenda();
            };
                break;
            case 2:
            {
                imprimirOrcto();
            };
                break;
        };
    };
};

void Sistema::iniciarVenda() {
    orcamento.clear();
    cout << "------------------------------\nNOVA VENDA\n------------------------------\n";

    orcamento.insert(orcamento.end(), escolheAutomovel());
    listarConfiguracao();
    orcamento.insert(orcamento.end(), escolheMotor());
    listarConfiguracao();
    orcamento.insert(orcamento.end(), escolheCambio());
    listarConfiguracao();
    orcamento.insert(orcamento.end(), escolheCor());
    listarConfiguracao();
    orcamento.insert(orcamento.end(), escolheDirecao());
    listarConfiguracao();
    orcamento.insert(orcamento.end(), escolheRoda());
    listarConfiguracao();
    orcamento.insert(orcamento.end(), escolheSom());
    listarConfiguracao();

    cout << "------------------------------\nCONFIGURACAO COMPLETADA\n------------------------------\n";
};

void Sistema::listarConfiguracao() {
    cout << "------------------------------\nConfiguracao escolhida:\n------------------------------\n";

    vector<ItemVenda *>::iterator varre = orcamento.begin();

    while (varre != orcamento.end()) {
        cout << "  @ " << (*varre)->getDescricao() << "\n\tR$ " << (*varre)->getValor() << endl;
        varre++;
    };
};

ItemVenda * Sistema::escolheAutomovel() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = carros.begin();

    while (varre != carros.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Modelos disponiveis", opcoes);

    return (carros.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheDirecao() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = direcao.begin();

    while (varre != direcao.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Modelos disponiveis", opcoes);

    return (direcao.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheRoda() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = roda.begin();

    while (varre != roda.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Modelos disponiveis", opcoes);

    return (roda.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheMotor() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = motores.begin();

    while (varre != motores.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Motorizacoes disponiveis", opcoes);

    return (motores.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheCambio() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = cambios.begin();

    while (varre != cambios.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Cambios disponiveis", opcoes);

    return (cambios.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheCor() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = cores.begin();

    while (varre != cores.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Cores disponiveis", opcoes);

    return (cores.at(menu.getEscolha()));
};

ItemVenda * Sistema::escolheSom() {
    vector<string> opcoes;
    vector<ItemVenda *>::iterator varre = sonorizacao.begin();

    while (varre != sonorizacao.end()) {
        opcoes.push_back((*varre)->getDescricao() + " por R$ " + to_string((*varre)->getValor()));
        varre++;
    };
    Menu menu("Cores disponiveis", opcoes);

    return (sonorizacao.at(menu.getEscolha()));
};

void Sistema::imprimirOrcto() {
    // a fazer

    // FAZER BEM FEITO, COM BOA FORMATACAO DA INTERFACE DE USUARIO
    vector<ItemVenda *>::iterator varre = orcamento.begin();
    if (varre != orcamento.end()) {
        double total;

        cout << endl << endl;
        cout << "******************************" << endl;
        cout << "Concessionaria: " << cliente->getNome() << endl;
        cout << "Endereço: " << cliente->getEndereco() << " ";
        cout << cliente->getCidade() << "/" << cliente->getEstado() << endl;
        cout << "Telefone: " << cliente->getFone() << endl;
        cout << "Site: " << cliente->getSite() << endl;
        cout << "Facebook: " << cliente->getFacebook() << endl;
        cout << "Tweeter: " << cliente->getTweeter() << endl;
        cout << "Whatsapp: " << cliente->getWhatsapp() << endl;

        cout << "Produto escolhido" << endl;
        while (varre != orcamento.end()) {
            cout << "  @ " << (*varre)->getDescricao() << " \tR$ " << (*varre)->getValor() << endl;
            total += (*varre)->getValor();
            varre++;
        };
        cout << "Total: " << total << endl;
        cout << "******************************" << endl << endl;
    } else {
        cout << "Nenhum orçamento encontrado" << endl;
    }


    cout << "Pressione enter para voltar ao Menu";
    getchar();
};

/* fim de arquivo */