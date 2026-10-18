0058eec0  PUSH -0x1
0058eec2  PUSH 0x8726eb
0058eec7  MOV EAX,FS:[0x0]
0058eecd  PUSH EAX
0058eece  MOV dword ptr FS:[0x0],ESP
0058eed5  PUSH ECX
0058eed6  PUSH EBX
0058eed7  PUSH ESI
0058eed8  MOV ESI,ECX
0058eeda  PUSH EDI
0058eedb  LEA EDI,[ESI + 0xc]
0058eede  MOV dword ptr [ESI],0x89d348
0058eee4  MOV dword ptr [ESP + 0xc],ESI
0058eee8  MOV dword ptr [EDI],EDI
0058eeea  MOV dword ptr [EDI + 0x4],EDI
0058eeed  XOR EBX,EBX
0058eeef  PUSH 0x10
0058eef1  MOV dword ptr [ESP + 0x1c],EBX
0058eef5  CALL 0x00652ad0
0058eefa  ADD ESP,0x4
0058eefd  CMP EAX,EBX
0058eeff  JZ 0x0058ef13
0058ef01  MOV ECX,dword ptr [ESP + 0x20]
0058ef05  MOV dword ptr [EAX],0x89c2bc
0058ef0b  MOV dword ptr [EAX + 0xc],ECX
0058ef0e  ADD EAX,0x4
0058ef11  JMP 0x0058ef15
0058ef13  XOR EAX,EAX
0058ef15  MOV ECX,dword ptr [EDI + 0x4]
0058ef18  MOV dword ptr [ECX],EAX
0058ef1a  MOV dword ptr [EDI + 0x4],EAX
0058ef1d  MOV dword ptr [EAX],EDI
0058ef1f  MOV dword ptr [EAX + 0x4],ECX
0058ef22  MOV ECX,dword ptr [ESP + 0x10]
0058ef26  MOV dword ptr [ESI + 0x14],EBX
0058ef29  MOV dword ptr [ESI + 0x24],EBX
0058ef2c  MOV dword ptr [ESI + 0x20],EBX
0058ef2f  MOV dword ptr [ESI + 0x1c],EBX
0058ef32  MOV dword ptr [ESI + 0x18],EBX
0058ef35  POP EDI
0058ef36  MOV byte ptr [ESI + 0x28],0x1
0058ef3a  MOV EAX,ESI
0058ef3c  POP ESI
0058ef3d  POP EBX
0058ef3e  MOV dword ptr FS:[0x0],ECX
0058ef45  ADD ESP,0x10
0058ef48  RET 0x4
