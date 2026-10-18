0068fd00  FLD float ptr [ECX + 0xf8]
0068fd06  MOV EAX,dword ptr [ESP + 0x4]
0068fd0a  FMUL float ptr [EAX + 0x8c]
0068fd10  PUSH ESI
0068fd11  MOV ESI,dword ptr [ESP + 0xc]
0068fd15  PUSH ESI
0068fd16  FST float ptr [ECX + 0xf0]
0068fd1c  PUSH EAX
0068fd1d  FMUL float ptr [0x0089095c]
0068fd23  PUSH ESI
0068fd24  MOV dword ptr [ESI + 0x4],0x0
0068fd2b  FMUL float ptr [0x008aabd8]
0068fd31  FLD ST0
0068fd33  FCOS
0068fd35  FSTP float ptr [ESI + 0x8]
0068fd38  FSIN
0068fd3a  FSTP float ptr [ESI]
0068fd3c  CALL 0x00401670
0068fd41  MOV ECX,dword ptr [ESI]
0068fd43  MOV EAX,dword ptr [ESP + 0x1c]
0068fd47  MOV dword ptr [EAX],ECX
0068fd49  MOV EDX,dword ptr [ESI + 0x4]
0068fd4c  MOV dword ptr [EAX + 0x4],EDX
0068fd4f  MOV ECX,dword ptr [ESI + 0x8]
0068fd52  ADD ESP,0xc
0068fd55  MOV dword ptr [EAX + 0x8],ECX
0068fd58  POP ESI
0068fd59  RET 0xc
