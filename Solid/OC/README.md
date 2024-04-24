Open-Closed Principle

O princípio Open-Closed fiz que uma entidade de software deve estar aberta para extensão mas fechada para modificação.
Isso implica que classes, funções, entre outros, devem ser criadas para que suas funcionalidades centrais possam ser extendidas para outras entidades sem alterar o código da entidade inicial.

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/bdd9fafb-95a0-4e2d-aeaa-b844d445a7ab)


Nesse exemplo (do que não se deve fazer), percebemos que a classe CalcularCavalariaPorPeso deve ser constantemente modificada para cada novo carro que se deseja calcular, se por algum motivo eu precisar calcular a cavalaria por peso de um Corolla, seria necessário criar uma outra função dentro dessa classe implementando essa funcionalidade, ou seja, eu modificaria o código da entidade inicial.

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/b677c8c1-f8ec-4682-b00f-668de0b444eb)

Já aqui, do jeito correto, criamos uma classe com uma função, e depois criamos outras classes que implementam essa mesma função, dessa forma, extendemos a funcionalidade da classe original, mas não mexemos no seu código.

