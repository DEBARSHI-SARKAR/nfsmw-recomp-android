005bd930  PUSH -0x1
005bd932  PUSH 0x874271
005bd937  MOV EAX,FS:[0x0]
005bd93d  PUSH EAX
005bd93e  MOV dword ptr FS:[0x0],ESP
005bd945  PUSH ECX
005bd946  PUSH ESI
005bd947  MOV ESI,ECX
005bd949  MOV dword ptr [ESP + 0x4],ESI
005bd94d  MOV dword ptr [ESI],0x8a2e18
005bd953  MOV EAX,dword ptr [ESI + 0x2010]
005bd959  TEST EAX,EAX
005bd95b  MOV dword ptr [ESP + 0x10],0x1
005bd963  JZ 0x005bd9c5
005bd965  MOV EDX,0xabadcafe
005bd96a  PUSH EDI
005bd96b  JMP 0x005bd970
005bd970  MOV EAX,dword ptr [ESI + 0x2014]
005bd976  TEST EAX,EAX
005bd978  JZ 0x005bd9ba
005bd97a  MOV ECX,dword ptr [EAX + 0x4]
005bd97d  MOV dword ptr [ESI + 0x2014],ECX
005bd983  CMP EAX,dword ptr [ESI + 0x2018]
005bd989  JNZ 0x005bd994
005bd98b  MOV ECX,dword ptr [EAX + 0x8]
005bd98e  MOV dword ptr [ESI + 0x2018],ECX
005bd994  MOV ECX,dword ptr [EAX + 0x8]
005bd997  TEST ECX,ECX
005bd999  JZ 0x005bd9a1
005bd99b  MOV EDI,dword ptr [EAX + 0x4]
005bd99e  MOV dword ptr [ECX + 0x4],EDI
005bd9a1  MOV ECX,dword ptr [EAX + 0x4]
005bd9a4  TEST ECX,ECX
005bd9a6  JZ 0x005bd9ae
005bd9a8  MOV EDI,dword ptr [EAX + 0x8]
005bd9ab  MOV dword ptr [ECX + 0x8],EDI
005bd9ae  MOV dword ptr [EAX + 0x4],EDX
005bd9b1  MOV dword ptr [EAX + 0x8],EDX
005bd9b4  DEC dword ptr [ESI + 0x2010]
005bd9ba  MOV EAX,dword ptr [ESI + 0x2010]
005bd9c0  TEST EAX,EAX
005bd9c2  JNZ 0x005bd970
005bd9c4  POP EDI
005bd9c5  LEA ECX,[ESI + 0x200c]
005bd9cb  MOV dword ptr [ECX],0x8a2c18
005bd9d1  CALL 0x005b3b20
005bd9d6  PUSH 0x5ad560
005bd9db  PUSH 0x100
005bd9e0  PUSH 0x20
005bd9e2  LEA EDX,[ESI + 0xc]
005bd9e5  PUSH EDX
005bd9e6  MOV byte ptr [ESP + 0x20],0x0
005bd9eb  CALL 0x007c8f50
005bd9f0  MOV ECX,dword ptr [ESP + 0x8]
005bd9f4  MOV dword ptr [ESI],0x8a2c14
005bd9fa  POP ESI
005bd9fb  MOV dword ptr FS:[0x0],ECX
005bda02  ADD ESP,0x10
005bda05  RET
