#include <iostream>
using namespace std;

unsigned char proximoEstado(unsigned char estado, unsigned char Ncar, unsigned char Ecar, unsigned char Scar, unsigned char Wcar) {
    //! Ngreen = 00, Egreen = 01, Sgreen = 10, Wgreen = 11
    unsigned char b0 = estado & 1;         
    unsigned char b1 = (estado >> 1) & 1;  

    //! Máscaras de qual estado está ativo
    unsigned char Ngreen = (~b1) & (~b0);
    unsigned char Egreen = (~b1) & b0;
    unsigned char Sgreen = b1 & (~b0);
    unsigned char Wgreen = b1 & b0;

    //! Prioridade no sentido horário (N → E → S → W → N)
    //! Calcula qual será o próximo estado usando lógica binária
    unsigned char proxN = (Wgreen & Ncar & (~Ecar) & (~Scar)) | (Ngreen & (~Ecar) & (~Scar) & (~Wcar)) | (Ncar & (~Scar) & (~Ecar) & (~Wcar));
    unsigned char proxE = (Ngreen & Ecar) | (Egreen & (~Scar) & (~Wcar) & (~Ncar)) | (Ecar & (~Ncar) & (~Scar) & (~Wcar));
    unsigned char proxS = (Egreen & Scar) | (Sgreen & (~Wcar) & (~Ncar) & (~Ecar)) | (Scar & (~Ncar) & (~Ecar) & (~Wcar));
    unsigned char proxW = (Sgreen & Wcar) | (Wgreen & (~Ncar) & (~Ecar) & (~Scar)) | (Wcar & (~Ncar) & (~Ecar) & (~Scar));

    //! Codificação dos estados (2 bits):
    unsigned char bit1 = (proxS | proxW) & 1;
    unsigned char bit0 = (proxE | proxW) & 1;
    unsigned char novoEstado = (bit1 << 1) | bit0;

    return novoEstado;
}

void mostrarEstado(unsigned char estado) {
    cout << "Estado atual: ";
    if ((estado & 0b11) == 0b00){
        cout << "00 (Nlite)" << endl;
    } 
    if ((estado & 0b11) == 0b01){
        cout << "01 (Elite)" << endl;
    }
    if ((estado & 0b11) == 0b10){
        cout << "10 (Slite)" << endl;
    }
    if ((estado & 0b11) == 0b11){
        cout << "11 (Wlite)" << endl;
    }
}

int main() {
    unsigned char estado, Ncar, Ecar, Scar, Wcar;
    unsigned int temp;

    cout << "Digite o estado atual (00=N, 01=E, 10=S, 11=W): ";
    cin >> temp;
    estado = (unsigned int)temp;

    if (estado == 0b00){
        cout << "Semaforo verde atual: Nlite" << endl;
    }
    if (estado == 0b01){
        cout << "Semaforo verde atual: Elite" << endl;
    }
    if (estado == 0b10){
        cout << "Semaforo verde atual: Slite" << endl;
    }
    if (estado == 0b11){
        cout << "Semaforo verde atual: Wlite" << endl;
    }

    cout << "Ncar: ";
    cin >> temp;
    Ncar = temp & 1;
    
    cout << "Ecar: "; 
    cin >> temp;
    Ecar = temp & 1;

    cout << "Scar: ";  
    cin >> temp;
    Scar = temp & 1;
    
    cout << "Wcar: ";  
    cin >> temp;
    Wcar = temp & 1;

    unsigned char prox = proximoEstado(estado, Ncar, Ecar, Scar, Wcar);
    mostrarEstado(prox);

    return 0;
}
