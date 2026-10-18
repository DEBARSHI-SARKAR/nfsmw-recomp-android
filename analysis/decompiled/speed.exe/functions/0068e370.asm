0068e370  PUSH ECX
0068e371  PUSH EBX
0068e372  XOR EBX,EBX
0068e374  PUSH EBX
0068e375  MOV dword ptr [ECX + 0xd4],EBX
0068e37b  MOV dword ptr [ECX + 0xf0],EBX
0068e381  MOV dword ptr [ECX + 0x110],EBX
0068e387  MOV dword ptr [ECX + 0x118],EBX
0068e38d  CALL 0x0068e220
0068e392  CMP byte ptr [ECX + 0x134],BL
0068e398  JZ 0x0068e3ab
0068e39a  MOV dword ptr [ECX + 0x108],EBX
0068e3a0  MOV dword ptr [ECX + 0xd0],EBX
0068e3a6  JMP 0x0068e44d
0068e3ab  MOV EAX,dword ptr [ECX + 0x104]
0068e3b1  MOV EAX,dword ptr [EAX + 0x8]
0068e3b4  MOV EDX,dword ptr [ECX + 0x10c]
0068e3ba  FLD float ptr [EAX + EDX*0x4 + 0x8]
0068e3be  FMUL float ptr [0x008a938c]
0068e3c4  FMUL float ptr [0x008f8a90]
0068e3ca  FMUL float ptr [ECX + 0xc8]
0068e3d0  FLD float ptr [EAX + 0x10]
0068e3d3  FMUL float ptr [0x008a938c]
0068e3d9  FMUL float ptr [0x008f8a94]
0068e3df  FMUL float ptr [ECX + 0xcc]
0068e3e5  FSTP float ptr [ESP + 0x4]
0068e3e9  FLD float ptr [ECX + 0xd0]
0068e3ef  FCOMP float ptr [0x00890968]
0068e3f5  FNSTSW AX
0068e3f7  TEST AH,0x41
0068e3fa  JNZ 0x0068e3fe
0068e3fc  FCHS
0068e3fe  FADD float ptr [ECX + 0xe4]
0068e404  FST float ptr [ECX + 0xe4]
0068e40a  FLD float ptr [ECX + 0xd0]
0068e410  FCOMP float ptr [0x00890968]
0068e416  FLD float ptr [ESP + 0x4]
0068e41a  FNSTSW AX
0068e41c  TEST AH,0x41
0068e41f  JNZ 0x0068e423
0068e421  FCHS
0068e423  FADDP
0068e425  FST float ptr [ECX + 0xe4]
0068e42b  FADD float ptr [ECX + 0xe0]
0068e431  FDIV float ptr [0x008f8ab0]
0068e437  FST float ptr [ECX + 0x108]
0068e43d  FMUL float ptr [ESP + 0xc]
0068e441  FADD float ptr [ECX + 0xd0]
0068e447  FSTP float ptr [ECX + 0xd0]
0068e44d  CALL 0x0068e2e0
0068e452  MOV dword ptr [ECX + 0xd8],EBX
0068e458  MOV dword ptr [ECX + 0xdc],EBX
0068e45e  POP EBX
0068e45f  POP ECX
0068e460  RET 0x4
