00486e30  SUB ESP,0x18
00486e33  PUSH ESI
00486e34  LEA EAX,[ESP + 0x4]
00486e38  MOV ESI,ECX
00486e3a  PUSH EAX
00486e3b  LEA ECX,[ESI + 0x8c]
00486e41  PUSH ESI
00486e42  PUSH ECX
00486e43  CALL 0x00401670
00486e48  FLD float ptr [ESP + 0x10]
00486e4c  FADD float ptr [ESI + 0xb0]
00486e52  MOV EAX,dword ptr [ESP + 0x2c]
00486e56  FLD float ptr [ESP + 0x14]
00486e5a  ADD ESP,0xc
00486e5d  FADD float ptr [ESI + 0xb4]
00486e63  FSTP float ptr [ESP + 0x14]
00486e67  FLD float ptr [ESP + 0xc]
00486e6b  FADD float ptr [ESI + 0xb8]
00486e71  POP ESI
00486e72  FSTP float ptr [ESP + 0x14]
00486e76  FSUBR float ptr [EAX]
00486e78  FLD float ptr [EAX + 0x4]
00486e7b  FSUB float ptr [ESP + 0x10]
00486e7f  FLD float ptr [EAX + 0x8]
00486e82  MOV EAX,dword ptr [ESP + 0x20]
00486e86  FSUB float ptr [ESP + 0x14]
00486e8a  FSTP float ptr [ESP + 0x14]
00486e8e  MOV EDX,dword ptr [ESP + 0x14]
00486e92  FXCH
00486e94  MOV dword ptr [ESP + 0x8],EDX
00486e98  FSTP float ptr [ESP]
00486e9b  MOV ECX,dword ptr [ESP]
00486e9e  MOV dword ptr [EAX],ECX
00486ea0  MOV ECX,dword ptr [ESP + 0x8]
00486ea4  FSTP float ptr [ESP + 0x4]
00486ea8  MOV EDX,dword ptr [ESP + 0x4]
00486eac  MOV dword ptr [EAX + 0x4],EDX
00486eaf  MOV dword ptr [EAX + 0x8],ECX
00486eb2  ADD ESP,0x18
00486eb5  RET 0x8
