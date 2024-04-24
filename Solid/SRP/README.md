Single Responsibility Principle

Esse príncipio pode ser entendido por cada classe, função ou módulo deve ter apenas uma responsabilididade/propósito no programa, a frase que resume esse princípio é "Uma classe deve ter um, e somente um, motivo para mudar".

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/c717b28c-c751-4b6d-9db8-5dd0f8652790)

Nesse exemplo, percebemos que a SRP está sendo violada, pois a classe carro faz coisas que não deveriam ser de sua responsabilidade, como ligar para o mecânico e calcular o IPVA.

![image](https://github.com/MonoHenry/apsCode/assets/142462239/077c5acd-5325-41c2-a743-add85968051a)

Já nesse caso, percebemos que a classe de Carro mexe apenas com a função de ligar o carro, a classe de LigarMecanico é usada para ligar para o mecânico, e a classe CalcIPVA é usada para calcular o IPVA, dando assim um único próposito para a classe (isso não significa que uma classe deva ter apenas uma função, mas que elas devem ser de um mesmo escopo, por exemplo, a classe Carro poderia ter a função de desligar, ou acelerar, e isso não violaria o princípio de responsabilidade única).
