7.

a) 1 2 3

b) 10 20 30

c) 12 13 25

d) O programa reordena n1, n2 e n3 de forma que eles estejam sempre em ordem crescente.
A lógica deste algoritmo é bem “elegante”, e funciona com trocas. O primeiro if garante
que n2 terá valor menor ou igual a n3. O segundo if compara n1 com este valor. Se n1 <= n2,
sabemos que n2 <= n3, portanto n1 <= n3 e os valores já estão ordenados. Do contrário, trocamos
os valores de n1 e n2, garantindo que o primeiro valor é o menor de todos. Precisamos então comparar
novamente n2 com n3, para verificar se o valor que originalmente estava em n1 e agora está em n2 é
maior que o valor em n3. Para enxergar o funcionamento do algoritmo, use os valores 1, 2 e 3, em
todas as ordens possíveis (são 6 casos).

//solucao Bogdan!
