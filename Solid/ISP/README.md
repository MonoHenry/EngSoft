Interface Segregation Principle

O princípio de Interface Segregation diz que a interface de um programa deve ser separada de um jeito que o usuário/cliente teria acesso apenas aos métodos necessários aos suas demandas.

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/26dc3535-49c6-47b0-93d2-4f39d9daa78e)

Aqui percebemos uma violação desse princípio, a classe Honda não precisa dos método mazda nem do método toyota, e aqui é bom ressaltar a diferença entre o Interface Segregation Principle e  Liskov Substitution Principle, no LSP, a nova interface deve precisar herdar os métodos da classe existente por que há uma necessidade desses métodos que já existem na classe inicial, ou seja, no nosso caso, o carro era incapaz de implementar o método empinar por não ser algo que fosse capaz de fazer, já no caso da classe Marca, podemos implementar todos os métodos, mas eles não são úteis para o propósito da classe, mostrando que não é necessário criar interfaces com diversos métodos, sendo que vários deles serão inutilizados.

![image](https://github.com/MonoHenry/EngSoft/assets/142462239/e28a5fc3-1264-40e7-8c1a-1b8c99722009)

Uma solução possível é esta, agora cada classe implemente apenas aquilo que precisa, a classe Honda não tem o método mazda, e a classe Mazda não tem o método Honda.
