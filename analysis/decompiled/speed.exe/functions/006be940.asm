006be940  PUSH EBP
006be941  MOV EBP,ESP
006be943  AND ESP,0xfffffff0
006be946  SUB ESP,0x20
006be949  MOV EAX,dword ptr [EBP + 0xc]
006be94c  MOV EDX,dword ptr [EAX]
006be94e  MOV ECX,dword ptr [ECX]
006be950  MOV dword ptr [ESP + 0x10],EDX
006be954  MOV EDX,dword ptr [EAX + 0x4]
006be957  MOV EAX,dword ptr [EAX + 0x8]
006be95a  ADD ECX,0x80
006be960  MOV dword ptr [ESP + 0x14],EDX
006be964  PUSH ECX
006be965  LEA EDX,[ESP + 0x14]
006be969  MOV dword ptr [ESP + 0x1c],EAX
006be96d  PUSH EDX
006be96e  LEA EAX,[ESP + 0x8]
006be972  PUSH EAX
006be973  MOV dword ptr [ESP + 0x28],0x3f800000
006be97b  CALL 0x007e7d64
006be980  FLD float ptr [0x0089096c]
006be986  FDIV float ptr [ESP + 0xc]
006be98a  MOV EAX,dword ptr [EBP + 0x8]
006be98d  FLD float ptr [ESP]
006be990  FMUL ST1
006be992  FSTP float ptr [ESP]
006be995  FLD float ptr [ESP + 0x4]
006be999  FMUL ST1
006be99b  FSTP float ptr [ESP + 0x4]
006be99f  FMUL float ptr [ESP + 0x8]
006be9a3  FLD float ptr [ESP]
006be9a6  FADD float ptr [0x0089096c]
006be9ac  FIMUL dword ptr [0x00982be4]
006be9b2  FMUL float ptr [0x008933d4]
006be9b8  FSTP float ptr [EAX]
006be9ba  FLD float ptr [ESP + 0x4]
006be9be  FSUB float ptr [0x0089096c]
006be9c4  FIMUL dword ptr [0x00982be8]
006be9ca  FMUL float ptr [0x00891068]
006be9d0  FSTP float ptr [EAX + 0x4]
006be9d3  FSTP float ptr [EAX + 0x8]
006be9d6  MOV ESP,EBP
006be9d8  POP EBP
006be9d9  RET 0x8
