004c0e00  SUB ESP,0x24
004c0e03  MOV ECX,dword ptr [ESP + 0x28]
004c0e07  MOV EDX,dword ptr [ESP + 0x2c]
004c0e0b  XOR EAX,EAX
004c0e0d  MOV dword ptr [ESP],EAX
004c0e10  MOV dword ptr [ESP + 0x4],EAX
004c0e14  MOV dword ptr [ESP + 0x8],EAX
004c0e18  MOV dword ptr [ESP + 0xc],EAX
004c0e1c  MOV dword ptr [ESP + 0x10],EAX
004c0e20  MOV dword ptr [ESP + 0x14],0x0
004c0e28  MOV dword ptr [ESP + 0x14],EAX
004c0e2c  MOV dword ptr [ESP + 0x18],EAX
004c0e30  MOV dword ptr [ESP + 0x1c],EAX
004c0e34  MOV dword ptr [ESP + 0x20],EAX
004c0e38  LEA EAX,[ESP + 0x28]
004c0e3c  PUSH EAX
004c0e3d  MOV dword ptr [ESP + 0x8],ECX
004c0e41  MOV dword ptr [ESP + 0x4],EDX
004c0e45  MOV dword ptr [ESP + 0x14],0x4b7d80
004c0e4d  CALL 0x004b0e60
004c0e52  MOV ECX,dword ptr [EAX]
004c0e54  MOV EAX,[0x008f831c]
004c0e59  MOV EDX,dword ptr [ESP + 0x38]
004c0e5d  MOV dword ptr [ESP + 0x1c],EAX
004c0e61  INC EAX
004c0e62  MOV dword ptr [ESP + 0x18],ECX
004c0e66  MOV ECX,dword ptr [ESP + 0x34]
004c0e6a  MOV [0x008f831c],EAX
004c0e6f  MOV EAX,ESP
004c0e71  MOV dword ptr [ESP + 0x20],EDX
004c0e75  MOV dword ptr [EAX],ECX
004c0e77  LEA ECX,[ESP + 0x4]
004c0e7b  CALL 0x00665390
004c0e80  ADD ESP,0x24
004c0e83  RET
