00653ca0  PUSH ECX
00653ca1  PUSH EBX
00653ca2  MOV BL,byte ptr [ECX + 0x5]
00653ca5  XOR EDX,EDX
00653ca7  XOR EAX,EAX
00653ca9  CMP BL,DL
00653cab  POP EBX
00653cac  JBE 0x00653cca
00653cae  PUSH ESI
00653caf  NOP
00653cb0  MOV ESI,dword ptr [ECX + 0x10]
00653cb3  FLD float ptr [ESP + 0xc]
00653cb7  FSTP float ptr [ESI + EAX*0x4]
00653cba  MOV ESI,dword ptr [ECX + 0x30]
00653cbd  MOV dword ptr [ESI + EAX*0x4],EDX
00653cc0  MOVZX ESI,byte ptr [ECX + 0x5]
00653cc4  INC EAX
00653cc5  CMP EAX,ESI
00653cc7  JL 0x00653cb0
00653cc9  POP ESI
00653cca  MOVZX EAX,byte ptr [ECX + 0x5]
00653cce  MOV dword ptr [ESP],EAX
00653cd1  MOV dword ptr [ECX + 0xc],EDX
00653cd4  MOV byte ptr [ECX + 0x6],DL
00653cd7  FILD dword ptr [ESP]
00653cda  MOV dword ptr [ECX + 0x2c],EDX
00653cdd  MOV byte ptr [ECX + 0x7],DL
00653ce0  FMUL float ptr [ESP + 0x8]
00653ce4  FSTP float ptr [ECX + 0x8]
00653ce7  POP ECX
00653ce8  RET 0x4
