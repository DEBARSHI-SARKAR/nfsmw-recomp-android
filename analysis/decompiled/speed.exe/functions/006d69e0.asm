006d69e0  PUSH ESI
006d69e1  MOV ESI,ECX
006d69e3  MOV EAX,dword ptr [ESI + 0x44]
006d69e6  PUSH EAX
006d69e7  MOV dword ptr [ESI],0x8af1f8
006d69ed  CALL 0x00652b00
006d69f2  MOV EAX,dword ptr [ESI + 0x48]
006d69f5  ADD ESP,0x4
006d69f8  TEST EAX,EAX
006d69fa  JZ 0x006d6a15
006d69fc  MOV ECX,dword ptr [EAX]
006d69fe  PUSH EAX
006d69ff  CALL dword ptr [ECX + 0x114]
006d6a05  MOV EAX,dword ptr [ESI + 0x48]
006d6a08  MOV EDX,dword ptr [EAX]
006d6a0a  PUSH EAX
006d6a0b  CALL dword ptr [EDX + 0x8]
006d6a0e  MOV dword ptr [ESI + 0x48],0x0
006d6a15  MOV EAX,dword ptr [ESI + 0x4c]
006d6a18  TEST EAX,EAX
006d6a1a  JZ 0x006d6a29
006d6a1c  MOV ECX,dword ptr [EAX]
006d6a1e  PUSH EAX
006d6a1f  CALL dword ptr [ECX + 0x8]
006d6a22  MOV dword ptr [ESI + 0x4c],0x0
006d6a29  POP ESI
006d6a2a  RET
