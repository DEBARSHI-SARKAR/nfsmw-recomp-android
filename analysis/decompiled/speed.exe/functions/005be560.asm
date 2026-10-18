005be560  PUSH ESI
005be561  MOV ESI,ECX
005be563  CALL 0x005bc050
005be568  XOR EAX,EAX
005be56a  MOV dword ptr [ESI + 0x5c],EAX
005be56d  MOV dword ptr [ESI],0x8a2e3c
005be573  MOV dword ptr [ESI + 0x18],0xc
005be57a  MOV ECX,0x1
005be57f  MOV dword ptr [ESI + 0x60],EAX
005be582  MOV dword ptr [ESI + 0x64],EAX
005be585  MOV dword ptr [ESI + 0x68],EAX
005be588  MOV dword ptr [ESI + 0x6c],ECX
005be58b  MOV dword ptr [ESI + 0x70],ECX
005be58e  MOV dword ptr [ESI + 0x74],ECX
005be591  MOV EAX,ESI
005be593  POP ESI
005be594  RET
