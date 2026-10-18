005be5d0  PUSH -0x1
005be5d2  PUSH 0x874314
005be5d7  MOV EAX,FS:[0x0]
005be5dd  PUSH EAX
005be5de  MOV dword ptr FS:[0x0],ESP
005be5e5  PUSH ECX
005be5e6  PUSH ESI
005be5e7  MOV ESI,ECX
005be5e9  MOV dword ptr [ESP + 0x4],ESI
005be5ed  MOV dword ptr [ESP + 0x10],0x5
005be5f5  CALL 0x005bb620
005be5fa  LEA ECX,[ESI + 0x4130]
005be600  MOV byte ptr [ESP + 0x10],0x4
005be605  MOV dword ptr [ECX],0x8a2c18
005be60b  CALL 0x005b3b20
005be610  LEA ECX,[ESI + 0x4120]
005be616  MOV byte ptr [ESP + 0x10],0x3
005be61b  MOV dword ptr [ECX],0x8a2c18
005be621  CALL 0x005b3b20
005be626  LEA ECX,[ESI + 0x4110]
005be62c  MOV byte ptr [ESP + 0x10],0x2
005be631  MOV dword ptr [ECX],0x8a2c18
005be637  CALL 0x005b3b20
005be63c  LEA ECX,[ESI + 0xf8]
005be642  MOV byte ptr [ESP + 0x10],0x1
005be647  MOV dword ptr [ECX],0x8a2c18
005be64d  CALL 0x005b3b20
005be652  LEA ECX,[ESI + 0xe8]
005be658  MOV byte ptr [ESP + 0x10],0x0
005be65d  MOV dword ptr [ECX],0x8a2c18
005be663  CALL 0x005b3b20
005be668  LEA ECX,[ESI + 0xd8]
005be66e  MOV dword ptr [ESP + 0x10],0xffffffff
005be676  MOV dword ptr [ECX],0x8a2c18
005be67c  CALL 0x005b3b20
005be681  MOV ECX,dword ptr [ESP + 0x8]
005be685  POP ESI
005be686  MOV dword ptr FS:[0x0],ECX
005be68d  ADD ESP,0x10
005be690  RET
