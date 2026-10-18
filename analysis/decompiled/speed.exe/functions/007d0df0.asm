007d0df0  PUSH EBP
007d0df1  MOV EBP,ESP
007d0df3  SUB ESP,0xc
007d0df6  MOV dword ptr [EBP + -0x4],0x0
007d0dfd  JMP 0x007d0e08
007d0dff  MOV EAX,dword ptr [EBP + -0x4]
007d0e02  ADD EAX,0x1
007d0e05  MOV dword ptr [EBP + -0x4],EAX
007d0e08  CMP dword ptr [EBP + -0x4],0x24
007d0e0c  JGE 0x007d0e5d
007d0e0e  MOV ECX,dword ptr [EBP + -0x4]
007d0e11  CMP dword ptr [ECX*0x8 + 0x906990],0x0
007d0e19  JZ 0x007d0e5b
007d0e1b  MOV EDX,dword ptr [EBP + -0x4]
007d0e1e  CMP dword ptr [EDX*0x8 + 0x906994],0x1
007d0e26  JZ 0x007d0e5b
007d0e28  MOV EAX,dword ptr [EBP + -0x4]
007d0e2b  MOV ECX,dword ptr [EAX*0x8 + 0x906990]
007d0e32  MOV dword ptr [EBP + -0x8],ECX
007d0e35  MOV EDX,dword ptr [EBP + -0x8]
007d0e38  PUSH EDX
007d0e39  CALL dword ptr [0x008901fc]
007d0e3f  PUSH 0x2
007d0e41  MOV EAX,dword ptr [EBP + -0x8]
007d0e44  PUSH EAX
007d0e45  CALL 0x007c7290
007d0e4a  ADD ESP,0x8
007d0e4d  MOV ECX,dword ptr [EBP + -0x4]
007d0e50  MOV dword ptr [ECX*0x8 + 0x906990],0x0
007d0e5b  JMP 0x007d0dff
007d0e5d  MOV dword ptr [EBP + -0x4],0x0
007d0e64  JMP 0x007d0e6f
007d0e66  MOV EDX,dword ptr [EBP + -0x4]
007d0e69  ADD EDX,0x1
007d0e6c  MOV dword ptr [EBP + -0x4],EDX
007d0e6f  CMP dword ptr [EBP + -0x4],0x24
007d0e73  JGE 0x007d0ea8
007d0e75  MOV EAX,dword ptr [EBP + -0x4]
007d0e78  CMP dword ptr [EAX*0x8 + 0x906990],0x0
007d0e80  JZ 0x007d0ea6
007d0e82  MOV ECX,dword ptr [EBP + -0x4]
007d0e85  CMP dword ptr [ECX*0x8 + 0x906994],0x1
007d0e8d  JNZ 0x007d0ea6
007d0e8f  MOV EDX,dword ptr [EBP + -0x4]
007d0e92  MOV EAX,dword ptr [EDX*0x8 + 0x906990]
007d0e99  MOV dword ptr [EBP + -0xc],EAX
007d0e9c  MOV ECX,dword ptr [EBP + -0xc]
007d0e9f  PUSH ECX
007d0ea0  CALL dword ptr [0x008901fc]
007d0ea6  JMP 0x007d0e66
007d0ea8  MOV ESP,EBP
007d0eaa  POP EBP
007d0eab  RET
