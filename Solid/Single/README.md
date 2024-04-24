Single Responsibility Principle

Esse príncipio pode ser entendido por cada classe, função ou módulo deve ter apenas uma responsabilididade/propósito no programa, a frase que resume esse princípio é ""Uma classe deve ter um, e somente um, motivo para mudar.


![image](https://github.com/MonoHenry/apsCode/assets/142462239/2346a6df-3e63-4f8a-81f6-7a1befbc709b)

Nesse exemplo, percebemos que a SRP está sendo violada, pois a classe carro faz coisas que não deveriam ser de sua responsabilidade, como ligar para o mecânico e calcular o IPVA.

![image](https://github.com/MonoHenry/apsCode/assets/142462239/077c5acd-5325-41c2-a743-add85968051a)

Já nesse caso, percebemos que a classe de Carro mexe apenas com a função de ligar o carro, a classe de LigarMecanicoé usada para ligar para o mecânico, e a classe CalcIPVA é usada para calculaor IPVA, dando assim um único próposito para a classe (isso não significa que uma classe deva ter apenas uma função, mas que elas devem ser de um mesmo escopo, por exemplo, a classe Carro poderia ter a função de desligar, ou acelerar, e isso não violaria o princípio de responsabilidade única.
