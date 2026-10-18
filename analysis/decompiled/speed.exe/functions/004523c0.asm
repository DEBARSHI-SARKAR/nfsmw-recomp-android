004523c0  MOV EAX,ECX
004523c2  MOV ECX,dword ptr [ESP + 0x4]
004523c6  MOV EDX,dword ptr [ECX]
004523c8  MOV dword ptr [EAX],EDX
004523ca  MOV EDX,dword ptr [ECX + 0x4]
004523cd  MOV dword ptr [EAX + 0x4],EDX
004523d0  MOV EDX,dword ptr [ECX + 0x8]
004523d3  MOV dword ptr [EAX + 0x8],EDX
004523d6  MOV EDX,dword ptr [ECX + 0xc]
004523d9  MOV dword ptr [EAX + 0xc],EDX
004523dc  MOV CX,word ptr [ECX + 0x10]
004523e0  MOV word ptr [EAX + 0x10],CX
004523e4  MOV ECX,dword ptr [EAX + 0x4]
004523e7  TEST ECX,ECX
004523e9  MOV word ptr [EAX + 0x12],0x0
004523ef  JZ 0x00452405
004523f1  MOV EDX,dword ptr [ECX + 0x24]
004523f4  TEST EDX,EDX
004523f6  JNZ 0x004523fc
004523f8  OR byte ptr [EAX + 0x10],0x1
004523fc  MOV EDX,dword ptr [ECX + 0x18]
004523ff  MOV dword ptr [EAX + 0x8],EDX
00452402  INC dword ptr [ECX + 0x1c]
00452405  RET 0x4
