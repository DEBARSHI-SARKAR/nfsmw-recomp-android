004c0ce0  SUB ESP,0x24
004c0ce3  MOV ECX,dword ptr [ESP + 0x28]
004c0ce7  MOV EDX,dword ptr [ESP + 0x2c]
004c0ceb  XOR EAX,EAX
004c0ced  MOV dword ptr [ESP],EAX
004c0cf0  MOV dword ptr [ESP + 0x4],EAX
004c0cf4  MOV dword ptr [ESP + 0x8],EAX
004c0cf8  MOV dword ptr [ESP + 0xc],EAX
004c0cfc  MOV dword ptr [ESP + 0x10],EAX
004c0d00  MOV dword ptr [ESP + 0x14],0x0
004c0d08  MOV dword ptr [ESP + 0x14],EAX
004c0d0c  MOV dword ptr [ESP + 0x18],EAX
004c0d10  MOV dword ptr [ESP + 0x1c],EAX
004c0d14  MOV dword ptr [ESP + 0x20],EAX
004c0d18  LEA EAX,[ESP + 0x28]
004c0d1c  PUSH EAX
004c0d1d  MOV dword ptr [ESP + 0x8],ECX
004c0d21  MOV dword ptr [ESP + 0x4],EDX
004c0d25  MOV dword ptr [ESP + 0x14],0x4b7d60
004c0d2d  CALL 0x004b3a50
004c0d32  MOV ECX,dword ptr [EAX]
004c0d34  MOV EAX,[0x008f831c]
004c0d39  MOV EDX,dword ptr [ESP + 0x38]
004c0d3d  MOV dword ptr [ESP + 0x1c],EAX
004c0d41  INC EAX
004c0d42  MOV dword ptr [ESP + 0x18],ECX
004c0d46  MOV ECX,dword ptr [ESP + 0x34]
004c0d4a  MOV [0x008f831c],EAX
004c0d4f  MOV EAX,ESP
004c0d51  MOV dword ptr [ESP + 0x20],EDX
004c0d55  MOV dword ptr [EAX],ECX
004c0d57  LEA ECX,[ESP + 0x4]
004c0d5b  CALL 0x00665390
004c0d60  ADD ESP,0x24
004c0d63  RET
