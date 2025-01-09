

# Calculadora FLTK

Uma calculadora simples desenvolvida em C++ utilizando a biblioteca FLTK (Fast Light Toolkit). Este projeto serve como um estudo inicial para criar interfaces gráficas com FLTK.

---

## 📋 Funcionalidades

Botões Numéricos: De 0 a 9.

Operações Matemáticas: Adição (+), Subtração (-), Multiplicação (×), e Divisão (÷).

Exibição de Resultado: Um campo de entrada para exibir os números digitados e o resultado da operação.

Botão "=": Calcula e exibe o resultado da operação.

---

## 💻 Pré-requisitos

Antes de começar, certifique-se de ter os seguintes componentes instalados:

C++ Compiler (GCC ou Clang)

FLTK Library (Fast Light Toolkit)

CMake (opcional, mas recomendado para gerenciamento do build)


Instalação da FLTK

No Linux (Debian/Ubuntu):
``` bash
sudo apt update
sudo apt install libfltk1.3-dev
```

No Arch Linux:

```bash
sudo pacman -S fltk
```

No Windows:

Faça o download da FLTK e siga as instruções de instalação no site oficial.

---

## 🚀 Compilação e Execução

Usando CMake (Recomendado)

1. Clone este repositório:
```bash
git clone git@github.com:randolfo-15/Calculadora-FLTK.git
cd Calculadora-FLTK
```

1. Crie a pasta de build e compile:

```bash
mkdir build
cd build
cmake ..
make
```


3. Execute o programa:
```bash
./calculadora-fltk
```

Compilação Manual (Sem CMake)

Se preferir compilar diretamente, use o seguinte comando:

```bash
g++ -o calculadora main.cpp -lfltk
./calculadora
```

---

🛠️ Próximos Passos

Melhorar a interface com um layout mais organizado.

Adicionar suporte para teclado numérico.

Implementar botão de limpar (C) para resetar o campo de entrada.

Adicionar suporte a parênteses e operações mais avançadas.



---

🤝 Contribuição

Sinta-se à vontade para contribuir com o projeto! Abra um Pull Request ou registre um Issue no repositório.


---

📜 Licença

Este projeto é licenciado sob a MIT License.


---

📞 Contato (31) 9 9239-0399

Criado por Randolfo A Gonçalves

GitHub: randolfo15

Email: ragnifico@yahoo.com.br

---
