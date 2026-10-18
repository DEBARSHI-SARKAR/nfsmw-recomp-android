007d9a50  PUSH EBP
007d9a51  MOV EBP,ESP
007d9a53  SUB ESP,0x58
007d9a56  PUSH 0xffff
007d9a5b  PUSH 0x133f
007d9a60  CALL 0x007dac10
007d9a65  ADD ESP,0x8
007d9a68  MOV dword ptr [EBP + -0x8],EAX
007d9a6b  MOVZX EAX,word ptr [EBP + 0xe]
007d9a6f  AND EAX,0x7ff0
007d9a74  CMP EAX,0x7ff0
007d9a79  JNZ 0x007d9b27
007d9a7f  FLD double ptr [EBP + 0x8]
007d9a82  SUB ESP,0x8
007d9a85  FSTP double ptr [ESP]
007d9a88  CALL 0x007d9df0
007d9a8d  ADD ESP,0x8
007d9a90  MOV dword ptr [EBP + -0x24],EAX
007d9a93  CMP dword ptr [EBP + -0x24],0x0
007d9a97  JLE 0x007d9aeb
007d9a99  CMP dword ptr [EBP + -0x24],0x2
007d9a9d  JLE 0x007d9aa7
007d9a9f  CMP dword ptr [EBP + -0x24],0x3
007d9aa3  JZ 0x007d9ac0
007d9aa5  JMP 0x007d9aeb
007d9aa7  PUSH 0xffff
007d9aac  MOV ECX,dword ptr [EBP + -0x8]
007d9aaf  PUSH ECX
007d9ab0  CALL 0x007dac10
007d9ab5  ADD ESP,0x8
007d9ab8  FLD double ptr [EBP + 0x8]
007d9abb  JMP 0x007d9d18
007d9ac0  MOV EDX,dword ptr [EBP + -0x8]
007d9ac3  PUSH EDX
007d9ac4  FILD dword ptr [EBP + 0x10]
007d9ac7  FSTP double ptr [EBP + -0x2c]
007d9aca  FLD double ptr [EBP + -0x2c]
007d9acd  SUB ESP,0x8
007d9ad0  FSTP double ptr [ESP]
007d9ad3  FLD double ptr [EBP + 0x8]
007d9ad6  SUB ESP,0x8
007d9ad9  FSTP double ptr [ESP]
007d9adc  PUSH 0x19
007d9ade  CALL 0x007da000
007d9ae3  ADD ESP,0x18
007d9ae6  JMP 0x007d9d18
007d9aeb  MOV EAX,dword ptr [EBP + -0x8]
007d9aee  PUSH EAX
007d9aef  FLD double ptr [EBP + 0x8]
007d9af2  FADD double ptr [0x008942e8]
007d9af8  SUB ESP,0x8
007d9afb  FSTP double ptr [ESP]
007d9afe  FILD dword ptr [EBP + 0x10]
007d9b01  FSTP double ptr [EBP + -0x34]
007d9b04  FLD double ptr [EBP + -0x34]
007d9b07  SUB ESP,0x8
007d9b0a  FSTP double ptr [ESP]
007d9b0d  FLD double ptr [EBP + 0x8]
007d9b10  SUB ESP,0x8
007d9b13  FSTP double ptr [ESP]
007d9b16  PUSH 0x19
007d9b18  PUSH 0x8
007d9b1a  CALL 0x007da170
007d9b1f  ADD ESP,0x24
007d9b22  JMP 0x007d9d18
007d9b27  FLD double ptr [0x008942e0]
007d9b2d  FLD double ptr [EBP + 0x8]
007d9b30  FUCOMPP
007d9b32  FNSTSW AX
007d9b34  TEST AH,0x44
007d9b37  JP 0x007d9b52
007d9b39  PUSH 0xffff
007d9b3e  MOV ECX,dword ptr [EBP + -0x8]
007d9b41  PUSH ECX
007d9b42  CALL 0x007dac10
007d9b47  ADD ESP,0x8
007d9b4a  FLD double ptr [EBP + 0x8]
007d9b4d  JMP 0x007d9d18
007d9b52  LEA EDX,[EBP + -0x4]
007d9b55  PUSH EDX
007d9b56  FLD double ptr [EBP + 0x8]
007d9b59  SUB ESP,0x8
007d9b5c  FSTP double ptr [ESP]
007d9b5f  CALL 0x007d9e70
007d9b64  ADD ESP,0xc
007d9b67  FSTP double ptr [EBP + -0x18]
007d9b6a  CMP dword ptr [EBP + 0x10],0x0
007d9b6e  JGE 0x007d9b7a
007d9b70  MOV EAX,dword ptr [EBP + 0x10]
007d9b73  NEG EAX
007d9b75  MOV dword ptr [EBP + -0x38],EAX
007d9b78  JMP 0x007d9b80
007d9b7a  MOV ECX,dword ptr [EBP + 0x10]
007d9b7d  MOV dword ptr [EBP + -0x38],ECX
007d9b80  CMP dword ptr [EBP + -0x38],0x7fffffff
007d9b87  JLE 0x007d9b91
007d9b89  MOV EDX,dword ptr [EBP + 0x10]
007d9b8c  MOV dword ptr [EBP + -0xc],EDX
007d9b8f  JMP 0x007d9b9a
007d9b91  MOV EAX,dword ptr [EBP + -0x4]
007d9b94  ADD EAX,dword ptr [EBP + 0x10]
007d9b97  MOV dword ptr [EBP + -0xc],EAX
007d9b9a  CMP dword ptr [EBP + -0xc],0xa00
007d9ba1  JLE 0x007d9bf0
007d9ba3  MOV ECX,dword ptr [EBP + -0x8]
007d9ba6  PUSH ECX
007d9ba7  FLD double ptr [EBP + -0x18]
007d9baa  SUB ESP,0x8
007d9bad  FSTP double ptr [ESP]
007d9bb0  FLD double ptr [0x00906ec0]
007d9bb6  SUB ESP,0x8
007d9bb9  FSTP double ptr [ESP]
007d9bbc  CALL 0x007c9cb0
007d9bc1  ADD ESP,0x8
007d9bc4  FSTP double ptr [ESP]
007d9bc7  FILD dword ptr [EBP + 0x10]
007d9bca  FSTP double ptr [EBP + -0x40]
007d9bcd  FLD double ptr [EBP + -0x40]
007d9bd0  SUB ESP,0x8
007d9bd3  FSTP double ptr [ESP]
007d9bd6  FLD double ptr [EBP + 0x8]
007d9bd9  SUB ESP,0x8
007d9bdc  FSTP double ptr [ESP]
007d9bdf  PUSH 0x19
007d9be1  PUSH 0x11
007d9be3  CALL 0x007da170
007d9be8  ADD ESP,0x24
007d9beb  JMP 0x007d9d18
007d9bf0  CMP dword ptr [EBP + -0xc],0x400
007d9bf7  JLE 0x007d9c4d
007d9bf9  MOV EDX,dword ptr [EBP + -0xc]
007d9bfc  SUB EDX,0x600
007d9c02  PUSH EDX
007d9c03  FLD double ptr [EBP + -0x18]
007d9c06  SUB ESP,0x8
007d9c09  FSTP double ptr [ESP]
007d9c0c  CALL 0x007d9d20
007d9c11  ADD ESP,0xc
007d9c14  FSTP double ptr [EBP + -0x20]
007d9c17  MOV EAX,dword ptr [EBP + -0x8]
007d9c1a  PUSH EAX
007d9c1b  FLD double ptr [EBP + -0x20]
007d9c1e  SUB ESP,0x8
007d9c21  FSTP double ptr [ESP]
007d9c24  FILD dword ptr [EBP + 0x10]
007d9c27  FSTP double ptr [EBP + -0x48]
007d9c2a  FLD double ptr [EBP + -0x48]
007d9c2d  SUB ESP,0x8
007d9c30  FSTP double ptr [ESP]
007d9c33  FLD double ptr [EBP + 0x8]
007d9c36  SUB ESP,0x8
007d9c39  FSTP double ptr [ESP]
007d9c3c  PUSH 0x19
007d9c3e  PUSH 0x11
007d9c40  CALL 0x007da170
007d9c45  ADD ESP,0x24
007d9c48  JMP 0x007d9d18
007d9c4d  CMP dword ptr [EBP + -0xc],0xfffff603
007d9c54  JGE 0x007d9c92
007d9c56  MOV ECX,dword ptr [EBP + -0x8]
007d9c59  PUSH ECX
007d9c5a  FLD double ptr [EBP + -0x18]
007d9c5d  FMUL double ptr [0x008942e0]
007d9c63  SUB ESP,0x8
007d9c66  FSTP double ptr [ESP]
007d9c69  FILD dword ptr [EBP + 0x10]
007d9c6c  FSTP double ptr [EBP + -0x50]
007d9c6f  FLD double ptr [EBP + -0x50]
007d9c72  SUB ESP,0x8
007d9c75  FSTP double ptr [ESP]
007d9c78  FLD double ptr [EBP + 0x8]
007d9c7b  SUB ESP,0x8
007d9c7e  FSTP double ptr [ESP]
007d9c81  PUSH 0x19
007d9c83  PUSH 0x12
007d9c85  CALL 0x007da170
007d9c8a  ADD ESP,0x24
007d9c8d  JMP 0x007d9d18
007d9c92  CMP dword ptr [EBP + -0xc],0xfffffc03
007d9c99  JGE 0x007d9cec
007d9c9b  MOV EDX,dword ptr [EBP + -0xc]
007d9c9e  ADD EDX,0x600
007d9ca4  PUSH EDX
007d9ca5  FLD double ptr [EBP + -0x18]
007d9ca8  SUB ESP,0x8
007d9cab  FSTP double ptr [ESP]
007d9cae  CALL 0x007d9d20
007d9cb3  ADD ESP,0xc
007d9cb6  FSTP double ptr [EBP + -0x20]
007d9cb9  MOV EAX,dword ptr [EBP + -0x8]
007d9cbc  PUSH EAX
007d9cbd  FLD double ptr [EBP + -0x20]
007d9cc0  SUB ESP,0x8
007d9cc3  FSTP double ptr [ESP]
007d9cc6  FILD dword ptr [EBP + 0x10]
007d9cc9  FSTP double ptr [EBP + -0x58]
007d9ccc  FLD double ptr [EBP + -0x58]
007d9ccf  SUB ESP,0x8
007d9cd2  FSTP double ptr [ESP]
007d9cd5  FLD double ptr [EBP + 0x8]
007d9cd8  SUB ESP,0x8
007d9cdb  FSTP double ptr [ESP]
007d9cde  PUSH 0x19
007d9ce0  PUSH 0x12
007d9ce2  CALL 0x007da170
007d9ce7  ADD ESP,0x24
007d9cea  JMP 0x007d9d18
007d9cec  MOV ECX,dword ptr [EBP + -0xc]
007d9cef  PUSH ECX
007d9cf0  FLD double ptr [EBP + -0x18]
007d9cf3  SUB ESP,0x8
007d9cf6  FSTP double ptr [ESP]
007d9cf9  CALL 0x007d9d20
007d9cfe  ADD ESP,0xc
007d9d01  FSTP double ptr [EBP + -0x20]
007d9d04  PUSH 0xffff
007d9d09  MOV EDX,dword ptr [EBP + -0x8]
007d9d0c  PUSH EDX
007d9d0d  CALL 0x007dac10
007d9d12  ADD ESP,0x8
007d9d15  FLD double ptr [EBP + -0x20]
007d9d18  MOV ESP,EBP
007d9d1a  POP EBP
007d9d1b  RET
