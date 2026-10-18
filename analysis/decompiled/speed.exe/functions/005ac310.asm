005ac310  PUSH EBP
005ac311  MOV EBP,ESP
005ac313  SUB ESP,0x110
005ac319  PUSH EAX
005ac31a  MOV EAX,0xcfcecdcc
005ac31f  MOV EAX,0x5ac31f
005ac324  MOV EAX,0x1
005ac329  MOV EAX,0x0
005ac32e  MOV EAX,0xcfcecdcc
005ac333  POP EAX
005ac334  MOV EAX,dword ptr [EBP + 0x18]
005ac337  MOV dword ptr [EBP + -0x4],EAX
005ac33a  MOV ECX,dword ptr [EBP + 0xc]
005ac33d  MOV dword ptr [EBP + 0xfffffef4],ECX
005ac343  CMP dword ptr [EBP + 0xfffffef4],0x16
005ac34a  JZ 0x005ac351
005ac34c  JMP 0x005ac3dc
005ac351  MOV EDX,dword ptr [EBP + 0x10]
005ac354  MOV dword ptr [EBP + 0xfffffef0],EDX
005ac35a  MOV EAX,dword ptr [EBP + 0xfffffef0]
005ac360  SUB EAX,0x2
005ac363  MOV dword ptr [EBP + 0xfffffef0],EAX
005ac369  CMP dword ptr [EBP + 0xfffffef0],0x4
005ac370  JA 0x005ac3dc
005ac372  MOV ECX,dword ptr [EBP + 0xfffffef0]
005ac378  JMP dword ptr [ECX*0x4 + 0x5ac3fe]
005ac37f  XOR EDX,EDX
005ac381  MOV byte ptr [EBP + -0x5],DL
005ac384  MOV EAX,dword ptr [EBP + 0x14]
005ac387  PUSH EAX
005ac388  LEA ECX,[EBP + -0x5]
005ac38b  CALL 0x005abe00
005ac390  JMP 0x005ac3dc
005ac392  XOR ECX,ECX
005ac394  MOV byte ptr [EBP + -0x6],CL
005ac397  MOV EDX,dword ptr [EBP + 0x14]
005ac39a  PUSH EDX
005ac39b  LEA ECX,[EBP + -0x6]
005ac39e  CALL 0x005abfe0
005ac3a3  JMP 0x005ac3dc
005ac3a5  XOR EAX,EAX
005ac3a7  MOV byte ptr [EBP + -0x7],AL
005ac3aa  MOV ECX,dword ptr [EBP + 0x14]
005ac3ad  PUSH ECX
005ac3ae  LEA ECX,[EBP + -0x7]
005ac3b1  CALL 0x005ac230
005ac3b6  JMP 0x005ac3dc
005ac3b8  XOR EDX,EDX
005ac3ba  MOV byte ptr [EBP + -0x8],DL
005ac3bd  MOV EAX,dword ptr [EBP + 0x14]
005ac3c0  PUSH EAX
005ac3c1  LEA ECX,[EBP + -0x8]
005ac3c4  CALL 0x005ac150
005ac3c9  JMP 0x005ac3dc
005ac3cb  XOR ECX,ECX
005ac3cd  MOV byte ptr [EBP + -0x9],CL
005ac3d0  MOV EDX,dword ptr [EBP + 0x14]
005ac3d3  PUSH EDX
005ac3d4  LEA ECX,[EBP + -0x9]
005ac3d7  CALL 0x005abf80
005ac3dc  PUSH EAX
005ac3dd  MOV EAX,0xcfcecdcc
005ac3e2  MOV EAX,0x5ac31f
005ac3e7  MOV EAX,0x0
005ac3ec  MOV EAX,0x0
005ac3f1  MOV EAX,0xcecdcccb
005ac3f6  POP EAX
005ac3f7  MOV EAX,dword ptr [EBP + -0x4]
005ac3fa  MOV ESP,EBP
005ac3fc  POP EBP
005ac3fd  RET
