005dbaf0  PUSH ECX
005dbaf1  PUSH ESI
005dbaf2  LEA EAX,[ESP + 0x4]
005dbaf6  PUSH EAX
005dbaf7  MOV ESI,ECX
005dbaf9  CALL 0x005dba70
005dbafe  MOV ECX,dword ptr [ESP + 0x8]
005dbb02  ADD ESP,0x4
005dbb05  XOR EAX,EAX
005dbb07  MOV dword ptr [ESI],ECX
005dbb09  MOV dword ptr [ESI + 0x4],EAX
005dbb0c  MOV dword ptr [ESI + 0xc],EAX
005dbb0f  MOV dword ptr [ESI + 0x8],0x10
005dbb16  MOV EAX,ESI
005dbb18  POP ESI
005dbb19  POP ECX
005dbb1a  RET
