004c0be0  SUB ESP,0x24
004c0be3  MOV ECX,dword ptr [ESP + 0x28]
004c0be7  MOV EDX,dword ptr [ESP + 0x2c]
004c0beb  XOR EAX,EAX
004c0bed  MOV dword ptr [ESP],EAX
004c0bf0  MOV dword ptr [ESP + 0x4],EAX
004c0bf4  MOV dword ptr [ESP + 0x8],EAX
004c0bf8  MOV dword ptr [ESP + 0xc],EAX
004c0bfc  MOV dword ptr [ESP + 0x10],EAX
004c0c00  MOV dword ptr [ESP + 0x14],0x0
004c0c08  MOV dword ptr [ESP + 0x14],EAX
004c0c0c  MOV dword ptr [ESP + 0x18],EAX
004c0c10  MOV dword ptr [ESP + 0x1c],EAX
004c0c14  MOV dword ptr [ESP + 0x20],EAX
004c0c18  LEA EAX,[ESP + 0x28]
004c0c1c  PUSH EAX
004c0c1d  MOV dword ptr [ESP + 0x8],ECX
004c0c21  MOV dword ptr [ESP + 0x4],EDX
004c0c25  MOV dword ptr [ESP + 0x14],0x4b7d50
004c0c2d  CALL 0x00469d20
004c0c32  MOV ECX,dword ptr [EAX]
004c0c34  MOV EAX,[0x008f831c]
004c0c39  MOV EDX,dword ptr [ESP + 0x38]
004c0c3d  MOV dword ptr [ESP + 0x1c],EAX
004c0c41  INC EAX
004c0c42  MOV dword ptr [ESP + 0x18],ECX
004c0c46  MOV ECX,dword ptr [ESP + 0x34]
004c0c4a  MOV [0x008f831c],EAX
004c0c4f  MOV EAX,ESP
004c0c51  MOV dword ptr [ESP + 0x20],EDX
004c0c55  MOV dword ptr [EAX],ECX
004c0c57  LEA ECX,[ESP + 0x4]
004c0c5b  CALL 0x00665390
004c0c60  ADD ESP,0x24
004c0c63  RET
