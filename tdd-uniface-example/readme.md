# TDD com Uniface e C (3GL Integration)

Este projeto demonstra um exemplo simples de **Test-Driven Development (TDD)** utilizando integração entre **Uniface ProcScript** e **código C (3GL)**.

## Exemplo

Função implementada em C:


### Fluxo TDD

1. Escrever teste em ProcScript (RED)
2. Implementar função em C (GREEN)
3. Refatorar código (REFACTOR)

## Compilar

Linux: gcc -shared -fPIC math_ops.c -o math_ops.so


## Estrutura
math_ops.c -> implementação C
test_uniface.proc -> teste ProcScript
ide.asn -> configuração Uniface

## Fluxo 

Uniface → activate → biblioteca C → resultado