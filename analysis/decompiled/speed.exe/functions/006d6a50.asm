006d6a50  PUSH ESI
006d6a51  MOV ESI,ECX
006d6a53  MOV EAX,dword ptr [ESI + 0x44]
006d6a56  PUSH EAX
006d6a57  MOV dword ptr [ESI],0x8af1f8
006d6a5d  CALL 0x00652b00
006d6a62  MOV EAX,dword ptr [ESI + 0x48]
006d6a65  ADD ESP,0x4
006d6a68  TEST EAX,EAX
006d6a6a  JZ 0x006d6a85
006d6a6c  MOV ECX,dword ptr [EAX]
006d6a6e  PUSH EAX
006d6a6f  CALL dword ptr [ECX + 0x114]
006d6a75  MOV EAX,dword ptr [ESI + 0x48]
006d6a78  MOV EDX,dword ptr [EAX]
006d6a7a  PUSH EAX
006d6a7b  CALL dword ptr [EDX + 0x8]
006d6a7e  MOV dword ptr [ESI + 0x48],0x0
006d6a85  MOV EAX,dword ptr [ESI + 0x4c]
006d6a88  TEST EAX,EAX
006d6a8a  JZ 0x006d6a99
006d6a8c  MOV ECX,dword ptr [EAX]
006d6a8e  PUSH EAX
006d6a8f  CALL dword ptr [ECX + 0x8]
006d6a92  MOV dword ptr [ESI + 0x4c],0x0
006d6a99  POP ESI
006d6a9a  RET
