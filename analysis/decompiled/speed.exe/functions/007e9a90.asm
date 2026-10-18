007e9a90  MOV EDX,ECX
007e9a92  XOR EAX,EAX
007e9a94  PUSH EDI
007e9a95  MOV ECX,0xb
007e9a9a  LEA EDI,[EDX + 0x94]
007e9aa0  MOV dword ptr [EDX],EAX
007e9aa2  MOV dword ptr [EDX + 0x4],EAX
007e9aa5  MOV dword ptr [EDX + 0x8],EAX
007e9aa8  MOV dword ptr [EDX + 0xc],EAX
007e9aab  MOV dword ptr [EDX + 0x10],EAX
007e9aae  MOV dword ptr [EDX + 0x14],EAX
007e9ab1  MOV dword ptr [EDX + 0x18],EAX
007e9ab4  MOV dword ptr [EDX + 0x1c],EAX
007e9ab7  MOV dword ptr [EDX + 0x20],EAX
007e9aba  MOV dword ptr [EDX + 0x24],EAX
007e9abd  MOV dword ptr [EDX + 0x28],EAX
007e9ac0  MOV dword ptr [EDX + 0x2c],EAX
007e9ac3  MOV dword ptr [EDX + 0x30],EAX
007e9ac6  MOV dword ptr [EDX + 0x34],EAX
007e9ac9  MOV dword ptr [EDX + 0x38],EAX
007e9acc  MOV dword ptr [EDX + 0x3c],EAX
007e9acf  MOV dword ptr [EDX + 0x40],EAX
007e9ad2  MOV dword ptr [EDX + 0x44],EAX
007e9ad5  MOV dword ptr [EDX + 0x48],EAX
007e9ad8  MOV dword ptr [EDX + 0x4c],EAX
007e9adb  MOV dword ptr [EDX + 0x50],EAX
007e9ade  MOV dword ptr [EDX + 0x54],EAX
007e9ae1  MOV dword ptr [EDX + 0x58],EAX
007e9ae4  MOV dword ptr [EDX + 0x5c],EAX
007e9ae7  MOV dword ptr [EDX + 0x60],EAX
007e9aea  MOV dword ptr [EDX + 0x64],EAX
007e9aed  MOV dword ptr [EDX + 0x68],EAX
007e9af0  MOV dword ptr [EDX + 0x6c],EAX
007e9af3  MOV dword ptr [EDX + 0x70],EAX
007e9af6  MOV dword ptr [EDX + 0x74],EAX
007e9af9  MOV dword ptr [EDX + 0x78],EAX
007e9afc  MOV dword ptr [EDX + 0x7c],EAX
007e9aff  MOV dword ptr [EDX + 0x80],EAX
007e9b05  MOV dword ptr [EDX + 0x84],0x40
007e9b0f  MOV dword ptr [EDX + 0x8c],EAX
007e9b15  MOV dword ptr [EDX + 0x90],EAX
007e9b1b  MOV dword ptr [EDX + 0x88],EAX
007e9b21  STOSD.REP ES:EDI
007e9b23  POP EDI
007e9b24  RET
