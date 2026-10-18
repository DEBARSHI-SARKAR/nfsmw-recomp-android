004ea0d0  SUB ESP,0x8
004ea0d3  PUSH EBX
004ea0d4  PUSH EBP
004ea0d5  PUSH ESI
004ea0d6  PUSH EDI
004ea0d7  MOV EDI,dword ptr [ESP + 0x1c]
004ea0db  MOV EAX,dword ptr [EDI]
004ea0dd  MOV ECX,dword ptr [EAX]
004ea0df  MOV EAX,dword ptr [ECX + 0xc]
004ea0e2  MOV ESI,dword ptr [ECX + 0x4]
004ea0e5  MOV EDX,EAX
004ea0e7  SAR EAX,0xc
004ea0ea  AND EAX,0xf
004ea0ed  AND EDX,0xfff
004ea0f3  MOV EBX,EAX
004ea0f5  MOV EAX,dword ptr [ECX + 0x10]
004ea0f8  MOV dword ptr [ESP + 0x1c],EDX
004ea0fc  FILD dword ptr [ESP + 0x1c]
004ea100  AND EAX,0xfff
004ea105  MOV dword ptr [ESP + 0x1c],EAX
004ea109  MOV EAX,dword ptr [ECX + 0x14]
004ea10c  FMUL float ptr [0x0089906c]
004ea112  MOV EDX,EAX
004ea114  FILD dword ptr [ESP + 0x1c]
004ea118  AND EDX,0xfff
004ea11e  MOV dword ptr [ESP + 0x14],EDX
004ea122  SAR EAX,0xc
004ea125  FMUL float ptr [0x0089906c]
004ea12b  AND ESI,0xffff
004ea131  AND EAX,0xf
004ea134  TEST ESI,0x8000
004ea13a  FSTP float ptr [ESP + 0x1c]
004ea13e  MOV EBP,EAX
004ea140  FILD dword ptr [ESP + 0x14]
004ea144  MOV dword ptr [ESP + 0x14],ESI
004ea148  FMUL float ptr [0x0089906c]
004ea14e  FSTP float ptr [ESP + 0x10]
004ea152  JZ 0x004ea15e
004ea154  OR ESI,0xffff0000
004ea15a  MOV dword ptr [ESP + 0x14],ESI
004ea15e  MOV ECX,dword ptr [EDI + 0x4]
004ea161  FCOM float ptr [ECX]
004ea163  FLD float ptr [ECX]
004ea165  FNSTSW AX
004ea167  TEST AH,0x41
004ea16a  JNZ 0x004ea181
004ea16c  FMUL float ptr [0x008969bc]
004ea172  FDIV ST0,ST1
004ea174  CALL 0x007c4b80
004ea179  FSTP ST0
004ea17b  PUSH 0x0
004ea17d  PUSH EAX
004ea17e  PUSH EBX
004ea17f  JMP 0x004ea1b8
004ea181  FSUB ST0,ST1
004ea183  FCOMP float ptr [ESP + 0x1c]
004ea187  FNSTSW AX
004ea189  TEST AH,0x41
004ea18c  JNZ 0x004ea1f0
004ea18e  FADD float ptr [ESP + 0x1c]
004ea192  FSUBR float ptr [ECX]
004ea194  FCOM float ptr [ESP + 0x10]
004ea198  FNSTSW AX
004ea19a  TEST AH,0x5
004ea19d  JP 0x004ea1db
004ea19f  FMUL float ptr [0x008969bc]
004ea1a5  FDIV float ptr [ESP + 0x10]
004ea1a9  FSUBR float ptr [0x008969bc]
004ea1af  CALL 0x007c4b80
004ea1b4  PUSH 0x0
004ea1b6  PUSH EAX
004ea1b7  PUSH EBP
004ea1b8  CALL 0x004e42a0
004ea1bd  ADD ESP,0xc
004ea1c0  TEST ESI,ESI
004ea1c2  JGE 0x004ea1cc
004ea1c4  MOV ECX,dword ptr [EDI + 0x4]
004ea1c7  MOV dword ptr [ECX + 0x1c],EAX
004ea1ca  JMP 0x004ea1f9
004ea1cc  MOV EDX,0x7fff
004ea1d1  SUB EDX,EAX
004ea1d3  MOV EAX,dword ptr [EDI + 0x4]
004ea1d6  MOV dword ptr [EAX + 0x1c],EDX
004ea1d9  JMP 0x004ea1f9
004ea1db  MOV ECX,dword ptr [EDI + 0x4]
004ea1de  MOV dword ptr [ECX],0x0
004ea1e4  MOV EDX,dword ptr [EDI + 0x4]
004ea1e7  MOV dword ptr [EDX + 0x1c],0x7fff
004ea1ee  JMP 0x004ea1f7
004ea1f0  MOV dword ptr [ECX + 0x1c],0x0
004ea1f7  FSTP ST0
004ea1f9  MOV EDI,dword ptr [EDI + 0x4]
004ea1fc  FILD dword ptr [EDI + 0x1c]
004ea1ff  FSUBR float ptr [0x008969bc]
004ea205  FMUL float ptr [0x00896ab8]
004ea20b  FIMUL dword ptr [ESP + 0x14]
004ea20f  CALL 0x007c4b80
004ea214  MOV dword ptr [EDI + 0x18],EAX
004ea217  POP EDI
004ea218  POP ESI
004ea219  POP EBP
004ea21a  POP EBX
004ea21b  ADD ESP,0x8
004ea21e  RET 0x4
