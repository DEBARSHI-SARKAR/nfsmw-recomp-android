00691cb0  PUSH ESI
00691cb1  MOV ESI,ECX
00691cb3  MOV EDX,dword ptr [ESI + 0x12c]
00691cb9  MOV EAX,dword ptr [ESI + -0x54]
00691cbc  LEA ECX,[ESI + -0x54]
00691cbf  PUSH EDX
00691cc0  CALL dword ptr [EAX + 0x50]
00691cc3  FMUL float ptr [ESI + 0x38]
00691cc6  FMUL float ptr [ESI + 0x12c]
00691ccc  POP ESI
00691ccd  FMUL float ptr [0x008aae88]
00691cd3  FMUL float ptr [0x008a9390]
00691cd9  RET
