00699ea0  SUB ESP,0x18
00699ea3  MOV EAX,dword ptr [ECX + 0x84]
00699ea9  FLD float ptr [EAX]
00699eab  MOV EDX,dword ptr [EAX + 0x4]
00699eae  MOV EAX,dword ptr [EAX + 0x8]
00699eb1  MOV dword ptr [ESP + 0x14],EAX
00699eb5  MOV EAX,dword ptr [ESP + 0x1c]
00699eb9  FLD float ptr [EAX]
00699ebb  MOV dword ptr [ESP + 0x10],EDX
00699ebf  MOV EDX,dword ptr [EAX + 0x4]
00699ec2  FADDP
00699ec4  MOV EAX,dword ptr [EAX + 0x8]
00699ec7  MOV dword ptr [ESP + 0x4],EDX
00699ecb  FLD float ptr [ESP + 0x4]
00699ecf  FADD float ptr [ESP + 0x10]
00699ed3  MOV dword ptr [ESP + 0x8],EAX
00699ed7  FLD float ptr [ESP + 0x8]
00699edb  MOV EAX,dword ptr [ESP + 0x30]
00699edf  FADD float ptr [ESP + 0x14]
00699ee3  PUSH EAX
00699ee4  MOV EAX,dword ptr [ESP + 0x2c]
00699ee8  ADD ECX,0x110
00699eee  FSTP float ptr [ESP + 0xc]
00699ef2  MOV EDX,dword ptr [ESP + 0xc]
00699ef6  MOV dword ptr [ESP + 0x18],EDX
00699efa  FXCH
00699efc  MOV EDX,dword ptr [ESP + 0x30]
00699f00  FSTP float ptr [ESP + 0x10]
00699f04  PUSH EDX
00699f05  MOV EDX,dword ptr [ESP + 0x2c]
00699f09  FSTP float ptr [ESP + 0x18]
00699f0d  PUSH EAX
00699f0e  MOV EAX,dword ptr [ESP + 0x2c]
00699f12  PUSH 0x1
00699f14  PUSH EDX
00699f15  PUSH EAX
00699f16  LEA EDX,[ESP + 0x24]
00699f1a  PUSH EDX
00699f1b  CALL 0x00696c90
00699f20  ADD ESP,0x18
00699f23  RET 0x18
