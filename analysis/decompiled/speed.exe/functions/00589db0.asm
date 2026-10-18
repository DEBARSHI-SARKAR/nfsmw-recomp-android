00589db0  PUSH -0x1
00589db2  PUSH 0x8723b1
00589db7  MOV EAX,FS:[0x0]
00589dbd  PUSH EAX
00589dbe  MOV dword ptr FS:[0x0],ESP
00589dc5  PUSH ECX
00589dc6  PUSH ESI
00589dc7  MOV ESI,ECX
00589dc9  PUSH 0x1
00589dcb  MOV dword ptr [ESP + 0x8],ESI
00589dcf  CALL 0x00589300
00589dd4  XOR EAX,EAX
00589dd6  MOV dword ptr [ESI],0x8a1548
00589ddc  MOV ECX,0x89b070
00589de1  MOV dword ptr [ESP + 0x10],EAX
00589de5  MOV dword ptr [ESI + 0x60],ECX
00589de8  MOV dword ptr [ESI + 0x64],EAX
00589deb  MOV dword ptr [ESI + 0x68],EAX
00589dee  MOV dword ptr [ESI + 0x6c],EAX
00589df1  MOV dword ptr [ESI + 0x70],EAX
00589df4  MOV dword ptr [ESI + 0x74],EAX
00589df7  MOV dword ptr [ESI + 0x78],EAX
00589dfa  MOV dword ptr [ESI + 0x7c],EAX
00589dfd  MOV dword ptr [ESI + 0x80],EAX
00589e03  MOV dword ptr [ESI + 0x84],EAX
00589e09  MOV dword ptr [ESI + 0x88],EAX
00589e0f  MOV dword ptr [ESI + 0x8c],EAX
00589e15  MOV dword ptr [ESI + 0x90],EAX
00589e1b  MOV dword ptr [ESI + 0x94],EAX
00589e21  MOV dword ptr [ESI + 0x98],EAX
00589e27  MOV dword ptr [ESI + 0x9c],ECX
00589e2d  MOV dword ptr [ESI + 0xa0],EAX
00589e33  MOV dword ptr [ESI + 0xa4],EAX
00589e39  MOV dword ptr [ESI + 0xa8],EAX
00589e3f  MOV dword ptr [ESI + 0xac],EAX
00589e45  MOV dword ptr [ESI + 0xb0],EAX
00589e4b  MOV dword ptr [ESI + 0xb4],EAX
00589e51  MOV dword ptr [ESI + 0xb8],EAX
00589e57  MOV dword ptr [ESI + 0xbc],EAX
00589e5d  MOV dword ptr [ESI + 0xc0],EAX
00589e63  MOV dword ptr [ESI + 0xc4],EAX
00589e69  MOV dword ptr [ESI + 0xc8],EAX
00589e6f  MOV dword ptr [ESI + 0xcc],EAX
00589e75  MOV dword ptr [ESI + 0xd0],EAX
00589e7b  MOV dword ptr [ESI + 0xd4],EAX
00589e81  MOV ECX,dword ptr [ESP + 0x1c]
00589e85  MOV EDX,dword ptr [ESP + 0x20]
00589e89  MOV dword ptr [ESI + 0xd8],ECX
00589e8f  MOV CL,byte ptr [ESP + 0x24]
00589e93  MOV dword ptr [ESI + 0xdc],EDX
00589e99  MOV EDX,dword ptr [ESP + 0x18]
00589e9d  MOV byte ptr [ESI + 0xf0],CL
00589ea3  MOV dword ptr [ESI + 0xf4],EDX
00589ea9  MOV EDX,dword ptr [ESI]
00589eab  PUSH EAX
00589eac  MOV ECX,ESI
00589eae  MOV byte ptr [ESP + 0x14],0x2
00589eb3  MOV byte ptr [ESI + 0x2a],0x1
00589eb7  CALL dword ptr [EDX + 0x38]
00589eba  MOV ECX,dword ptr [ESP + 0x8]
00589ebe  MOV EAX,ESI
00589ec0  POP ESI
00589ec1  MOV dword ptr FS:[0x0],ECX
00589ec8  ADD ESP,0x10
00589ecb  RET 0x10
