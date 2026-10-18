007e3c50  PUSH EBP
007e3c51  MOV EBP,ESP
007e3c53  SUB ESP,0x1c
007e3c56  CMP dword ptr [0x00906980],0x0
007e3c5d  JZ 0x007e3c6d
007e3c5f  CMP dword ptr [0x00906980],0xbb40e64e
007e3c69  JZ 0x007e3c6d
007e3c6b  JMP 0x007e3ce0
007e3c6d  LEA EAX,[EBP + -0x8]
007e3c70  PUSH EAX
007e3c71  CALL dword ptr [0x008901cc]
007e3c77  MOV ECX,dword ptr [EBP + -0x8]
007e3c7a  MOV dword ptr [EBP + -0xc],ECX
007e3c7d  MOV EDX,dword ptr [EBP + -0xc]
007e3c80  XOR EDX,dword ptr [EBP + -0x4]
007e3c83  MOV dword ptr [EBP + -0xc],EDX
007e3c86  CALL dword ptr [0x008902a0]
007e3c8c  XOR EAX,dword ptr [EBP + -0xc]
007e3c8f  MOV dword ptr [EBP + -0xc],EAX
007e3c92  CALL dword ptr [0x00890204]
007e3c98  XOR EAX,dword ptr [EBP + -0xc]
007e3c9b  MOV dword ptr [EBP + -0xc],EAX
007e3c9e  CALL dword ptr [0x008900a4]
007e3ca4  XOR EAX,dword ptr [EBP + -0xc]
007e3ca7  MOV dword ptr [EBP + -0xc],EAX
007e3caa  LEA EAX,[EBP + -0x18]
007e3cad  PUSH EAX
007e3cae  CALL dword ptr [0x0089017c]
007e3cb4  MOV ECX,dword ptr [EBP + -0xc]
007e3cb7  XOR ECX,dword ptr [EBP + -0x18]
007e3cba  MOV dword ptr [EBP + -0xc],ECX
007e3cbd  MOV EDX,dword ptr [EBP + -0xc]
007e3cc0  XOR EDX,dword ptr [EBP + -0x14]
007e3cc3  MOV dword ptr [EBP + -0xc],EDX
007e3cc6  JZ 0x007e3cd0
007e3cc8  MOV EAX,dword ptr [EBP + -0xc]
007e3ccb  MOV dword ptr [EBP + -0x1c],EAX
007e3cce  JMP 0x007e3cd7
007e3cd0  MOV dword ptr [EBP + -0x1c],0xbb40e64e
007e3cd7  MOV ECX,dword ptr [EBP + -0x1c]
007e3cda  MOV dword ptr [0x00906980],ECX
007e3ce0  MOV ESP,EBP
007e3ce2  POP EBP
007e3ce3  RET
