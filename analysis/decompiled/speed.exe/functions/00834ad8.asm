00834ad8  MOV ECX,dword ptr [ESP + 0x4]
00834adc  MOVZX EAX,byte ptr [ECX + 0x6]
00834ae0  LEA EDX,[EAX + EAX*0x1 + 0x3]
00834ae4  MOV EAX,dword ptr [ESP + 0x8]
00834ae8  AND EDX,0xfffffffc
00834aeb  LEA EAX,[EAX + EAX*0x2 + 0xc]
00834aef  ADD EDX,ECX
00834af1  MOVZX EAX,byte ptr [EAX + EDX*0x1]
00834af5  RET
