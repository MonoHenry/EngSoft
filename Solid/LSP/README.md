Liskov Substitution Principle

O princípio de Liskov diz "Se q(x) é uma propriedade demonstrável dos objetos x de tipo T. Então q(y) deve ser verdadeiro para objetos y de tipo S onde S é um subtipo de T".
Isso soa bem confuso, mas explicando de uma forma simples, uma subclasse deve possuir apenas os métodos que serão usados por suas subclasses.

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/e559acff-f9d6-40a3-b500-8b8f78393f4e)


Aqui percebemos que a classe Moto implementa todos os métodos da classe Automóvel, seguindo o princípio de Liskov, porém e se tentarmos implementar uma classe chamada Carro?

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/4172b4c1-0268-4153-b62f-2ca8007aaa0b)


Aqui encontramos um problema, a função empinar não da pra ser implementada na classe carro, ferindo o princípio de Liskov.

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/30bb32c9-a23d-4a6c-b274-c7ba39c612a7)

Esta seria uma solução para resolver esse problema, automóveis com mais de duas rodas extendem a classe AutomovelMais2Rodas, então por exemplo, aqui foi implementado a classe Carro, mas a classe Caminhão, Carreta, Bi-Trem todas poderiam ser implementedas a partir dessa classe sem ferir o princípio de Liskov, e ao mesmo tempo, a classe Moto pôde ser implementada usando a classe Automovel2Rodas, fazendo uso de todos os métodos dentro da entidade inicial.

