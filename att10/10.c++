| Cenário                                | Estrutura | Justificativa                                                                                                     |
| -------------------------------------- | --------- | ----------------------------------------------------------------------------------------------------------------- |
| **A — Registro do navegador**          | **Pilha** | O endereço visitado por último é o primeiro removido ao usar o comando "voltar".                                 |
| **B — Usuários aguardando atendimento**| **Fila**  | A primeira pessoa que chega deve ser a primeira atendida, conforme a regra FIFO.                                  |
| **C — Relação de produtos**            | **Lista** | Os itens podem ser guardados e consultados individualmente, sem uma ordem LIFO ou FIFO obrigatória.             |
| **D — Comando desfazer (Ctrl+Z)**      | **Pilha** | A ação mais recente deve ser a primeira a ser desfeita.                                                           |
| **E — Lista de músicas por posição**   | **Lista** | As músicas podem ser encontradas diretamente usando suas posições ou índices.                                    |
