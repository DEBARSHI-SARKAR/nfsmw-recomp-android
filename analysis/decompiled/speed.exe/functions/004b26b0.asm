004b26b0  PUSH EBX
004b26b1  LEA EBX,[EDI + 0x4]
004b26b4  MOV ECX,EBX
004b26b6  MOV dword ptr [ESI + 0x4],0x1
004b26bd  MOV dword ptr [ESI + 0xc],0x0
004b26c4  CALL 0x007ec1bd
004b26c9  MOV EAX,dword ptr [EDI + 0x70]
004b26cc  TEST EAX,EAX
004b26ce  JNZ 0x004b26e4
004b26d0  MOV dword ptr [ESI + 0x8],EAX
004b26d3  MOV ECX,EBX
004b26d5  MOV dword ptr [EDI + 0x68],ESI
004b26d8  MOV dword ptr [EDI + 0x6c],ESI
004b26db  MOV dword ptr [EDI + 0x70],ESI
004b26de  POP EBX
004b26df  JMP 0x007ec1c8
004b26e4  MOV dword ptr [ESI + 0x8],EAX
004b26e7  MOV EAX,dword ptr [EDI + 0x70]
004b26ea  MOV dword ptr [EAX + 0xc],ESI
004b26ed  MOV ECX,EBX
004b26ef  MOV dword ptr [EDI + 0x70],ESI
004b26f2  POP EBX
004b26f3  JMP 0x007ec1c8
