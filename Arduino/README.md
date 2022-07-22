# Projeto: Magic Arduino
Com ideia semelhante ao Magic 8 Ball, você faz uma pergunta para o Magic Arduino, e para receber sua resposta, aponte uma lanterna para os fotoresistores na protoboard! A resposta escolhida pelo Magic Arduino será gerada aleatoriamente pelo programa e indicada pela placa a ser levantada, podendo a resposta ser sim ou não.

Os componentes utilizados na estrutura final do projeto foram:

| Quantidade  | Componente |
| ------------------- | ------------------- |
|  1|  Arduino UNO  |
|  1|  LED Difuso 5mm Azul  |
|  2|  Resistor 220 &Omega;  |
|  2|  Servo Motor SG90  |
|  2|  Fotoresistor LDR 5 mm  |

## Laser Tag
A priori, o projeto se tratava de um jogo laser tag, que consistia em levantar placas com um fotoresistor acoplado em cada uma, de forma que a placa levantada seria baixada ao receber luz de um laser pointer e a pontuação do jogador seria atualizada no programa, podendo ser vista pelo computador que serviria de fonte para o arduino. O circuito para o jogo pode ser verificado na imagem abaixo:

![laser-tag](https://user-images.githubusercontent.com/49030518/180500491-9c591c44-f0b7-432c-a378-38d189dc2b7d.png)

No entanto, apesar da simulação do jogo funcionar perfeitamente, utilizando o código do arquivo laser_tag.ino, ao montar o circuito fisicamente, já não se obtia um resultado minimamente razoável. De fato, dependendo da placa a ser levantada (escolhida aleatoriamente no programa), o servo motor correspondente não realizava o movimento, apesar do fotoresistor indicar ao computador a diferença de corrente devido à luminosidade. Após reduzir o circuito e testar diretamente cada servo motor, pudemos concluir que o problema com o circuito seria por mal contato nos conectores de alguns dos motores. Nesse caso optamos por simplificar o projeto retirando o motor que apresentava mais problemas de mal contato e mantendo os dois que funcionavam bem, ficando com apenas dois alvos para o jogo.

Contudo, outro fator dificultante acabou surgindo no decorrer da construção do circuito simplificado: os fotoresistores apresentavam alguns problemas de mal contato com os fios caso os colocássemos para se moverem com os alvos. Em função disso, resolvemos mudar um pouco a natureza do projeto, mas manter o circuito, chegando à forma final do projeto: o Magic Arduino.

## Magic Arduino
O projeto consiste em duas placas (a de "sim" e a de "não"), que são comandadas por servo motores. Elas levantam ao iluminar os fotoresistores do circuito, que altera a resistência destes e, consequentemente, a corrente que chega à entrada correspondente no Arduino. Os dois fotoresistores utilizados são dispostos um ao lado do outro, pois o programa utilizado com a placa recebe a corrente que passa por um deles, escolhido aleatoriamente. Dessa forma, ao iluminar ambos com uma lanterna comum, obtém-se o restultado. O circuito e o esquemático podem ser verificados nas imagens abaixo:

![Grand Kup](https://user-images.githubusercontent.com/63194069/180074680-c0cee6b9-4fec-4b89-a5a4-38c3d392d31e.png)

![Screenshot from 2022-07-22 17-20-26](https://user-images.githubusercontent.com/49030518/180529704-318abb9d-9f8b-4da5-88b6-b0c83aadfdbf.png)

Fazendo uma pergunta, cuja resposta seja "sim" ou "não", o programa dará uma resposta aleatória.

## Fotos do Circuito
![WhatsApp Image 2022-07-20 at 17 27 37(2)](https://user-images.githubusercontent.com/49030518/180075670-37d31d9f-d89d-450a-931a-73710a37061f.jpeg)

![WhatsApp Image 2022-07-20 at 17 27 37](https://user-images.githubusercontent.com/49030518/180075502-b3a4d61c-7e6b-4f31-978b-19cdbeeb5ac9.jpeg)

![WhatsApp Image 2022-07-20 at 17 27 36](https://user-images.githubusercontent.com/49030518/180075507-b5bb4d71-d2a7-428d-98cd-5906ad4ba473.jpeg)

## Link do video
https://user-images.githubusercontent.com/63194069/180514415-2b13fe7f-701b-44e0-97ba-76d92f7d37af.mp4

Link no Youtube: https://youtu.be/C7lmB2ZPCpg


