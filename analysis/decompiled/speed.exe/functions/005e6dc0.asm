005e6dc0  PUSH 0x0
005e6dc2  PUSH 0x24
005e6dc4  MOV ECX,0x925b30
005e6dc9  CALL 0x005d29d0
005e6dce  TEST EAX,EAX
005e6dd0  JZ 0x005e6dd8
005e6dd2  MOV dword ptr [EAX],0x0
005e6dd8  LEA ECX,[EAX + 0x4]
005e6ddb  TEST ECX,ECX
005e6ddd  JZ 0x005e6de5
005e6ddf  MOV dword ptr [ECX],0x0
005e6de5  LEA ECX,[EAX + 0x8]
005e6de8  TEST ECX,ECX
005e6dea  JZ 0x005e6df2
005e6dec  MOV dword ptr [ECX],0x0
005e6df2  MOV byte ptr [EAX + 0x20],0x1
005e6df6  MOV byte ptr [EAX + 0x21],0x0
005e6dfa  RET
