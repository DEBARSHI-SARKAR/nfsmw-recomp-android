00605ba0  MOV EDX,dword ptr [ESP + 0x8]
00605ba4  TEST EDX,EDX
00605ba6  PUSH ESI
00605ba7  MOV ESI,dword ptr [ESP + 0x8]
00605bab  JLE 0x00605bb6
00605bad  MOV EAX,dword ptr [ESI + 0xc]
00605bb0  LEA EAX,[EAX + EDX*0x8 + -0x8]
00605bb4  JMP 0x00605bbd
00605bb6  MOV EAX,ESI
00605bb8  CALL 0x00605950
00605bbd  MOV EDX,dword ptr [EAX]
00605bbf  MOV ECX,dword ptr [ESI + 0x8]
00605bc2  MOV dword ptr [ECX],EDX
00605bc4  MOV EAX,dword ptr [EAX + 0x4]
00605bc7  MOV dword ptr [ECX + 0x4],EAX
00605bca  ADD dword ptr [ESI + 0x8],0x8
00605bce  POP ESI
00605bcf  RET
