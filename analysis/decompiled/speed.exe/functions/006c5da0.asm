006c5da0  PUSH ESI
006c5da1  PUSH EDI
006c5da2  MOV EDI,0x93de78
006c5da7  MOV ESI,dword ptr [EDI]
006c5da9  MOV EAX,dword ptr [ESI + 0x48]
006c5dac  TEST EAX,EAX
006c5dae  JZ 0x006c5dc9
006c5db0  MOV ECX,dword ptr [EAX]
006c5db2  PUSH EAX
006c5db3  CALL dword ptr [ECX + 0x114]
006c5db9  MOV EAX,dword ptr [ESI + 0x48]
006c5dbc  MOV EDX,dword ptr [EAX]
006c5dbe  PUSH EAX
006c5dbf  CALL dword ptr [EDX + 0x8]
006c5dc2  MOV dword ptr [ESI + 0x48],0x0
006c5dc9  ADD EDI,0x4
006c5dcc  CMP EDI,0x93def0
006c5dd2  JLE 0x006c5da7
006c5dd4  MOV EAX,[0x00982c84]
006c5dd9  TEST EAX,EAX
006c5ddb  POP EDI
006c5ddc  POP ESI
006c5ddd  JZ 0x006c5def
006c5ddf  MOV ECX,dword ptr [EAX]
006c5de1  PUSH EAX
006c5de2  CALL dword ptr [ECX + 0x8]
006c5de5  MOV dword ptr [0x00982c84],0x0
006c5def  RET
