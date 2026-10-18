0067be90  PUSH -0x1
0067be92  PUSH 0x87adf1
0067be97  MOV EAX,FS:[0x0]
0067be9d  PUSH EAX
0067be9e  MOV dword ptr FS:[0x0],ESP
0067bea5  SUB ESP,0x8
0067bea8  PUSH ESI
0067bea9  MOV ESI,ECX
0067beab  PUSH EDI
0067beac  LEA EDI,[ESI + 0xe4]
0067beb2  MOV dword ptr [ESP + 0xc],ESI
0067beb6  MOV dword ptr [ESI],0x8a9e7c
0067bebc  MOV dword ptr [ESI + 0x8],0x8a9e74
0067bec3  MOV dword ptr [ESI + 0x2c],0x8a9e58
0067beca  MOV dword ptr [ESI + 0x34],0x8a9dd8
0067bed1  MOV dword ptr [ESI + 0x40],0x8a9dcc
0067bed8  MOV dword ptr [ESI + 0x94],0x8a9db0
0067bee2  MOV dword ptr [ESI + 0x9c],0x8a9da8
0067beec  MOV dword ptr [EDI],0x8a9d90
0067bef2  MOV EAX,dword ptr [ESI + 0xf0]
0067bef8  TEST EAX,EAX
0067befa  MOV dword ptr [ESP + 0x18],0x1
0067bf02  JZ 0x0067bf40
0067bf04  MOV dword ptr [EAX + 0x38],0x0
0067bf0b  MOV EAX,dword ptr [ESI + 0xf0]
0067bf11  TEST EAX,EAX
0067bf13  JZ 0x0067bf40
0067bf15  CMP byte ptr [ESI + 0xec],0x1
0067bf1c  JZ 0x0067bf40
0067bf1e  MOV EAX,dword ptr [EAX + 0x2c]
0067bf21  PUSH EAX
0067bf22  CALL 0x00723c90
0067bf27  ADD ESP,0x4
0067bf2a  TEST EAX,EAX
0067bf2c  JZ 0x0067bf39
0067bf2e  AND byte ptr [EAX + 0x4],0xef
0067bf32  MOV ECX,EAX
0067bf34  CALL 0x00728920
0067bf39  MOV byte ptr [ESI + 0xec],0x1
0067bf40  DEC dword ptr [0x0092617c]
0067bf46  MOV dword ptr [EDI],0x890970
0067bf4c  MOV ECX,dword ptr [EDI + 0x4]
0067bf4f  PUSH EDI
0067bf50  MOV byte ptr [ESP + 0x1c],0x0
0067bf55  CALL 0x005d5a50
0067bf5a  MOV ECX,ESI
0067bf5c  MOV dword ptr [ESP + 0x18],0xffffffff
0067bf64  CALL 0x0067b970
0067bf69  MOV ECX,dword ptr [ESP + 0x10]
0067bf6d  POP EDI
0067bf6e  POP ESI
0067bf6f  MOV dword ptr FS:[0x0],ECX
0067bf76  ADD ESP,0x14
0067bf79  RET
