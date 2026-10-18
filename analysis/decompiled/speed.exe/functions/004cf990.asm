004cf990  PUSH -0x1
004cf992  PUSH 0x86c780
004cf997  MOV EAX,FS:[0x0]
004cf99d  PUSH EAX
004cf99e  MOV dword ptr FS:[0x0],ESP
004cf9a5  PUSH ECX
004cf9a6  PUSH EBX
004cf9a7  PUSH EBP
004cf9a8  PUSH ESI
004cf9a9  MOV ESI,ECX
004cf9ab  PUSH EDI
004cf9ac  MOV dword ptr [ESP + 0x10],ESI
004cf9b0  XOR EBX,EBX
004cf9b2  LEA EDI,[ESI + 0xa4]
004cf9b8  MOV ECX,EDI
004cf9ba  MOV dword ptr [ESP + 0x1c],EBX
004cf9be  MOV dword ptr [ESI],0x897938
004cf9c4  MOV dword ptr [ESI + 0x94],EBX
004cf9ca  CALL 0x004c00a0
004cf9cf  MOV dword ptr [EDI + 0x4],EAX
004cf9d2  MOV dword ptr [EDI + 0x8],EBX
004cf9d5  LEA EBP,[ESI + 0xb8]
004cf9db  MOV ECX,EBP
004cf9dd  MOV byte ptr [ESP + 0x1c],0x1
004cf9e2  CALL 0x004c00c0
004cf9e7  MOV dword ptr [EBP + 0x4],EAX
004cf9ea  MOV dword ptr [EBP + 0x8],EBX
004cf9ed  MOV dword ptr [ESI + 0xcc],EBX
004cf9f3  MOV dword ptr [ESI + 0xd0],EBX
004cf9f9  MOV dword ptr [ESI + 0xd4],EBX
004cf9ff  MOV dword ptr [ESI + 0xd8],EBX
004cfa05  MOV dword ptr [ESI + 0xe0],EBX
004cfa0b  MOV dword ptr [ESI + 0xe4],EBX
004cfa11  MOV dword ptr [ESI + 0xe8],EBX
004cfa17  OR EAX,0xffffffff
004cfa1a  MOV dword ptr [ESI + 0xec],EBX
004cfa20  MOV dword ptr [ESI + 0xf0],EAX
004cfa26  MOV dword ptr [ESI + 0xf4],0x10000
004cfa30  MOV dword ptr [ESI + 0xf8],EAX
004cfa36  MOV dword ptr [ESI + 0xfc],EBX
004cfa3c  MOV dword ptr [ESI + 0x104],EBX
004cfa42  MOV dword ptr [ESI + 0x108],EBX
004cfa48  MOV byte ptr [ESI + 0x10c],BL
004cfa4e  MOV dword ptr [ESI + 0x4],EBX
004cfa51  MOV EAX,dword ptr [ESI + 0xe0]
004cfa57  CMP EAX,EBX
004cfa59  MOV byte ptr [ESP + 0x1c],0x4
004cfa5e  JZ 0x004cfa7b
004cfa60  MOV ECX,dword ptr [ESI + 0xe8]
004cfa66  SUB ECX,EAX
004cfa68  SAR ECX,0x2
004cfa6b  PUSH EBX
004cfa6c  SHL ECX,0x2
004cfa6f  PUSH ECX
004cfa70  PUSH EAX
004cfa71  MOV ECX,0x925b30
004cfa76  CALL 0x005d0370
004cfa7b  MOV ECX,EBP
004cfa7d  MOV dword ptr [ESI + 0xe0],EBX
004cfa83  MOV dword ptr [ESI + 0xe4],EBX
004cfa89  MOV dword ptr [ESI + 0xe8],EBX
004cfa8f  CALL 0x004bfc60
004cfa94  MOV ECX,EDI
004cfa96  CALL 0x004cb770
004cfa9b  MOV ECX,dword ptr [ESP + 0x14]
004cfa9f  POP EDI
004cfaa0  MOV dword ptr [ESI + 0xb0],EBX
004cfaa6  MOV dword ptr [ESI + 0xb4],EBX
004cfaac  MOV EAX,ESI
004cfaae  POP ESI
004cfaaf  POP EBP
004cfab0  POP EBX
004cfab1  MOV dword ptr FS:[0x0],ECX
004cfab8  ADD ESP,0x10
004cfabb  RET
