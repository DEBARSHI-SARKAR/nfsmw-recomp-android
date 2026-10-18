00642d70  MOV dword ptr [ECX],0x0
00642d76  MOV dword ptr [ECX + 0x4],0xffffffff
00642d7d  MOV dword ptr [ECX + 0x8],0x0
00642d84  MOV ECX,dword ptr [ECX + 0x270]
00642d8a  TEST ECX,ECX
00642d8c  JZ 0x00642dad
00642d8e  MOV EDX,dword ptr [ECX + 0x4]
00642d91  MOV EAX,dword ptr [EDX]
00642d93  CMP EAX,EDX
00642d95  JZ 0x00642dad
00642d97  MOV EDX,0xbf800000
00642d9c  LEA ESP,[ESP]
00642da0  MOV dword ptr [EAX + 0x1c],EDX
00642da3  MOV dword ptr [EAX + 0x20],EDX
00642da6  MOV EAX,dword ptr [EAX]
00642da8  CMP EAX,dword ptr [ECX + 0x4]
00642dab  JNZ 0x00642da0
00642dad  RET
