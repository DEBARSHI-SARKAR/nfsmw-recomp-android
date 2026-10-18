004a7d50  SUB ESP,0x34
004a7d53  PUSH ESI
004a7d54  MOV ESI,ECX
004a7d56  MOV ECX,dword ptr [ESI + 0x10]
004a7d59  MOV EDX,dword ptr [ECX + 0x10]
004a7d5c  MOV EAX,dword ptr [ECX + 0x30]
004a7d5f  LEA EAX,[EDX + EAX*0x4]
004a7d62  LEA EDX,[ESP + 0x8]
004a7d66  PUSH EDX
004a7d67  MOV EDX,dword ptr [EAX + 0x4]
004a7d6a  MOVZX EDX,word ptr [EDX + 0x4]
004a7d6e  MOV EAX,dword ptr [EAX]
004a7d70  DEC EDX
004a7d71  MOV dword ptr [ESP + 0x8],EDX
004a7d75  MOVZX EDX,word ptr [EAX + 0x4]
004a7d79  FILD dword ptr [ESP + 0x8]
004a7d7d  SUB ESP,0x8
004a7d80  DEC EDX
004a7d81  MOV dword ptr [ESP + 0x10],EDX
004a7d85  FSTP float ptr [ESP + 0x4]
004a7d89  FILD dword ptr [ESP + 0x10]
004a7d8d  FSTP float ptr [ESP]
004a7d90  CALL 0x004a6ba0
004a7d95  MOV ECX,dword ptr [ESI + 0x14]
004a7d98  MOV EDX,dword ptr [ECX + 0x10]
004a7d9b  MOV EAX,dword ptr [ECX + 0x30]
004a7d9e  LEA EAX,[EDX + EAX*0x4]
004a7da1  LEA EDX,[ESP + 0x18]
004a7da5  PUSH EDX
004a7da6  MOV EDX,dword ptr [EAX + 0x4]
004a7da9  MOVZX EDX,word ptr [EDX + 0x4]
004a7dad  MOV EAX,dword ptr [EAX]
004a7daf  DEC EDX
004a7db0  MOV dword ptr [ESP + 0x8],EDX
004a7db4  MOVZX EDX,word ptr [EAX + 0x4]
004a7db8  FILD dword ptr [ESP + 0x8]
004a7dbc  SUB ESP,0x8
004a7dbf  DEC EDX
004a7dc0  MOV dword ptr [ESP + 0x10],EDX
004a7dc4  FSTP float ptr [ESP + 0x4]
004a7dc8  FILD dword ptr [ESP + 0x10]
004a7dcc  FSTP float ptr [ESP]
004a7dcf  CALL 0x004a6ba0
004a7dd4  LEA EAX,[ESP + 0x28]
004a7dd8  PUSH EAX
004a7dd9  MOV EAX,dword ptr [ESI + 0x18]
004a7ddc  LEA ECX,[ESP + 0x1c]
004a7de0  PUSH ECX
004a7de1  LEA EDX,[ESP + 0x10]
004a7de5  PUSH EDX
004a7de6  PUSH EAX
004a7de7  CALL 0x0048d7d0
004a7dec  LEA ECX,[ESP + 0x28]
004a7df0  PUSH ECX
004a7df1  LEA EDX,[ESP + 0x1c]
004a7df5  PUSH EDX
004a7df6  LEA EAX,[ESP + 0x40]
004a7dfa  PUSH EAX
004a7dfb  MOV dword ptr [ESP + 0x24],0x0
004a7e03  MOV dword ptr [ESP + 0x28],0x3f800000
004a7e0b  MOV dword ptr [ESP + 0x2c],0x0
004a7e13  MOV dword ptr [ESP + 0x30],0x3f800000
004a7e1b  CALL 0x0048dec0
004a7e20  FLD float ptr [ESP + 0x34]
004a7e24  MOV EAX,dword ptr [ESP + 0x58]
004a7e28  MOV ECX,dword ptr [ESP + 0x3c]
004a7e2c  FSTP float ptr [EAX]
004a7e2e  FLD float ptr [ESP + 0x3c]
004a7e32  ADD ESP,0xc
004a7e35  FSTP double ptr [ESP + 0x8]
004a7e39  MOV dword ptr [EAX + 0x4],ECX
004a7e3c  FLD float ptr [ESP + 0x28]
004a7e40  FSTP double ptr [ESP]
004a7e43  PUSH 0x896038
004a7e48  CALL 0x007c5e60
004a7e4d  ADD ESP,0x14
004a7e50  MOV AL,0x1
004a7e52  POP ESI
004a7e53  ADD ESP,0x34
004a7e56  RET 0x4
