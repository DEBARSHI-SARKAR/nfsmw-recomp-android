006c1ba0  SUB ESP,0x8
006c1ba3  MOV ECX,dword ptr [ESP + 0x14]
006c1ba7  MOV EAX,0x4
006c1bac  MOV dword ptr [ESP + 0x4],EAX
006c1bb0  MOV dword ptr [ESP],EAX
006c1bb3  LEA EAX,[ESP]
006c1bb6  PUSH EAX
006c1bb7  MOV EAX,dword ptr [ESP + 0x14]
006c1bbb  PUSH ECX
006c1bbc  MOV ECX,dword ptr [ESP + 0x14]
006c1bc0  LEA EDX,[ESP + 0xc]
006c1bc4  PUSH EDX
006c1bc5  MOV EDX,dword ptr [ECX]
006c1bc7  PUSH 0x0
006c1bc9  PUSH EAX
006c1bca  PUSH EDX
006c1bcb  CALL dword ptr [0x00890010]
006c1bd1  ADD ESP,0x8
006c1bd4  RET
