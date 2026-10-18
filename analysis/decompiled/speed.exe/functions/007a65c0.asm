007a65c0  CALL 0x00575b00
007a65c5  TEST AL,AL
007a65c7  JZ 0x007a6638
007a65c9  MOV dword ptr [0x00905ea8],0x89fa88
007a65d3  MOV dword ptr [0x00905eac],0x89fa4c
007a65dd  MOV dword ptr [0x00905eb0],0x89f9d8
007a65e7  MOV dword ptr [0x00905eb4],0x89f8ac
007a65f1  MOV dword ptr [0x00905eb8],0x89f960
007a65fb  MOV dword ptr [0x00905ebc],0x89f934
007a6605  MOV dword ptr [0x00905ec0],0x89f914
007a660f  MOV dword ptr [0x00905ec8],0x89f980
007a6619  MOV dword ptr [0x00905ed0],0x89fa08
007a6623  MOV dword ptr [0x00905ec4],0x89f9b0
007a662d  MOV dword ptr [0x00905ecc],0x89f8ec
007a6637  RET
007a6638  MOV EAX,[0x0091cf90]
007a663d  MOV dword ptr [0x00905ea8],0x89faa8
007a6647  MOV dword ptr [0x00905eac],0x89fa70
007a6651  MOV dword ptr [0x00905eb0],0x89f9f4
007a665b  MOV dword ptr [0x00905eb4],0x89f8d0
007a6665  MOV dword ptr [0x00905eb8],0x89f974
007a666f  MOV dword ptr [0x00905ebc],0x89f948
007a6679  MOV dword ptr [0x00905ec0],0x89f928
007a6683  MOV dword ptr [0x00905ec8],0x89f99c
007a668d  TEST byte ptr [EAX + 0x12c],0x1
007a6694  JNZ 0x007a669f
007a6696  MOV AL,[0x009b9e8d]
007a669b  TEST AL,AL
007a669d  JZ 0x007a66ab
007a669f  MOV dword ptr [0x00905ed0],0x89fa38
007a66a9  JMP 0x007a66b5
007a66ab  MOV dword ptr [0x00905ed0],0x89fa24
007a66b5  MOV dword ptr [0x00905ec4],0x89f9c8
007a66bf  MOV dword ptr [0x00905ecc],0x89f904
007a66c9  RET
