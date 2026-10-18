0041cd10  SUB ESP,0x24
0041cd13  MOV ECX,dword ptr [ESP + 0x28]
0041cd17  MOV EDX,dword ptr [ESP + 0x2c]
0041cd1b  XOR EAX,EAX
0041cd1d  MOV dword ptr [ESP],EAX
0041cd20  MOV dword ptr [ESP + 0x4],EAX
0041cd24  MOV dword ptr [ESP + 0x8],EAX
0041cd28  MOV dword ptr [ESP + 0xc],EAX
0041cd2c  MOV dword ptr [ESP + 0x10],EAX
0041cd30  MOV dword ptr [ESP + 0x14],0x0
0041cd38  MOV dword ptr [ESP + 0x14],EAX
0041cd3c  MOV dword ptr [ESP + 0x18],EAX
0041cd40  MOV dword ptr [ESP + 0x1c],EAX
0041cd44  MOV dword ptr [ESP + 0x8],ECX
0041cd48  MOV dword ptr [ESP + 0x20],EAX
0041cd4c  MOV EAX,dword ptr [ESP + 0x30]
0041cd50  LEA ECX,[ESP + 0x28]
0041cd54  PUSH ECX
0041cd55  MOV dword ptr [ESP + 0x4],EDX
0041cd59  MOV dword ptr [ESP + 0x8],EAX
0041cd5d  MOV dword ptr [ESP + 0x14],0x40ec20
0041cd65  CALL 0x00405b70
0041cd6a  MOV EDX,dword ptr [EAX]
0041cd6c  MOV EAX,[0x008f831c]
0041cd71  MOV ECX,dword ptr [ESP + 0x38]
0041cd75  MOV dword ptr [ESP + 0x1c],EAX
0041cd79  INC EAX
0041cd7a  MOV [0x008f831c],EAX
0041cd7f  MOV EAX,dword ptr [ESP + 0x3c]
0041cd83  MOV dword ptr [ESP + 0x20],EAX
0041cd87  MOV EAX,ESP
0041cd89  MOV dword ptr [ESP + 0x18],EDX
0041cd8d  MOV dword ptr [EAX],ECX
0041cd8f  LEA ECX,[ESP + 0x4]
0041cd93  CALL 0x00665390
0041cd98  ADD ESP,0x24
0041cd9b  RET
