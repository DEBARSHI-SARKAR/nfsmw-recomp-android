006efef0  PUSH 0x0
006efef2  PUSH 0x18
006efef4  MOV ECX,0x925b30
006efef9  CALL 0x005d29d0
006efefe  TEST EAX,EAX
006eff00  JZ 0x006eff08
006eff02  MOV dword ptr [EAX],0x0
006eff08  LEA ECX,[EAX + 0x4]
006eff0b  TEST ECX,ECX
006eff0d  JZ 0x006eff15
006eff0f  MOV dword ptr [ECX],0x0
006eff15  LEA ECX,[EAX + 0x8]
006eff18  TEST ECX,ECX
006eff1a  JZ 0x006eff22
006eff1c  MOV dword ptr [ECX],0x0
006eff22  MOV byte ptr [EAX + 0x14],0x1
006eff26  MOV byte ptr [EAX + 0x15],0x0
006eff2a  RET
