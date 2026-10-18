0040bcc0  CMP dword ptr [ECX + 0x18],0x10
0040bcc4  JC 0x0040bcca
0040bcc6  MOV EAX,dword ptr [ECX + 0x4]
0040bcc9  RET
0040bcca  LEA EAX,[ECX + 0x4]
0040bccd  RET
