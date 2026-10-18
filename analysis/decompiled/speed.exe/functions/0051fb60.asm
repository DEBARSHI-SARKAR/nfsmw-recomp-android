0051fb60  SUB ESP,0x14
0051fb63  MOV EAX,[0x0092d87c]
0051fb68  PUSH ESI
0051fb69  MOV ESI,ECX
0051fb6b  MOV ECX,dword ptr [EAX]
0051fb6d  MOV EDX,dword ptr [ECX]
0051fb6f  CALL dword ptr [EDX + 0x4]
0051fb72  PUSH EAX
0051fb73  LEA EAX,[ESP + 0x14]
0051fb77  PUSH EAX
0051fb78  LEA ECX,[ESP + 0x10]
0051fb7c  PUSH ECX
0051fb7d  CALL 0x00579840
0051fb82  FLD float ptr [ESP + 0x14]
0051fb86  MOV EAX,dword ptr [ESI + 0x13c]
0051fb8c  FSUB float ptr [EAX + 0xac]
0051fb92  ADD ESP,0xc
0051fb95  FDIV float ptr [EAX + 0xb4]
0051fb9b  FSTP float ptr [ESP + 0x8]
0051fb9f  FLD float ptr [EAX + 0xb0]
0051fba5  FSUB float ptr [ESP + 0xc]
0051fba9  FDIV float ptr [EAX + 0xb4]
0051fbaf  MOV EAX,dword ptr [ESI + 0x168]
0051fbb5  DEC EAX
0051fbb6  FADD float ptr [0x0089096c]
0051fbbc  FSTP float ptr [ESP + 0xc]
0051fbc0  FLD float ptr [0x0089096c]
0051fbc6  JZ 0x0051fbe2
0051fbc8  DEC EAX
0051fbc9  JZ 0x0051fbd8
0051fbcb  DEC EAX
0051fbcc  JNZ 0x0051fbea
0051fbce  FSTP ST0
0051fbd0  FLD float ptr [0x00890da4]
0051fbd6  JMP 0x0051fbea
0051fbd8  FSTP ST0
0051fbda  FLD float ptr [0x0089b1f0]
0051fbe0  JMP 0x0051fbea
0051fbe2  FSTP ST0
0051fbe4  FLD float ptr [0x00890d3c]
0051fbea  FDIVR float ptr [0x0089096c]
0051fbf0  FMUL float ptr [0x008933d4]
0051fbf6  FLD float ptr [0x0089096c]
0051fbfc  FSUB ST0,ST1
0051fbfe  FST float ptr [ESP + 0x4]
0051fc02  FLD float ptr [ESP + 0x8]
0051fc06  FCOMP ST2
0051fc08  FNSTSW AX
0051fc0a  TEST AH,0x41
0051fc0d  JNZ 0x0051fc15
0051fc0f  FLD float ptr [ESP + 0x8]
0051fc13  JMP 0x0051fc17
0051fc15  FLD ST1
0051fc17  FLD float ptr [ESP + 0x4]
0051fc1b  FCOMP
0051fc1d  FNSTSW AX
0051fc1f  TEST AH,0x5
0051fc22  JP 0x0051fc2a
0051fc24  FSTP ST0
0051fc26  FLD float ptr [ESP + 0x4]
0051fc2a  FSTP float ptr [ESP + 0x8]
0051fc2e  FSTP float ptr [ESP + 0x4]
0051fc32  FLD float ptr [ESP + 0xc]
0051fc36  FCOMP
0051fc38  FNSTSW AX
0051fc3a  TEST AH,0x41
0051fc3d  JNZ 0x0051fc45
0051fc3f  FSTP ST0
0051fc41  FLD float ptr [ESP + 0xc]
0051fc45  FLD float ptr [ESP + 0x4]
0051fc49  FCOMP
0051fc4b  FNSTSW AX
0051fc4d  TEST AH,0x5
0051fc50  JP 0x0051fc58
0051fc52  FSTP ST0
0051fc54  FLD float ptr [ESP + 0x4]
0051fc58  MOV ESI,dword ptr [ESI + 0x160]
0051fc5e  FSTP float ptr [ESP + 0xc]
0051fc62  LEA EDX,[ESP + 0x8]
0051fc66  ADD ESI,0x74
0051fc69  PUSH EDX
0051fc6a  MOV ECX,ESI
0051fc6c  CALL 0x00651550
0051fc71  MOV EAX,dword ptr [ESI + 0x8]
0051fc74  MOV ECX,dword ptr [ESI + 0xc]
0051fc77  MOV dword ptr [ESI],EAX
0051fc79  MOV dword ptr [ESI + 0x4],ECX
0051fc7c  XOR EAX,EAX
0051fc7e  MOV word ptr [ESI + 0x28],AX
0051fc82  MOV EDX,dword ptr [ESI + 0x34]
0051fc85  MOV ECX,dword ptr [ESI + 0x38]
0051fc88  MOV dword ptr [ESI + 0x2c],EDX
0051fc8b  MOV dword ptr [ESI + 0x30],ECX
0051fc8e  MOV word ptr [ESI + 0x54],AX
0051fc92  POP ESI
0051fc93  ADD ESP,0x14
0051fc96  RET
