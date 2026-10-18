006ed9d0  SUB ESP,0x28
006ed9d3  FLD float ptr [0x0089096c]
006ed9d9  MOV ECX,dword ptr [ESP + 0x30]
006ed9dd  FDIV float ptr [ESP + 0x3c]
006ed9e1  PUSH ESI
006ed9e2  PUSH EDI
006ed9e3  LEA EAX,[ESP + 0x24]
006ed9e7  PUSH EAX
006ed9e8  PUSH ECX
006ed9e9  FSTP float ptr [ESP + 0x10]
006ed9ed  CALL 0x0040fe20
006ed9f2  FLD float ptr [ESP + 0x30]
006ed9f6  FMUL float ptr [ESP + 0x10]
006ed9fa  MOV EDX,dword ptr [ESP + 0x3c]
006ed9fe  MOV EAX,dword ptr [EDX]
006eda00  MOV ECX,dword ptr [EDX + 0x4]
006eda03  MOV EDX,dword ptr [EDX + 0x8]
006eda06  MOV EDI,dword ptr [ESP + 0x44]
006eda0a  FSTP float ptr [ESP + 0x30]
006eda0e  MOV ESI,dword ptr [ESP + 0x50]
006eda12  MOV dword ptr [ESP + 0x20],EAX
006eda16  MOV dword ptr [ESP + 0x24],ECX
006eda1a  FLD float ptr [ESP + 0x24]
006eda1e  FMUL float ptr [ESP + 0x10]
006eda22  MOV EAX,EDI
006eda24  MOV ECX,dword ptr [EAX]
006eda26  MOV dword ptr [ESP + 0x28],EDX
006eda2a  MOV EDX,dword ptr [EAX + 0x4]
006eda2d  FSTP float ptr [ESP + 0x24]
006eda31  MOV EAX,dword ptr [EAX + 0x8]
006eda34  MOV dword ptr [ESP + 0x14],ECX
006eda38  MOV ECX,dword ptr [ESP + 0x48]
006eda3c  PUSH ESI
006eda3d  MOV dword ptr [ESP + 0x1c],EDX
006eda41  FLD float ptr [ESP + 0x1c]
006eda45  FMUL float ptr [ESP + 0x14]
006eda49  PUSH ECX
006eda4a  LEA EDX,[ESP + 0x1c]
006eda4e  MOV dword ptr [ESP + 0x24],EAX
006eda52  PUSH EDX
006eda53  FSTP float ptr [ESP + 0x24]
006eda57  LEA EAX,[ESP + 0x38]
006eda5b  PUSH EAX
006eda5c  LEA ECX,[ESP + 0x30]
006eda60  PUSH ECX
006eda61  CALL 0x006ed600
006eda66  ADD ESP,0x1c
006eda69  TEST EAX,EAX
006eda6b  JZ 0x006eda81
006eda6d  FLD float ptr [ESI + 0x4]
006eda70  FSUB float ptr [ESP + 0x10]
006eda74  FMUL float ptr [ESP + 0x44]
006eda78  FST float ptr [ESI + 0x4]
006eda7b  FADD float ptr [EDI + 0x4]
006eda7e  FSTP float ptr [ESI + 0x4]
006eda81  POP EDI
006eda82  POP ESI
006eda83  ADD ESP,0x28
006eda86  RET
