006bede0  MOV EAX,[0x00982adc]
006bede5  PUSH ESI
006bede6  MOV ESI,dword ptr [ECX]
006bede8  PUSH EAX
006bede9  CALL 0x00466340
006bedee  MOV ECX,dword ptr [ESI + 0x18]
006bedf1  ADD ESP,0x4
006bedf4  MOV dword ptr [EAX],ECX
006bedf6  POP ESI
006bedf7  RET
