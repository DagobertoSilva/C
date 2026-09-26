# 🧮 Calculadora em C

> **Status:** 🟡 Em desenvolvimento

Uma calculadora de terminal desenvolvida em C com foco na aplicação de fundamentos de programação, modularização, testes e boas práticas de engenharia de software e versionamento (Git/GitHub).

Este projeto não busca apenas entregar uma calculadora funcional, mas documentar e estruturar todo o ciclo de desenvolvimento de uma aplicação em C, desde um script simples até uma arquitetura modular.

---

## ✨ Funcionalidades

**Implementadas:**
- [x] Menu de navegação interativo.
- [x] Operações matemáticas básicas (Soma, Subtração, Multiplicação, Divisão).
- [x] Validação contra divisão por zero.
- [x] Repetição de operações sem encerrar o programa.

**Planejadas:**
- [ ] Operações avançadas (Potência, Raiz quadrada, Porcentagem).
- [ ] Histórico de operações e limpeza de cache.
- [ ] Tratamento avançado de entradas inválidas.
- [ ] Testes automatizados unitários.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem Principal:** C
- **Compilador:** GCC
- **Versionamento:** Git e GitHub (Commits semânticos, Issues, Pull Requests e Releases)

---

## 🚀 Como Executar

**Pré-requisitos:** É necessário ter um compilador C (como o GCC) instalado em sua máquina.

**1. Clone o repositório:**
```bash
git clone URL_DO_REPOSITORIO
cd calculadora-c
```

**2. Compile o código:**
```bash
gcc src/main.c -o calculadora
```

**3. Execute o programa:**

No Linux / macOS:
```bash
./calculadora
```
No Windows:
```bash
calculadora.exe
```

---

## 📁 Estrutura do Projeto

A arquitetura evoluirá de um arquivo único para uma estrutura modular, separando as responsabilidades de fluxo, entrada de dados e operações matemáticas.

```text
calculadora-c/
├── src/           # Código-fonte principal (.c)
├── include/       # Arquivos de cabeçalho e interfaces (.h)
├── tests/         # Casos de teste e validações
├── docs/          # Documentação técnica e decisões de arquitetura
├── .gitignore     # Arquivos ignorados pelo versionamento
├── README.md      # Apresentação do projeto
└── LICENSE        # Licença de uso
```

---

## 🧪 Estratégia de Testes e Qualidade

O desenvolvimento é guiado por validações contínuas, incluindo:
*   **Casos de uso normais:** Validação de resultados das 4 operações fundamentais.
*   **Casos extremos e erros:** Comportamento do sistema ao receber `10 / 0`, cálculos com números negativos, zeros e entradas não numéricas.
*   **Organização de Código:** Uso de *Semantic Versioning* (MAJOR.MINOR.PATCH) e *Conventional Commits* para rastreabilidade de mudanças.

---

## 👨‍💻 Autor

**Dagoberto Silva**  
Projeto desenvolvido como portfólio prático de estudos em linguagem C e boas práticas de desenvolvimento de software.