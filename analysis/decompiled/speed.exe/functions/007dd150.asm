007dd150  PUSH EBP
007dd151  MOV EBP,ESP
007dd153  PUSH ECX
007dd154  MOV EAX,dword ptr [EBP + 0xc]
007dd157  MOV dword ptr [EBP + -0x4],EAX
007dd15a  MOV ECX,dword ptr [EBP + -0x4]
007dd15d  MOV EDX,dword ptr [ECX + 0x4]
007dd160  CMP EDX,dword ptr [EBP + 0x8]
007dd163  JZ 0x007dd181
007dd165  MOV EAX,dword ptr [EBP + -0x4]
007dd168  ADD EAX,0xc
007dd16b  MOV dword ptr [EBP + -0x4],EAX
007dd16e  MOV ECX,dword ptr [0x00906804]
007dd174  IMUL ECX,ECX,0xc
007dd177  ADD ECX,dword ptr [EBP + 0xc]
007dd17a  CMP dword ptr [EBP + -0x4],ECX
007dd17d  JNC 0x007dd181
007dd17f  JMP 0x007dd15a
007dd181  MOV EDX,dword ptr [0x00906804]
007dd187  IMUL EDX,EDX,0xc
007dd18a  ADD EDX,dword ptr [EBP + 0xc]
007dd18d  CMP dword ptr [EBP + -0x4],EDX
007dd190  JNC 0x007dd1a2
007dd192  MOV EAX,dword ptr [EBP + -0x4]
007dd195  MOV ECX,dword ptr [EAX + 0x4]
007dd198  CMP ECX,dword ptr [EBP + 0x8]
007dd19b  JNZ 0x007dd1a2
007dd19d  MOV EAX,dword ptr [EBP + -0x4]
007dd1a0  JMP 0x007dd1a4
007dd1a2  XOR EAX,EAX
007dd1a4  MOV ESP,EBP
007dd1a6  POP EBP
007dd1a7  RET
