007d5da0  PUSH EBP
007d5da1  MOV EBP,ESP
007d5da3  PUSH ECX
007d5da4  MOV EAX,[0x009c52e8]
007d5da9  CMP EAX,dword ptr [0x009c52f8]
007d5daf  JNZ 0x007d5dfb
007d5db1  MOV ECX,dword ptr [0x009c52f8]
007d5db7  ADD ECX,0x10
007d5dba  IMUL ECX,ECX,0x14
007d5dbd  PUSH ECX
007d5dbe  MOV EDX,dword ptr [0x009c52ec]
007d5dc4  PUSH EDX
007d5dc5  PUSH 0x0
007d5dc7  MOV EAX,[0x009c5318]
007d5dcc  PUSH EAX
007d5dcd  CALL dword ptr [0x0089023c]
007d5dd3  MOV dword ptr [EBP + -0x4],EAX
007d5dd6  CMP dword ptr [EBP + -0x4],0x0
007d5dda  JNZ 0x007d5de3
007d5ddc  XOR EAX,EAX
007d5dde  JMP 0x007d5ea9
007d5de3  MOV ECX,dword ptr [EBP + -0x4]
007d5de6  MOV dword ptr [0x009c52ec],ECX
007d5dec  MOV EDX,dword ptr [0x009c52f8]
007d5df2  ADD EDX,0x10
007d5df5  MOV dword ptr [0x009c52f8],EDX
007d5dfb  MOV EAX,[0x009c52e8]
007d5e00  IMUL EAX,EAX,0x14
007d5e03  ADD EAX,dword ptr [0x009c52ec]
007d5e09  MOV dword ptr [EBP + -0x4],EAX
007d5e0c  PUSH 0x41c4
007d5e11  PUSH 0x8
007d5e13  MOV ECX,dword ptr [0x009c5318]
007d5e19  PUSH ECX
007d5e1a  CALL dword ptr [0x00890238]
007d5e20  MOV EDX,dword ptr [EBP + -0x4]
007d5e23  MOV dword ptr [EDX + 0x10],EAX
007d5e26  MOV EAX,dword ptr [EBP + -0x4]
007d5e29  CMP dword ptr [EAX + 0x10],0x0
007d5e2d  JNZ 0x007d5e33
007d5e2f  XOR EAX,EAX
007d5e31  JMP 0x007d5ea9
007d5e33  PUSH 0x4
007d5e35  PUSH 0x2000
007d5e3a  PUSH 0x100000
007d5e3f  PUSH 0x0
007d5e41  CALL dword ptr [0x00890240]
007d5e47  MOV ECX,dword ptr [EBP + -0x4]
007d5e4a  MOV dword ptr [ECX + 0xc],EAX
007d5e4d  MOV EDX,dword ptr [EBP + -0x4]
007d5e50  CMP dword ptr [EDX + 0xc],0x0
007d5e54  JNZ 0x007d5e70
007d5e56  MOV EAX,dword ptr [EBP + -0x4]
007d5e59  MOV ECX,dword ptr [EAX + 0x10]
007d5e5c  PUSH ECX
007d5e5d  PUSH 0x0
007d5e5f  MOV EDX,dword ptr [0x009c5318]
007d5e65  PUSH EDX
007d5e66  CALL dword ptr [0x00890220]
007d5e6c  XOR EAX,EAX
007d5e6e  JMP 0x007d5ea9
007d5e70  MOV EAX,dword ptr [EBP + -0x4]
007d5e73  MOV dword ptr [EAX],0x0
007d5e79  MOV ECX,dword ptr [EBP + -0x4]
007d5e7c  MOV dword ptr [ECX + 0x4],0x0
007d5e83  MOV EDX,dword ptr [EBP + -0x4]
007d5e86  MOV dword ptr [EDX + 0x8],0xffffffff
007d5e8d  MOV EAX,[0x009c52e8]
007d5e92  ADD EAX,0x1
007d5e95  MOV [0x009c52e8],EAX
007d5e9a  MOV ECX,dword ptr [EBP + -0x4]
007d5e9d  MOV EDX,dword ptr [ECX + 0x10]
007d5ea0  MOV dword ptr [EDX],0xffffffff
007d5ea6  MOV EAX,dword ptr [EBP + -0x4]
007d5ea9  MOV ESP,EBP
007d5eab  POP EBP
007d5eac  RET
