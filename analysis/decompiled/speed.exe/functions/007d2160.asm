007d2160  PUSH EBP
007d2161  MOV EBP,ESP
007d2163  PUSH ECX
007d2164  MOV EAX,dword ptr [EBP + 0xc]
007d2167  MOV ECX,dword ptr [EAX + 0xc]
007d216a  AND ECX,0x40
007d216d  JZ 0x007d2187
007d216f  MOV EDX,dword ptr [EBP + 0xc]
007d2172  CMP dword ptr [EDX + 0x8],0x0
007d2176  JNZ 0x007d2187
007d2178  MOV EAX,dword ptr [EBP + 0x10]
007d217b  MOV ECX,dword ptr [EAX]
007d217d  ADD ECX,0x1
007d2180  MOV EDX,dword ptr [EBP + 0x10]
007d2183  MOV dword ptr [EDX],ECX
007d2185  JMP 0x007d21f7
007d2187  MOV EAX,dword ptr [EBP + 0xc]
007d218a  MOV ECX,dword ptr [EAX + 0x4]
007d218d  SUB ECX,0x1
007d2190  MOV EDX,dword ptr [EBP + 0xc]
007d2193  MOV dword ptr [EDX + 0x4],ECX
007d2196  MOV EAX,dword ptr [EBP + 0xc]
007d2199  CMP dword ptr [EAX + 0x4],0x0
007d219d  JL 0x007d21c5
007d219f  MOV ECX,dword ptr [EBP + 0xc]
007d21a2  MOV EDX,dword ptr [ECX]
007d21a4  MOV AL,byte ptr [EBP + 0x8]
007d21a7  MOV byte ptr [EDX],AL
007d21a9  MOVSX ECX,byte ptr [EBP + 0x8]
007d21ad  AND ECX,0xff
007d21b3  MOV dword ptr [EBP + -0x4],ECX
007d21b6  MOV EDX,dword ptr [EBP + 0xc]
007d21b9  MOV EAX,dword ptr [EDX]
007d21bb  ADD EAX,0x1
007d21be  MOV ECX,dword ptr [EBP + 0xc]
007d21c1  MOV dword ptr [ECX],EAX
007d21c3  JMP 0x007d21d9
007d21c5  MOV EDX,dword ptr [EBP + 0xc]
007d21c8  PUSH EDX
007d21c9  MOVSX EAX,byte ptr [EBP + 0x8]
007d21cd  PUSH EAX
007d21ce  CALL 0x007d47d0
007d21d3  ADD ESP,0x8
007d21d6  MOV dword ptr [EBP + -0x4],EAX
007d21d9  CMP dword ptr [EBP + -0x4],-0x1
007d21dd  JNZ 0x007d21ea
007d21df  MOV ECX,dword ptr [EBP + 0x10]
007d21e2  MOV dword ptr [ECX],0xffffffff
007d21e8  JMP 0x007d21f7
007d21ea  MOV EDX,dword ptr [EBP + 0x10]
007d21ed  MOV EAX,dword ptr [EDX]
007d21ef  ADD EAX,0x1
007d21f2  MOV ECX,dword ptr [EBP + 0x10]
007d21f5  MOV dword ptr [ECX],EAX
007d21f7  MOV ESP,EBP
007d21f9  POP EBP
007d21fa  RET
