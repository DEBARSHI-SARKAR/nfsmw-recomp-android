007f9e82  LEA EAX,[ECX + 0x2c]
007f9e85  CMP dword ptr [EAX],EAX
007f9e87  JZ 0x007f9ec5
007f9e89  MOV EAX,dword ptr [EAX]
007f9e8b  MOV EDX,dword ptr [EAX]
007f9e8d  PUSH ESI
007f9e8e  MOV ESI,dword ptr [EAX + 0x4]
007f9e91  MOV dword ptr [ESI],EDX
007f9e93  MOV dword ptr [EDX + 0x4],ESI
007f9e96  PUSH 0xb
007f9e98  POP EDX
007f9e99  MOV dword ptr [EAX],EDX
007f9e9b  MOV dword ptr [EAX + 0x4],EDX
007f9e9e  ADD EAX,-0x8
007f9ea1  MOV EDX,EAX
007f9ea3  NEG EDX
007f9ea5  LEA ESI,[EAX + 0x8]
007f9ea8  SBB EDX,EDX
007f9eaa  AND EDX,ESI
007f9eac  MOV ESI,dword ptr [ECX + 0x28]
007f9eaf  ADD ECX,0x24
007f9eb2  MOV dword ptr [ESI],EDX
007f9eb4  MOV dword ptr [ECX + 0x4],EDX
007f9eb7  MOV dword ptr [EDX + 0x4],ESI
007f9eba  MOV dword ptr [EDX],ECX
007f9ebc  MOV dword ptr [EAX + 0x10],0x1
007f9ec3  POP ESI
007f9ec4  RET
007f9ec5  PUSH 0x8c27e8
007f9eca  CALL 0x00862d36
007f9ecf  POP ECX
007f9ed0  XOR EAX,EAX
007f9ed2  RET
