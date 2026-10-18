0041cc80  SUB ESP,0x24
0041cc83  MOV ECX,dword ptr [ESP + 0x28]
0041cc87  MOV EDX,dword ptr [ESP + 0x2c]
0041cc8b  XOR EAX,EAX
0041cc8d  MOV dword ptr [ESP],EAX
0041cc90  MOV dword ptr [ESP + 0x4],EAX
0041cc94  MOV dword ptr [ESP + 0x8],EAX
0041cc98  MOV dword ptr [ESP + 0xc],EAX
0041cc9c  MOV dword ptr [ESP + 0x10],EAX
0041cca0  MOV dword ptr [ESP + 0x14],0x0
0041cca8  MOV dword ptr [ESP + 0x14],EAX
0041ccac  MOV dword ptr [ESP + 0x18],EAX
0041ccb0  MOV dword ptr [ESP + 0x1c],EAX
0041ccb4  MOV dword ptr [ESP + 0x8],ECX
0041ccb8  MOV dword ptr [ESP + 0x20],EAX
0041ccbc  MOV EAX,dword ptr [ESP + 0x30]
0041ccc0  LEA ECX,[ESP + 0x28]
0041ccc4  PUSH ECX
0041ccc5  MOV dword ptr [ESP + 0x4],EDX
0041ccc9  MOV dword ptr [ESP + 0x8],EAX
0041cccd  MOV dword ptr [ESP + 0x14],0x40ec00
0041ccd5  CALL 0x00405750
0041ccda  MOV EDX,dword ptr [EAX]
0041ccdc  MOV EAX,[0x008f831c]
0041cce1  MOV ECX,dword ptr [ESP + 0x38]
0041cce5  MOV dword ptr [ESP + 0x1c],EAX
0041cce9  INC EAX
0041ccea  MOV [0x008f831c],EAX
0041ccef  MOV EAX,dword ptr [ESP + 0x3c]
0041ccf3  MOV dword ptr [ESP + 0x20],EAX
0041ccf7  MOV EAX,ESP
0041ccf9  MOV dword ptr [ESP + 0x18],EDX
0041ccfd  MOV dword ptr [EAX],ECX
0041ccff  LEA ECX,[ESP + 0x4]
0041cd03  CALL 0x00665390
0041cd08  ADD ESP,0x24
0041cd0b  RET
