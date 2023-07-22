#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class municao
{
private:
int carga;
int projetil =5;
int cartucho = 5;
int polvora;
int qtd_municao;
    
public:
    void setCarga(int carga);
    //void setProjetil(int projetil);
    //void setCartucho(int cartucho);
    void setPolvora(int polvora);
    void setMunicao(int qtd_municao);
    void calculo();
};
void municao::setCarga(int value) {
    carga = value;
}

/*void municao::setProjetil(int value) {
    projetil = value;
}*/

/*void municao::setCartucho(int value) {
    cartucho = value;
}*/

void municao::setPolvora(int value) {
    polvora = value;
}
void municao::setMunicao(int value) {
    qtd_municao = value;
}
void municao::calculo(){
int qtd_municao;
int op;
int calc;
int carga;
int polvora_1 =25;
int polvora_2 =17;
int polvora_3 =25;
    do
    {
        cout << "1-Municao de Pistola: " << endl;
        cout << "2-Municao de SMG: " << endl;
        cout << "3-Municao de Fuzil: " << endl;
        cin >> op;
    } while (op <1 || op >3);
    switch (op)
    {
    case 1:
        cout << "Digite qtd de municao: ";
        cin >>  qtd_municao;
        calc= (cartucho * qtd_municao)/10;
        cout << "Precisa de " << calc << "Cartuchos" << endl;
        carga =calc;
        //cout << "Digite qtd de polvoras: ";
       // cin >> polvora;
        calc= (polvora_1 * qtd_municao)/10;
        cout << "Precisa de " <<  calc << "Polvoras" << endl;
        cout << "Precisa de " << carga << "cargas" << endl;
        //cout << "Digite a qtd de PROJETIL: ";
        //cin >> projetil;
        calc= ((projetil*qtd_municao)/10);
        cout << "Precisa de " << calc << "Projeteis" << endl;
        break;
    case 2:
        cout << "Digite qtd de municao: ";
        cin >>  qtd_municao;
        calc= (cartucho * qtd_municao)/10;
        cout << "Precisa de " << calc << "Cartuchos" << endl;
        carga =calc;
        //cout << "Digite qtd de polvoras: ";
       // cin >>polvora;
        calc= (polvora_2 * qtd_municao)/10;
        cout << "Precisa de " <<  calc << "Polvoras" << endl;
        //cout << "Digite a qtd de PROJETIL: ";
        //cin >> projetil;
        calc= ((projetil*qtd_municao)/10);
        cout << "Precisa de " << calc << "Projeteis" << endl;
        break;
    case 3:
        cout << "Digite qtd de municao: ";
        cin >>  qtd_municao;
        calc= (cartucho * qtd_municao)/10;
        cout << "Precisa de " << calc << "Cartuchos" << endl;
        carga =calc;
        //cout << "Digite qtd de polvoras: ";
        //cin >> polvora;
        calc= (polvora_3 * qtd_municao)/10;
        cout << "Precisa de " <<  calc << "Polvoras" << endl;
        //cout << "Digite a qtd de PROJETIL: ";
        //cin >> projetil;
        calc= ((projetil*qtd_municao)/10);
        cout << "Precisa de " << calc << "Projeteis" << endl;
        break;
    default:
        break;
    }

   /* cout << "Digite qtd de polvora: ";
    cin >> polvora;
        if (polvora == 25 )
        {
            cout << "MUNICAO DE PISTOLA DETECTADA..." << endl;
            cout "Digite qtd de cartucho: ";
            cin >> cartucho;
            cout << "TOTAL DE "
            cout "Digite qtd de "

        }*/
}


void desmanche(){
int op;
int vcarro;
int vcarro2;
    cout << "TABELA DE PREÇO DESMANCHE" << endl;
    cout << "SEM PARCERIA 30% (MEMBRO) 70% CLIENTE" << endl;
    cout << "COM PARCERIA 20% (MEMBRO) 80% CLIENTE" << endl;
    do
    {
        cout << "Menu" << endl;
        cout << "1-com parceria" << endl;
        cout << "2-sem parceria" << endl;
        cout << "sua escolha: ";
        cin >> op;
    } while (op <1 || op >2);
    
        switch (op)
        {
        case 1:
            cout << "valor: ";
            cin >> vcarro;
            vcarro2 = vcarro * 0.70;
            vcarro = (vcarro2 - vcarro) * -1;
            cout << "Valor total do Cliente: " << "R$ "<< vcarro2 << endl;
            cout << "Valor total do Membro: " << "R$ "<< vcarro << endl; 
        break;
        case 2:
            cout << "valor: ";
            cin >> vcarro;
            vcarro2 = vcarro * 0.80;
            vcarro = (vcarro2 - vcarro) * -1;
            cout << "Valor total do Cliente: " << vcarro2 << endl;
            cout << "Valor total do Membro: " << vcarro << endl; 
        break;
        }
}

int main() {
municao MUNI;   
    while (1)
    {
        int opcao;
        do
        {
        cout << "1-Calcular valor do desmanche" << endl;
        cout << "2-Calcular quantidade de recursos para fazer municao" << endl;
        cout << "3-Calcular a venda da municao na fac (off)" << endl;
        cout << "4-Sair" << endl;
        cin >> opcao;
        } while (opcao < 1 || opcao > 4);
        switch (opcao)
        {
        case 1:
            desmanche();
            break;
        case 2:
            MUNI.calculo();
            break;
        case 3:
            
            break;
        case 4:
            return 0;
            break;
        default:
            break;
        }
    }
    
}
