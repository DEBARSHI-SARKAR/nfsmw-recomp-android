0040a430  SUB ESP,0x64
0040a433  PUSH ESI
0040a434  MOV ESI,dword ptr [ESP + 0x6c]
0040a438  MOV EAX,dword ptr [ESI]
0040a43a  LEA ECX,[ESP + 0x10]
0040a43e  PUSH ECX
0040a43f  MOV ECX,ESI
0040a441  CALL dword ptr [EAX + 0x10]
0040a444  MOV EDX,dword ptr [ESI]
0040a446  LEA EAX,[ESP + 0x28]
0040a44a  PUSH EAX
0040a44b  MOV ECX,ESI
0040a44d  CALL dword ptr [EDX + 0x4]
0040a450  FLD float ptr [ESP + 0x18]
0040a454  FCOMP float ptr [ESP + 0x10]
0040a458  MOV EAX,dword ptr [ESP + 0x60]
0040a45c  MOV ECX,dword ptr [ESP + 0x58]
0040a460  MOV EDX,dword ptr [ESP + 0x5c]
0040a464  MOV dword ptr [ESP + 0x24],EAX
0040a468  FNSTSW AX
0040a46a  MOV dword ptr [ESP + 0x1c],ECX
0040a46e  MOV dword ptr [ESP + 0x20],EDX
0040a472  TEST AH,0x41
0040a475  POP ESI
0040a476  JNZ 0x0040a486
0040a478  MOV ECX,dword ptr [ESP + 0x44]
0040a47c  MOV EDX,dword ptr [ESP + 0x48]
0040a480  MOV EAX,dword ptr [ESP + 0x4c]
0040a484  JMP 0x0040a492
0040a486  MOV ECX,dword ptr [ESP + 0x24]
0040a48a  MOV EDX,dword ptr [ESP + 0x28]
0040a48e  MOV EAX,dword ptr [ESP + 0x2c]
0040a492  FLD float ptr [ESP + 0x14]
0040a496  MOV dword ptr [ESP + 0x8],EAX
0040a49a  FCOMP float ptr [ESP + 0xc]
0040a49e  MOV dword ptr [ESP],ECX
0040a4a1  MOV dword ptr [ESP + 0x4],EDX
0040a4a5  FNSTSW AX
0040a4a7  TEST AH,0x5
0040a4aa  JP 0x0040a4b6
0040a4ac  MOV ECX,dword ptr [ESP + 0x14]
0040a4b0  MOV dword ptr [ESP + 0x68],ECX
0040a4b4  JMP 0x0040a4be
0040a4b6  MOV EDX,dword ptr [ESP + 0xc]
0040a4ba  MOV dword ptr [ESP + 0x68],EDX
0040a4be  FLD float ptr [ESP + 0x14]
0040a4c2  FCOMP float ptr [ESP + 0xc]
0040a4c6  FNSTSW AX
0040a4c8  TEST AH,0x41
0040a4cb  JNZ 0x0040a4d3
0040a4cd  FLD float ptr [ESP + 0x14]
0040a4d1  JMP 0x0040a4d7
0040a4d3  FLD float ptr [ESP + 0xc]
0040a4d7  FLD float ptr [ESP + 0x68]
0040a4db  MOV EAX,dword ptr [ESP + 0x6c]
0040a4df  FMUL float ptr [ESP + 0x68]
0040a4e3  PUSH ECX
0040a4e4  FLD ST0
0040a4e6  FDIV ST0,ST2
0040a4e8  FXCH ST2
0040a4ea  FSUB ST0,ST2
0040a4ec  FLD float ptr [ESP + 0x4]
0040a4f0  FMUL ST1
0040a4f2  FADD float ptr [ESP + 0x1c]
0040a4f6  FSTP float ptr [EAX]
0040a4f8  FLD float ptr [ESP + 0x8]
0040a4fc  FMUL ST1
0040a4fe  FADD float ptr [ESP + 0x20]
0040a502  FSTP float ptr [EAX + 0x4]
0040a505  FLD float ptr [ESP + 0xc]
0040a509  FMUL ST1
0040a50b  FADD float ptr [ESP + 0x24]
0040a50f  FSTP float ptr [EAX + 0x8]
0040a512  MOV EAX,dword ptr [ESP + 0x74]
0040a516  FCHS
0040a518  FLD float ptr [ESP + 0x4]
0040a51c  FMUL ST1
0040a51e  FADD float ptr [ESP + 0x1c]
0040a522  FSTP float ptr [EAX]
0040a524  FLD float ptr [ESP + 0x8]
0040a528  FMUL ST1
0040a52a  FADD float ptr [ESP + 0x20]
0040a52e  FSTP float ptr [EAX + 0x4]
0040a531  FLD float ptr [ESP + 0xc]
0040a535  FMUL ST1
0040a537  FADD float ptr [ESP + 0x24]
0040a53b  FSTP float ptr [EAX + 0x8]
0040a53e  FSTP ST0
0040a540  FXCH
0040a542  FLD ST0
0040a544  FMUL ST1
0040a546  FADD ST0,ST2
0040a548  FSTP float ptr [ESP]
0040a54b  FSTP ST0
0040a54d  FSTP ST0
0040a54f  CALL 0x005c5e80
0040a554  MOV EAX,dword ptr [ESP + 0x78]
0040a558  FSTP float ptr [EAX]
0040a55a  ADD ESP,0x68
0040a55d  RET
