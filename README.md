#🚥 Projeto: Sistema de Semáforos Sincronizados

Este projeto envolve um sistema de gerenciamento de tráfego criado com **Arduino**. A finalidade é controlar de maneira segura e automática a interseção entre veículos e pedestres.

## 🚀 Como Funciona?
O código gerencia um total de **4 semáforos**:
* **2 Semáforos para Veículos**
* **2 Semáforos para Pedestres**

### 🚦 Lógica de Operação:
Para assegurar que ninguém se machuque no cruzamento, o sistema opera de maneira alternada e simultânea:

1.  **Sincronização Carro/Pedestre:** * Sempre que o semáforo do carro está **Vermelho**, o de pedestre correspondente fica **Verde**.
    * Se o semáforo do carro muda para **Verde**, o de pedestre fica automaticamente **Vermelho**.
2.  **Alternância de Via:**
    * Enquanto o Semáforo de Carro 1 permite a passagem, o Semáforo de Carro 2 bloqueia, e vice-versa.
## 💻 Ambiente de Simulação
Este projeto foi desenvolvido e testado de forma virtual, sem a necessidade de componentes físicos no momento.

* **Software:** [SimulIDE](https://www.simulide.com/)
* **Placa Simulada:** Arduino Uno
* **Componentes Virtuais:** * LEDs para sinalização de tráfego.
  * Resistores virtuais.
  * Painel de conexões do simulador.

---
*Projeto desenvolvido para fins de estudo sobre lógica de programação e eletrônica.*
