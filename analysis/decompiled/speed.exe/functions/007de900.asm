007de900  PUSH EBP
007de901  MOV EBP,ESP
007de903  SUB ESP,0x18
007de906  MOV dword ptr [EBP + -0x8],0x0
007de90d  MOV EAX,dword ptr [EBP + 0x8]
007de910  MOVZX ECX,word ptr [EAX + 0xa]
007de914  AND ECX,0x7fff
007de91a  MOV word ptr [EBP + -0x4],CX
007de91e  MOV EDX,dword ptr [EBP + 0x8]
007de921  MOVZX EAX,word ptr [EDX + 0xa]
007de925  AND EAX,0x8000
007de92a  MOV word ptr [EBP + -0x18],AX
007de92e  MOV ECX,dword ptr [EBP + 0x8]
007de931  MOV EDX,dword ptr [ECX + 0x6]
007de934  MOV dword ptr [EBP + -0x14],EDX
007de937  MOV EAX,dword ptr [EBP + 0x8]
007de93a  MOV ECX,dword ptr [EAX + 0x2]
007de93d  MOV dword ptr [EBP + -0x10],ECX
007de940  MOV EDX,dword ptr [EBP + 0x8]
007de943  MOVZX EAX,word ptr [EDX]
007de946  SHL EAX,0x10
007de949  MOV dword ptr [EBP + -0xc],EAX
007de94c  PUSH 0x40
007de94e  LEA ECX,[EBP + -0x14]
007de951  PUSH ECX
007de952  CALL 0x007de3f0
007de957  ADD ESP,0x8
007de95a  TEST EAX,EAX
007de95c  JZ 0x007de971
007de95e  MOV dword ptr [EBP + -0x14],0x80000000
007de965  MOV DX,word ptr [EBP + -0x4]
007de969  ADD DX,0x1
007de96d  MOV word ptr [EBP + -0x4],DX
007de971  MOVZX EAX,word ptr [EBP + -0x4]
007de975  CMP EAX,0x7fff
007de97a  JNZ 0x007de983
007de97c  MOV dword ptr [EBP + -0x8],0x1
007de983  MOV ECX,dword ptr [EBP + 0xc]
007de986  MOV EDX,dword ptr [EBP + -0x14]
007de989  MOV dword ptr [ECX + 0x4],EDX
007de98c  MOV EAX,dword ptr [EBP + 0xc]
007de98f  MOV ECX,dword ptr [EBP + -0x10]
007de992  MOV dword ptr [EAX],ECX
007de994  MOVZX EDX,word ptr [EBP + -0x18]
007de998  MOVZX EAX,word ptr [EBP + -0x4]
007de99c  OR EDX,EAX
007de99e  MOV ECX,dword ptr [EBP + 0xc]
007de9a1  MOV word ptr [ECX + 0x8],DX
007de9a5  MOV EAX,dword ptr [EBP + -0x8]
007de9a8  MOV ESP,EBP
007de9aa  POP EBP
007de9ab  RET
