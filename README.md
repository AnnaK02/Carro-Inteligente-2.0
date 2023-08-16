# Carro-Inteligente-2.0

Este repositório é destinado ao Projeto Carro Inteligente 2.0, elaborado para a disciplina Internet das Coisas II. Trata-se da segunda versão para o Projeto Carro Inteligente (https://github.com/AnnaK02/Projeto-Carro-Inteligente), essa voltada para fins de detecção de riscos em áreas inacessíveis ao ser humano.

Nesta nova versão, o protótipo percorre uma rota enviada pelo usuário via aplicativo e, ao longo do percurso, retorna registros de temperatura, umidade e existência (ou não) de gás na área coberta.

A programação foi feita em C++ utilizando a interface Arduino IDE e o microcontrolador implantado foi o ESP Wemos D1 R32. A comunicação com o carro (envio de rotas e recebimento de dados coletados em tempo real) é feito via Protocolo MQTT.
