005dbbc0  PUSH ECX
005dbbc1  PUSH ESI
005dbbc2  LEA EAX,[ESP + 0x4]
005dbbc6  PUSH EAX
005dbbc7  MOV ESI,ECX
005dbbc9  CALL 0x005dbb40
005dbbce  MOV ECX,dword ptr [ESP + 0x8]
005dbbd2  ADD ESP,0x4
005dbbd5  XOR EAX,EAX
005dbbd7  MOV dword ptr [ESI],ECX
005dbbd9  MOV dword ptr [ESI + 0x4],EAX
005dbbdc  MOV dword ptr [ESI + 0xc],EAX
005dbbdf  MOV dword ptr [ESI + 0x8],0x10
005dbbe6  MOV EAX,ESI
005dbbe8  POP ESI
005dbbe9  POP ECX
005dbbea  RET
