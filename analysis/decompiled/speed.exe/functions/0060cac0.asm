0060cac0  PUSH 0x0
0060cac2  PUSH 0x18
0060cac4  MOV ECX,0x925b30
0060cac9  CALL 0x005d29d0
0060cace  TEST EAX,EAX
0060cad0  JZ 0x0060cad8
0060cad2  MOV dword ptr [EAX],0x0
0060cad8  LEA ECX,[EAX + 0x4]
0060cadb  TEST ECX,ECX
0060cadd  JZ 0x0060cae5
0060cadf  MOV dword ptr [ECX],0x0
0060cae5  LEA ECX,[EAX + 0x8]
0060cae8  TEST ECX,ECX
0060caea  JZ 0x0060caf2
0060caec  MOV dword ptr [ECX],0x0
0060caf2  MOV byte ptr [EAX + 0x14],0x1
0060caf6  MOV byte ptr [EAX + 0x15],0x0
0060cafa  RET
