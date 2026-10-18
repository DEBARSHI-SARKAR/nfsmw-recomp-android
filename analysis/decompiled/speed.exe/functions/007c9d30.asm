007c9d30  PUSH EBP
007c9d31  MOV EBP,ESP
007c9d33  SUB ESP,0x1c
007c9d36  PUSH 0xffff
007c9d3b  PUSH 0x133f
007c9d40  CALL 0x007dac10
007c9d45  ADD ESP,0x8
007c9d48  MOV dword ptr [EBP + -0x14],EAX
007c9d4b  MOVZX EAX,word ptr [EBP + 0xe]
007c9d4f  AND EAX,0x7ff0
007c9d54  CMP EAX,0x7ff0
007c9d59  JNZ 0x007c9de6
007c9d5f  FLD double ptr [EBP + 0x8]
007c9d62  SUB ESP,0x8
007c9d65  FSTP double ptr [ESP]
007c9d68  CALL 0x007d9df0
007c9d6d  ADD ESP,0x8
007c9d70  MOV dword ptr [EBP + -0x18],EAX
007c9d73  CMP dword ptr [EBP + -0x18],0x0
007c9d77  JLE 0x007c9dbc
007c9d79  CMP dword ptr [EBP + -0x18],0x2
007c9d7d  JLE 0x007c9d87
007c9d7f  CMP dword ptr [EBP + -0x18],0x3
007c9d83  JZ 0x007c9da0
007c9d85  JMP 0x007c9dbc
007c9d87  PUSH 0xffff
007c9d8c  MOV ECX,dword ptr [EBP + -0x14]
007c9d8f  PUSH ECX
007c9d90  CALL 0x007dac10
007c9d95  ADD ESP,0x8
007c9d98  FLD double ptr [EBP + 0x8]
007c9d9b  JMP 0x007c9e5b
007c9da0  MOV EDX,dword ptr [EBP + -0x14]
007c9da3  PUSH EDX
007c9da4  FLD double ptr [EBP + 0x8]
007c9da7  SUB ESP,0x8
007c9daa  FSTP double ptr [ESP]
007c9dad  PUSH 0x25
007c9daf  CALL 0x007d9fa0
007c9db4  ADD ESP,0x10
007c9db7  JMP 0x007c9e5b
007c9dbc  MOV EAX,dword ptr [EBP + -0x14]
007c9dbf  PUSH EAX
007c9dc0  FLD double ptr [EBP + 0x8]
007c9dc3  FADD double ptr [0x008942e8]
007c9dc9  SUB ESP,0x8
007c9dcc  FSTP double ptr [ESP]
007c9dcf  FLD double ptr [EBP + 0x8]
007c9dd2  SUB ESP,0x8
007c9dd5  FSTP double ptr [ESP]
007c9dd8  PUSH 0x25
007c9dda  PUSH 0x8
007c9ddc  CALL 0x007da070
007c9de1  ADD ESP,0x1c
007c9de4  JMP 0x007c9e5b
007c9de6  FLD double ptr [0x008942e0]
007c9dec  FLD double ptr [EBP + 0x8]
007c9def  FUCOMPP
007c9df1  FNSTSW AX
007c9df3  TEST AH,0x44
007c9df6  JP 0x007c9e21
007c9df8  MOV ECX,dword ptr [EBP + -0x14]
007c9dfb  PUSH ECX
007c9dfc  FLD double ptr [0x00906ec0]
007c9e02  FCHS
007c9e04  SUB ESP,0x8
007c9e07  FSTP double ptr [ESP]
007c9e0a  FLD double ptr [EBP + 0x8]
007c9e0d  SUB ESP,0x8
007c9e10  FSTP double ptr [ESP]
007c9e13  PUSH 0x25
007c9e15  PUSH 0x4
007c9e17  CALL 0x007da070
007c9e1c  ADD ESP,0x1c
007c9e1f  JMP 0x007c9e5b
007c9e21  LEA EDX,[EBP + -0x4]
007c9e24  PUSH EDX
007c9e25  FLD double ptr [EBP + 0x8]
007c9e28  SUB ESP,0x8
007c9e2b  FSTP double ptr [ESP]
007c9e2e  CALL 0x007d9e70
007c9e33  FSTP ST0
007c9e35  ADD ESP,0xc
007c9e38  MOV EAX,dword ptr [EBP + -0x4]
007c9e3b  SUB EAX,0x1
007c9e3e  MOV dword ptr [EBP + -0x1c],EAX
007c9e41  FILD dword ptr [EBP + -0x1c]
007c9e44  FSTP double ptr [EBP + -0x10]
007c9e47  PUSH 0xffff
007c9e4c  MOV ECX,dword ptr [EBP + -0x14]
007c9e4f  PUSH ECX
007c9e50  CALL 0x007dac10
007c9e55  ADD ESP,0x8
007c9e58  FLD double ptr [EBP + -0x10]
007c9e5b  MOV ESP,EBP
007c9e5d  POP EBP
007c9e5e  RET
