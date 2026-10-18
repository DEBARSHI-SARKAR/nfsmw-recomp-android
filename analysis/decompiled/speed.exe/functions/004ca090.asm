004ca090  PUSH -0x1
004ca092  PUSH 0x86c0b8
004ca097  MOV EAX,FS:[0x0]
004ca09d  PUSH EAX
004ca09e  MOV dword ptr FS:[0x0],ESP
004ca0a5  PUSH ECX
004ca0a6  PUSH ESI
004ca0a7  MOV ESI,ECX
004ca0a9  PUSH EDI
004ca0aa  MOV dword ptr [ESP + 0x8],ESI
004ca0ae  CALL 0x004c0ae0
004ca0b3  MOV EAX,dword ptr [ESP + 0x1c]
004ca0b7  XOR EDI,EDI
004ca0b9  PUSH EDI
004ca0ba  PUSH EDI
004ca0bb  MOV dword ptr [ESI + 0x40],EDI
004ca0be  MOV dword ptr [ESI + 0x44],EDI
004ca0c1  MOV dword ptr [ESI + 0x48],EDI
004ca0c4  PUSH EAX
004ca0c5  LEA ECX,[ESI + 0x7c]
004ca0c8  MOV dword ptr [ESP + 0x20],EDI
004ca0cc  MOV dword ptr [ESI + 0x74],0x1
004ca0d3  MOV dword ptr [ESI + 0x78],EDI
004ca0d6  CALL 0x00452380
004ca0db  MOV ECX,dword ptr [ESP + 0x20]
004ca0df  MOV dword ptr [ESI + 0x98],ECX
004ca0e5  MOV ECX,dword ptr [ESP + 0xc]
004ca0e9  MOV byte ptr [ESI + 0x94],0x1
004ca0f0  FLD float ptr [ESI + 0x44]
004ca0f3  FLD float ptr [ESI + 0x48]
004ca0f6  MOV EDX,dword ptr [ESI + 0x40]
004ca0f9  MOV dword ptr [ESI + 0x50],EDX
004ca0fc  FXCH
004ca0fe  FSTP float ptr [ESI + 0x54]
004ca101  MOV EAX,0x3f800000
004ca106  FSTP float ptr [ESI + 0x58]
004ca109  MOV dword ptr [ESI + 0x4],EDI
004ca10c  MOV dword ptr [ESI + 0x8],EDI
004ca10f  MOV dword ptr [ESI + 0xc],EDI
004ca112  MOV dword ptr [ESI + 0x10],EDI
004ca115  MOV dword ptr [ESI + 0x18],EDI
004ca118  MOV dword ptr [ESI + 0x1c],EDI
004ca11b  MOV dword ptr [ESI + 0x20],EDI
004ca11e  MOV dword ptr [ESI + 0x24],EDI
004ca121  MOV dword ptr [ESI + 0x2c],EDI
004ca124  MOV dword ptr [ESI + 0x30],EDI
004ca127  MOV dword ptr [ESI + 0x34],EDI
004ca12a  MOV dword ptr [ESI + 0x38],EDI
004ca12d  MOV dword ptr [ESI],EAX
004ca12f  MOV dword ptr [ESI + 0x14],EAX
004ca132  MOV dword ptr [ESI + 0x28],EAX
004ca135  MOV dword ptr [ESI + 0x3c],EAX
004ca138  POP EDI
004ca139  MOV EAX,ESI
004ca13b  POP ESI
004ca13c  MOV dword ptr FS:[0x0],ECX
004ca143  ADD ESP,0x10
004ca146  RET 0x8
