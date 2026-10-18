0069ffd0  SUB ESP,0xc
0069ffd3  MOV EAX,dword ptr [ECX + 0xc0]
0069ffd9  FLD float ptr [EAX + 0x70]
0069ffdc  MOV EAX,dword ptr [ESP + 0x10]
0069ffe0  FMUL float ptr [EAX + 0xbc]
0069ffe6  MOV EDX,dword ptr [EAX + 0x54]
0069ffe9  FLD float ptr [EAX + 0x50]
0069ffec  MOV EAX,dword ptr [EAX + 0x58]
0069ffef  MOV ECX,dword ptr [ECX + 0xcc]
0069fff5  FXCH
0069fff7  FCHS
0069fff9  MOV dword ptr [ESP + 0x4],EDX
0069fffd  FST float ptr [ESP + 0x10]
006a0001  MOV dword ptr [ESP + 0x8],EAX
006a0005  FMUL ST1
006a0007  LEA EAX,[ESP]
006a000a  PUSH EAX
006a000b  FSTP float ptr [ESP + 0x4]
006a000f  FSTP ST0
006a0011  FLD float ptr [ESP + 0x8]
006a0015  FMUL float ptr [ESP + 0x14]
006a0019  FSTP float ptr [ESP + 0x8]
006a001d  FLD float ptr [ESP + 0xc]
006a0021  FMUL float ptr [ESP + 0x14]
006a0025  FSTP float ptr [ESP + 0xc]
006a0029  MOV EDX,dword ptr [ECX]
006a002b  CALL dword ptr [EDX + 0x8c]
006a0031  ADD ESP,0xc
006a0034  RET 0x4
