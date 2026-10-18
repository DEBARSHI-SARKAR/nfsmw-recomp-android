005c4d90  SUB ESP,0x50
005c4d93  XOR EAX,EAX
005c4d95  MOV dword ptr [ESP + 0x4],EAX
005c4d99  MOV dword ptr [ESP],EAX
005c4d9c  MOV dword ptr [ESP + 0xc],EAX
005c4da0  MOV dword ptr [ESP + 0x14],EAX
005c4da4  MOV dword ptr [ESP + 0x10],EAX
005c4da8  MOV dword ptr [ESP + 0x30],EAX
005c4dac  MOV dword ptr [ESP + 0x34],EAX
005c4db0  MOV dword ptr [ESP + 0x44],EAX
005c4db4  MOV dword ptr [ESP + 0x40],EAX
005c4db8  MOV dword ptr [ESP + 0x4c],EAX
005c4dbc  MOV dword ptr [ESP + 0x48],EAX
005c4dc0  MOV EAX,dword ptr [ESP + 0x58]
005c4dc4  PUSH EAX
005c4dc5  XOR EDX,EDX
005c4dc7  MOV DL,byte ptr [ECX + 0x3]
005c4dca  XOR EAX,EAX
005c4dcc  MOV AL,byte ptr [ECX + 0x2]
005c4dcf  PUSH EDX
005c4dd0  MOV EDX,dword ptr [ESP + 0x5c]
005c4dd4  PUSH EAX
005c4dd5  PUSH ECX
005c4dd6  MOV ECX,dword ptr [ECX + 0x108]
005c4ddc  PUSH ECX
005c4ddd  PUSH EDX
005c4dde  LEA ECX,[ESP + 0x18]
005c4de2  CALL 0x005c4cb0
005c4de7  ADD ESP,0x50
005c4dea  RET 0x8
