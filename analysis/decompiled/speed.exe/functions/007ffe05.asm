007ffe05  PUSH EBP
007ffe06  MOV EBP,ESP
007ffe08  MOV EAX,dword ptr [EBP + 0x8]
007ffe0b  PUSH dword ptr [EAX + 0x1a0]
007ffe11  MOVZX ECX,byte ptr [EAX + 0x19c]
007ffe18  PUSH dword ptr [EAX + 0x93c]
007ffe1e  PUSH dword ptr [EAX + 0x944]
007ffe24  PUSH dword ptr [EAX + 0x918]
007ffe2a  PUSH ECX
007ffe2b  PUSH dword ptr [EAX + 0x1f4]
007ffe31  MOV ECX,dword ptr [EAX + 0x13c]
007ffe37  PUSH dword ptr [EAX + 0x1f8]
007ffe3d  PUSH dword ptr [EAX + 0x160]
007ffe43  PUSH dword ptr [EAX + 0x1e8]
007ffe49  PUSH dword ptr [ECX]
007ffe4b  MOVZX ECX,byte ptr [EAX + 0x1ac]
007ffe52  PUSH dword ptr [EAX + 0x69c]
007ffe58  PUSH ECX
007ffe59  MOV ECX,dword ptr [EAX + 0x1b8]
007ffe5f  INC ECX
007ffe60  LEA ECX,[ECX + ECX*0x2]
007ffe63  PUSH 0x8c4850
007ffe68  SHL ECX,0x4
007ffe6b  PUSH ECX
007ffe6c  PUSH EAX
007ffe6d  CALL 0x00806d1a
007ffe72  ADD ESP,0x3c
007ffe75  POP EBP
007ffe76  RET
