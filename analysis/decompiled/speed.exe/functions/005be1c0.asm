005be1c0  PUSH ESI
005be1c1  MOV ESI,ECX
005be1c3  CALL 0x005bc050
005be1c8  XOR EAX,EAX
005be1ca  MOV dword ptr [ESI + 0x60],EAX
005be1cd  MOV dword ptr [ESI + 0x64],EAX
005be1d0  MOV dword ptr [ESI],0x8a2e2c
005be1d6  MOV EDX,0x4
005be1db  MOV dword ptr [ESI + 0x5c],EDX
005be1de  MOV dword ptr [ESI + 0x68],EAX
005be1e1  MOV dword ptr [ESI + 0x6c],EAX
005be1e4  MOV dword ptr [ESI + 0x70],EAX
005be1e7  MOV dword ptr [ESI + 0x74],EAX
005be1ea  MOV dword ptr [ESI + 0x78],EAX
005be1ed  MOV dword ptr [ESI + 0x7c],EAX
005be1f0  MOV ECX,0x3f800000
005be1f5  MOV dword ptr [ESI + 0x80],ECX
005be1fb  MOV dword ptr [ESI + 0x84],ECX
005be201  MOV dword ptr [ESI + 0x88],EAX
005be207  MOV dword ptr [ESI + 0x8c],EAX
005be20d  MOV dword ptr [ESI + 0x90],EAX
005be213  MOV dword ptr [ESI + 0x94],EAX
005be219  MOV dword ptr [ESI + 0x98],EAX
005be21f  MOV dword ptr [ESI + 0x9c],EAX
005be225  MOV dword ptr [ESI + 0xa0],EAX
005be22b  MOV dword ptr [ESI + 0xa4],ECX
005be231  MOV dword ptr [ESI + 0xa8],0xbab60b61
005be23b  MOV dword ptr [ESI + 0x18],EDX
005be23e  MOV EAX,ESI
005be240  POP ESI
005be241  RET
