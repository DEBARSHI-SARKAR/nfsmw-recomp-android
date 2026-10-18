006bc360  PUSH -0x1
006bc362  PUSH 0x87e212
006bc367  MOV EAX,FS:[0x0]
006bc36d  PUSH EAX
006bc36e  MOV dword ptr FS:[0x0],ESP
006bc375  PUSH ECX
006bc376  PUSH ESI
006bc377  PUSH 0x0
006bc379  PUSH 0xc4
006bc37e  MOV ECX,0x925b30
006bc383  CALL 0x005d29d0
006bc388  MOV ESI,EAX
006bc38a  MOV dword ptr [ESP + 0x4],ESI
006bc38e  TEST ESI,ESI
006bc390  MOV dword ptr [ESP + 0x10],0x0
006bc398  JZ 0x006bc3dc
006bc39a  MOV EAX,dword ptr [ESP + 0x18]
006bc39e  PUSH 0x6
006bc3a0  PUSH EAX
006bc3a1  MOV ECX,ESI
006bc3a3  CALL 0x006bbf30
006bc3a8  MOV dword ptr [ESI],0x8adb0c
006bc3ae  MOV dword ptr [ESI + 0x8],0x8adb04
006bc3b5  MOV dword ptr [ESI + 0x4c],0x8adae8
006bc3bc  MOV dword ptr [ESI + 0x54],0x8ada68
006bc3c3  MOV dword ptr [ESI + 0x60],0x8ada4c
006bc3ca  MOV EAX,ESI
006bc3cc  POP ESI
006bc3cd  MOV ECX,dword ptr [ESP + 0x4]
006bc3d1  MOV dword ptr FS:[0x0],ECX
006bc3d8  ADD ESP,0x10
006bc3db  RET
006bc3dc  MOV ECX,dword ptr [ESP + 0x8]
006bc3e0  XOR EAX,EAX
006bc3e2  POP ESI
006bc3e3  MOV dword ptr FS:[0x0],ECX
006bc3ea  ADD ESP,0x10
006bc3ed  RET
