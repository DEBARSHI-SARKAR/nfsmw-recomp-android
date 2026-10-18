005d5cc0  PUSH ESI
005d5cc1  MOV ESI,ECX
005d5cc3  MOV ECX,dword ptr [ESI + 0x4]
005d5cc6  TEST ECX,ECX
005d5cc8  JZ 0x005d5cfb
005d5cca  MOV EAX,dword ptr [ESI + 0xc]
005d5ccd  SUB EAX,ECX
005d5ccf  SAR EAX,0x3
005d5cd2  SHL EAX,0x3
005d5cd5  CMP EAX,0x400
005d5cda  JBE 0x005d5ce7
005d5cdc  PUSH ECX
005d5cdd  CALL 0x004655f0
005d5ce2  ADD ESP,0x4
005d5ce5  JMP 0x005d5cfb
005d5ce7  DEC EAX
005d5ce8  SHR EAX,0x4
005d5ceb  MOV EDX,dword ptr [EAX*0x4 + 0x925b30]
005d5cf2  MOV dword ptr [ECX],EDX
005d5cf4  MOV dword ptr [EAX*0x4 + 0x925b30],ECX
005d5cfb  MOV dword ptr [ESI + 0x4],0x0
005d5d02  MOV dword ptr [ESI + 0x8],0x0
005d5d09  MOV dword ptr [ESI + 0xc],0x0
005d5d10  POP ESI
005d5d11  RET
