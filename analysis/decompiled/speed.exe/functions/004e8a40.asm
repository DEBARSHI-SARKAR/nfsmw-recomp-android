004e8a40  PUSH ESI
004e8a41  MOV ESI,ECX
004e8a43  MOV EAX,dword ptr [ESI + 0x18]
004e8a46  MOV dword ptr [ESI + 0x2c],0x1
004e8a4d  MOV ECX,dword ptr [EAX + 0x34]
004e8a50  TEST ECX,ECX
004e8a52  JZ 0x004e8a5b
004e8a54  ADD EAX,0xd0
004e8a59  JMP 0x004e8a5e
004e8a5b  ADD EAX,0x48
004e8a5e  MOV EAX,dword ptr [EAX + 0x8]
004e8a61  MOV EDX,dword ptr [EAX + 0x10]
004e8a64  PUSH 0x1
004e8a66  PUSH -0x1
004e8a68  PUSH 0x0
004e8a6a  PUSH 0x1
004e8a6c  SUB ESP,0x10
004e8a6f  MOV ECX,ESP
004e8a71  MOV dword ptr [ECX],EDX
004e8a73  MOV EDX,dword ptr [EAX + 0x14]
004e8a76  MOV dword ptr [ECX + 0x4],EDX
004e8a79  MOV EDX,dword ptr [EAX + 0x18]
004e8a7c  MOV dword ptr [ECX + 0x8],EDX
004e8a7f  MOV EAX,dword ptr [EAX + 0x1c]
004e8a82  MOV dword ptr [ECX + 0xc],EAX
004e8a85  MOV ECX,ESI
004e8a87  CALL 0x004e52c0
004e8a8c  MOV EAX,dword ptr [ESI + 0x18]
004e8a8f  MOV ECX,dword ptr [EAX + 0x34]
004e8a92  TEST ECX,ECX
004e8a94  JZ 0x004e8a9d
004e8a96  ADD EAX,0xd0
004e8a9b  JMP 0x004e8aa0
004e8a9d  ADD EAX,0x48
004e8aa0  MOV EAX,dword ptr [EAX + 0x8]
004e8aa3  MOV EDX,dword ptr [EAX + 0x20]
004e8aa6  PUSH 0x1
004e8aa8  PUSH -0x1
004e8aaa  PUSH 0x5
004e8aac  PUSH 0x1
004e8aae  SUB ESP,0x10
004e8ab1  MOV ECX,ESP
004e8ab3  MOV dword ptr [ECX],EDX
004e8ab5  MOV EDX,dword ptr [EAX + 0x24]
004e8ab8  MOV dword ptr [ECX + 0x4],EDX
004e8abb  MOV EDX,dword ptr [EAX + 0x28]
004e8abe  MOV dword ptr [ECX + 0x8],EDX
004e8ac1  MOV EAX,dword ptr [EAX + 0x2c]
004e8ac4  MOV dword ptr [ECX + 0xc],EAX
004e8ac7  MOV ECX,ESI
004e8ac9  CALL 0x004e52c0
004e8ace  MOV EAX,dword ptr [ESI + 0x18]
004e8ad1  MOV ECX,dword ptr [EAX + 0x34]
004e8ad4  TEST ECX,ECX
004e8ad6  JZ 0x004e8adf
004e8ad8  ADD EAX,0xd0
004e8add  JMP 0x004e8ae2
004e8adf  ADD EAX,0x48
004e8ae2  MOV EAX,dword ptr [EAX + 0x8]
004e8ae5  MOV EDX,dword ptr [EAX]
004e8ae7  PUSH 0x1
004e8ae9  PUSH -0x1
004e8aeb  PUSH 0x5
004e8aed  PUSH 0x1
004e8aef  SUB ESP,0x10
004e8af2  MOV ECX,ESP
004e8af4  MOV dword ptr [ECX],EDX
004e8af6  MOV EDX,dword ptr [EAX + 0x4]
004e8af9  MOV dword ptr [ECX + 0x4],EDX
004e8afc  MOV EDX,dword ptr [EAX + 0x8]
004e8aff  MOV dword ptr [ECX + 0x8],EDX
004e8b02  MOV EAX,dword ptr [EAX + 0xc]
004e8b05  MOV dword ptr [ECX + 0xc],EAX
004e8b08  MOV ECX,ESI
004e8b0a  CALL 0x004e52c0
004e8b0f  POP ESI
004e8b10  RET
