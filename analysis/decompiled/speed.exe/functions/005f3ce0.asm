005f3ce0  PUSH EBP
005f3ce1  MOV EBP,ESP
005f3ce3  PUSH -0x1
005f3ce5  PUSH 0x875980
005f3cea  MOV EAX,FS:[0x0]
005f3cf0  PUSH EAX
005f3cf1  MOV dword ptr FS:[0x0],ESP
005f3cf8  SUB ESP,0x8
005f3cfb  PUSH EBX
005f3cfc  PUSH ESI
005f3cfd  PUSH EDI
005f3cfe  MOV ESI,ECX
005f3d00  MOV dword ptr [EBP + -0x10],ESP
005f3d03  MOV dword ptr [EBP + -0x14],ESI
005f3d06  CALL 0x005e6e40
005f3d0b  MOV dword ptr [ESI + 0x4],EAX
005f3d0e  MOV byte ptr [EAX + 0xf],0x1
005f3d12  MOV EAX,dword ptr [ESI + 0x4]
005f3d15  MOV dword ptr [EAX + 0x4],EAX
005f3d18  MOV EAX,dword ptr [ESI + 0x4]
005f3d1b  MOV dword ptr [EAX],EAX
005f3d1d  MOV EAX,dword ptr [ESI + 0x4]
005f3d20  MOV dword ptr [EAX + 0x8],EAX
005f3d23  MOV EAX,dword ptr [EBP + 0x8]
005f3d26  PUSH EAX
005f3d27  MOV ECX,ESI
005f3d29  MOV dword ptr [ESI + 0x8],0x0
005f3d30  MOV dword ptr [EBP + -0x4],0x0
005f3d37  CALL 0x005eabb0
005f3d3c  MOV ECX,dword ptr [EBP + -0xc]
005f3d3f  POP EDI
005f3d40  MOV EAX,ESI
005f3d42  POP ESI
005f3d43  MOV dword ptr FS:[0x0],ECX
005f3d4a  POP EBX
005f3d4b  MOV ESP,EBP
005f3d4d  POP EBP
005f3d4e  RET 0x4
