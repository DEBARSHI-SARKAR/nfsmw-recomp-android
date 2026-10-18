0077ae20  SUB ESP,0x20
0077ae23  MOV EAX,dword ptr [ESP + 0x24]
0077ae27  FLD float ptr [EAX]
0077ae29  LEA EDX,[ESP]
0077ae2c  FSUB float ptr [ESP + 0x28]
0077ae30  MOV dword ptr [ESP + 0x14],0x0
0077ae38  MOV dword ptr [ESP + 0x4],0x0
0077ae40  FSTP float ptr [ESP]
0077ae43  FLD float ptr [EAX + 0x8]
0077ae46  FSUB float ptr [ESP + 0x28]
0077ae4a  FSTP float ptr [ESP + 0x8]
0077ae4e  FLD float ptr [ESP + 0x28]
0077ae52  FADD float ptr [EAX]
0077ae54  FSTP float ptr [ESP + 0x10]
0077ae58  FLD float ptr [ESP + 0x28]
0077ae5c  FADD float ptr [EAX + 0x8]
0077ae5f  MOV EAX,dword ptr [ESP + 0x2c]
0077ae63  PUSH EAX
0077ae64  PUSH EDX
0077ae65  FSTP float ptr [ESP + 0x20]
0077ae69  CALL 0x007736e0
0077ae6e  ADD ESP,0x20
0077ae71  RET 0xc
