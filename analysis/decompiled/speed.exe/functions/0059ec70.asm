0059ec70  PUSH -0x1
0059ec72  PUSH 0x873233
0059ec77  MOV EAX,FS:[0x0]
0059ec7d  PUSH EAX
0059ec7e  MOV dword ptr FS:[0x0],ESP
0059ec85  PUSH ECX
0059ec86  MOV EAX,dword ptr [ESP + 0x18]
0059ec8a  PUSH EBX
0059ec8b  PUSH EBP
0059ec8c  PUSH ESI
0059ec8d  MOV ESI,ECX
0059ec8f  XOR EBX,EBX
0059ec91  PUSH EDI
0059ec92  LEA EDI,[ESI + 0x8]
0059ec95  MOV dword ptr [ESI],0x8a1e80
0059ec9b  MOV dword ptr [EDI],EDI
0059ec9d  MOV dword ptr [EDI + 0x4],EDI
0059eca0  MOV dword ptr [ESP + 0x10],ESI
0059eca4  MOV dword ptr [ESI + 0x10],EAX
0059eca7  MOV dword ptr [ESI + 0x18],0x20
0059ecae  MOV dword ptr [ESI + 0x1c],EBX
0059ecb1  MOV dword ptr [ESI + 0x20],EBX
0059ecb4  MOV dword ptr [ESI + 0x24],EBX
0059ecb7  MOV byte ptr [ESI + 0x28],BL
0059ecba  MOV ECX,dword ptr [ESP + 0x24]
0059ecbe  LEA EBP,[ESI + 0x30]
0059ecc1  PUSH EBP
0059ecc2  PUSH 0x565880
0059ecc7  MOV dword ptr [ESP + 0x24],EBX
0059eccb  MOV dword ptr [EBP],0x890970
0059ecd2  MOV dword ptr [EBP + 0x4],ECX
0059ecd5  CALL 0x005d7930
0059ecda  MOV dword ptr [EBP],0x8a0418
0059ece1  MOV dword ptr [ESI],0x8a2280
0059ece7  MOV dword ptr [EBP],0x8a2278
0059ecee  MOV byte ptr [ESI + 0x3c],BL
0059ecf1  MOV dword ptr [ESI + 0x40],EBX
0059ecf4  PUSH 0x8a2268
0059ecf9  MOV byte ptr [ESP + 0x20],0x1
0059ecfe  MOV dword ptr [ESI + 0x44],EBX
0059ed01  CALL 0x005af1c0
0059ed06  MOV ECX,dword ptr [ESI + 0x10]
0059ed09  PUSH EAX
0059ed0a  PUSH ECX
0059ed0b  CALL 0x005251a0
0059ed10  MOV EBP,EAX
0059ed12  ADD ESP,0xc
0059ed15  CMP EBP,EBX
0059ed17  JZ 0x0059ed34
0059ed19  CALL 0x00466410
0059ed1e  CMP EAX,EBX
0059ed20  JZ 0x0059ed27
0059ed22  MOV dword ptr [EAX + 0x8],EBP
0059ed25  MOV EBX,EAX
0059ed27  MOV EAX,dword ptr [EDI + 0x4]
0059ed2a  MOV dword ptr [EAX],EBX
0059ed2c  MOV dword ptr [EDI + 0x4],EBX
0059ed2f  MOV dword ptr [EBX + 0x4],EAX
0059ed32  MOV dword ptr [EBX],EDI
0059ed34  MOV ECX,dword ptr [ESP + 0x14]
0059ed38  POP EDI
0059ed39  MOV dword ptr [ESI + 0x38],EBP
0059ed3c  MOV EAX,ESI
0059ed3e  POP ESI
0059ed3f  POP EBP
0059ed40  POP EBX
0059ed41  MOV dword ptr FS:[0x0],ECX
0059ed48  ADD ESP,0x10
0059ed4b  RET 0xc
