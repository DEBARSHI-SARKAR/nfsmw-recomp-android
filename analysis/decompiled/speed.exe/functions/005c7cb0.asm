005c7cb0  PUSH ESI
005c7cb1  MOV ESI,ECX
005c7cb3  TEST byte ptr [ESI + 0x4],0x4
005c7cb7  JZ 0x005c7cc9
005c7cb9  MOV EAX,dword ptr [ESI + 0xc]
005c7cbc  TEST EAX,EAX
005c7cbe  JZ 0x005c7cc9
005c7cc0  PUSH EAX
005c7cc1  CALL 0x004655f0
005c7cc6  ADD ESP,0x4
005c7cc9  MOV EAX,dword ptr [ESP + 0x8]
005c7ccd  MOV EDX,dword ptr [ESP + 0xc]
005c7cd1  XOR ECX,ECX
005c7cd3  MOV CL,byte ptr [ESP + 0x14]
005c7cd7  MOV dword ptr [ESI + 0xc],EAX
005c7cda  MOV EAX,dword ptr [ESI + 0x4]
005c7cdd  SHL EDX,0x6
005c7ce0  AND EAX,0xf9
005c7ce5  AND ECX,0x1
005c7ce8  OR ECX,EDX
005c7cea  SHL ECX,0x2
005c7ced  OR ECX,EAX
005c7cef  MOV dword ptr [ESI + 0x4],ECX
005c7cf2  MOV ECX,dword ptr [ESP + 0x10]
005c7cf6  MOV dword ptr [ESI + 0x8],ECX
005c7cf9  POP ESI
005c7cfa  RET 0x10
