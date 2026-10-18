007df320  PUSH EBP
007df321  MOV EBP,ESP
007df323  SUB ESP,0x10
007df326  MOV EAX,dword ptr [EBP + 0x10]
007df329  MOV dword ptr [EBP + -0x4],EAX
007df32c  CMP dword ptr [EBP + 0x18],0x0
007df330  JZ 0x007df354
007df332  MOV ECX,dword ptr [EBP + -0x4]
007df335  MOV byte ptr [ECX],0x2d
007df338  MOV EDX,dword ptr [EBP + -0x4]
007df33b  ADD EDX,0x1
007df33e  MOV dword ptr [EBP + -0x4],EDX
007df341  MOV EAX,dword ptr [EBP + 0x8]
007df344  NEG EAX
007df346  MOV ECX,dword ptr [EBP + 0xc]
007df349  ADC ECX,0x0
007df34c  NEG ECX
007df34e  MOV dword ptr [EBP + 0x8],EAX
007df351  MOV dword ptr [EBP + 0xc],ECX
007df354  MOV EDX,dword ptr [EBP + -0x4]
007df357  MOV dword ptr [EBP + -0x10],EDX
007df35a  MOV EAX,dword ptr [EBP + 0x14]
007df35d  XOR ECX,ECX
007df35f  PUSH ECX
007df360  PUSH EAX
007df361  MOV EDX,dword ptr [EBP + 0xc]
007df364  PUSH EDX
007df365  MOV EAX,dword ptr [EBP + 0x8]
007df368  PUSH EAX
007df369  CALL 0x007dcac0
007df36e  MOV dword ptr [EBP + -0x8],EAX
007df371  MOV ECX,dword ptr [EBP + 0x14]
007df374  XOR EDX,EDX
007df376  PUSH EDX
007df377  PUSH ECX
007df378  MOV EAX,dword ptr [EBP + 0xc]
007df37b  PUSH EAX
007df37c  MOV ECX,dword ptr [EBP + 0x8]
007df37f  PUSH ECX
007df380  CALL 0x007dcb40
007df385  MOV dword ptr [EBP + 0x8],EAX
007df388  MOV dword ptr [EBP + 0xc],EDX
007df38b  CMP dword ptr [EBP + -0x8],0x9
007df38f  JBE 0x007df3a7
007df391  MOV EDX,dword ptr [EBP + -0x8]
007df394  ADD EDX,0x57
007df397  MOV EAX,dword ptr [EBP + -0x4]
007df39a  MOV byte ptr [EAX],DL
007df39c  MOV ECX,dword ptr [EBP + -0x4]
007df39f  ADD ECX,0x1
007df3a2  MOV dword ptr [EBP + -0x4],ECX
007df3a5  JMP 0x007df3bb
007df3a7  MOV EDX,dword ptr [EBP + -0x8]
007df3aa  ADD EDX,0x30
007df3ad  MOV EAX,dword ptr [EBP + -0x4]
007df3b0  MOV byte ptr [EAX],DL
007df3b2  MOV ECX,dword ptr [EBP + -0x4]
007df3b5  ADD ECX,0x1
007df3b8  MOV dword ptr [EBP + -0x4],ECX
007df3bb  CMP dword ptr [EBP + 0xc],0x0
007df3bf  JA 0x007df35a
007df3c1  JC 0x007df3c9
007df3c3  CMP dword ptr [EBP + 0x8],0x0
007df3c7  JA 0x007df35a
007df3c9  MOV EDX,dword ptr [EBP + -0x4]
007df3cc  MOV byte ptr [EDX],0x0
007df3cf  MOV EAX,dword ptr [EBP + -0x4]
007df3d2  SUB EAX,0x1
007df3d5  MOV dword ptr [EBP + -0x4],EAX
007df3d8  MOV ECX,dword ptr [EBP + -0x4]
007df3db  MOV DL,byte ptr [ECX]
007df3dd  MOV byte ptr [EBP + -0x9],DL
007df3e0  MOV EAX,dword ptr [EBP + -0x4]
007df3e3  MOV ECX,dword ptr [EBP + -0x10]
007df3e6  MOV DL,byte ptr [ECX]
007df3e8  MOV byte ptr [EAX],DL
007df3ea  MOV EAX,dword ptr [EBP + -0x10]
007df3ed  MOV CL,byte ptr [EBP + -0x9]
007df3f0  MOV byte ptr [EAX],CL
007df3f2  MOV EDX,dword ptr [EBP + -0x4]
007df3f5  SUB EDX,0x1
007df3f8  MOV dword ptr [EBP + -0x4],EDX
007df3fb  MOV EAX,dword ptr [EBP + -0x10]
007df3fe  ADD EAX,0x1
007df401  MOV dword ptr [EBP + -0x10],EAX
007df404  MOV ECX,dword ptr [EBP + -0x10]
007df407  CMP ECX,dword ptr [EBP + -0x4]
007df40a  JC 0x007df3d8
007df40c  MOV ESP,EBP
007df40e  POP EBP
007df40f  RET 0x14
