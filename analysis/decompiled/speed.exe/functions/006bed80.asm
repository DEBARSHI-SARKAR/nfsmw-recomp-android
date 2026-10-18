006bed80  MOV ECX,dword ptr [ECX]
006bed82  MOV EAX,dword ptr [ECX + 0x18]
006bed85  MOV ECX,dword ptr [EAX]
006bed87  SUB ESP,0x8
006bed8a  PUSH 0x0
006bed8c  PUSH 0x0
006bed8e  LEA EDX,[ESP + 0x8]
006bed92  PUSH EDX
006bed93  PUSH 0x0
006bed95  PUSH EAX
006bed96  CALL dword ptr [ECX + 0x4c]
006bed99  MOV EAX,dword ptr [ESP + 0x4]
006bed9d  ADD ESP,0x8
006beda0  RET 0x4
