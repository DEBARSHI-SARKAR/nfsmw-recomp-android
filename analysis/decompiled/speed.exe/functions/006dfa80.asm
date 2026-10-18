006dfa80  MOV EAX,[0x00982bf4]
006dfa85  PUSH ESI
006dfa86  PUSH EAX
006dfa87  CALL dword ptr [0x008903bc]
006dfa8d  CALL 0x006c5d20
006dfa92  CALL 0x006de040
006dfa97  CALL 0x006ddca0
006dfa9c  CALL 0x006bd620
006dfaa1  CALL 0x006c3360
006dfaa6  MOV ESI,0x93e03c
006dfaab  JMP 0x006dfab0
006dfab0  MOV EAX,dword ptr [ESI]
006dfab2  TEST EAX,EAX
006dfab4  JZ 0x006dfac2
006dfab6  MOV ECX,dword ptr [EAX]
006dfab8  PUSH EAX
006dfab9  CALL dword ptr [ECX + 0x8]
006dfabc  MOV dword ptr [ESI],0x0
006dfac2  ADD ESI,0x4
006dfac5  CMP ESI,0x93e04c
006dfacb  JL 0x006dfab0
006dfacd  MOV EAX,[0x00982bdc]
006dfad2  MOV EDX,dword ptr [EAX]
006dfad4  PUSH EAX
006dfad5  CALL dword ptr [EDX + 0x8]
006dfad8  MOV EAX,[0x00982bd8]
006dfadd  MOV ECX,dword ptr [EAX]
006dfadf  PUSH EAX
006dfae0  CALL dword ptr [ECX + 0x8]
006dfae3  POP ESI
006dfae4  JMP 0x00661210
