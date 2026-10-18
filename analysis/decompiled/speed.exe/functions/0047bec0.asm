0047bec0  PUSH EBP
0047bec1  MOV EBP,ESP
0047bec3  AND ESP,0xfffffff0
0047bec6  SUB ESP,0x64
0047bec9  PUSH EBX
0047beca  PUSH ESI
0047becb  MOV ESI,dword ptr [EBP + 0xc]
0047bece  TEST ESI,ESI
0047bed0  PUSH EDI
0047bed1  MOV EBX,ECX
0047bed3  JZ 0x0047c236
0047bed9  MOV EAX,dword ptr [ESI + 0x10]
0047bedc  PUSH EAX
0047bedd  LEA ECX,[ESP + 0x34]
0047bee1  PUSH ECX
0047bee2  LEA ECX,[ESP + 0x64]
0047bee6  MOV dword ptr [ESP + 0x64],0x5
0047beee  MOV dword ptr [ESP + 0x68],0x0
0047bef6  MOV dword ptr [ESP + 0x6c],0x42a00000
0047befe  MOV dword ptr [ESP + 0x70],0x3d4ccccd
0047bf06  MOV dword ptr [ESP + 0x74],0x8edfb0
0047bf0e  CALL 0x0046f020
0047bf13  PUSH 0x0
0047bf15  LEA EDI,[ESI + 0x98]
0047bf1b  PUSH 0xf0c9e498
0047bf20  MOV ECX,EDI
0047bf22  CALL 0x00454810
0047bf27  TEST EAX,EAX
0047bf29  JNZ 0x0047bf35
0047bf2b  PUSH 0x4
0047bf2d  CALL 0x006269b0
0047bf32  ADD ESP,0x4
0047bf35  MOV EDX,dword ptr [EAX]
0047bf37  PUSH 0x1
0047bf39  PUSH 0xf0c9e498
0047bf3e  MOV ECX,EDI
0047bf40  MOV dword ptr [ESP + 0x20],EDX
0047bf44  CALL 0x00454810
0047bf49  TEST EAX,EAX
0047bf4b  JNZ 0x0047bf57
0047bf4d  PUSH 0x4
0047bf4f  CALL 0x006269b0
0047bf54  ADD ESP,0x4
0047bf57  FLD float ptr [EAX]
0047bf59  MOV EAX,dword ptr [ESP + 0x38]
0047bf5d  FLD float ptr [ESP + 0x30]
0047bf61  MOV dword ptr [ESP + 0x14],EAX
0047bf65  FMUL float ptr [EBP + 0x10]
0047bf68  MOV AL,byte ptr [ESI + 0xbe]
0047bf6e  TEST AL,AL
0047bf70  FSTP float ptr [ESP + 0x10]
0047bf74  JZ 0x0047bf84
0047bf76  FLD float ptr [ESP + 0x10]
0047bf7a  FMUL float ptr [0x00890d44]
0047bf80  FSTP float ptr [ESP + 0x10]
0047bf84  FLD float ptr [ESI + 0x10]
0047bf87  FCOMP float ptr [0x00894820]
0047bf8d  FNSTSW AX
0047bf8f  TEST AH,0x41
0047bf92  JNZ 0x0047c008
0047bf94  FLD float ptr [ESI + 0x58]
0047bf97  FMUL float ptr [ESI + 0x48]
0047bf9a  FLD float ptr [ESI + 0x54]
0047bf9d  FMUL float ptr [ESI + 0x44]
0047bfa0  FADDP
0047bfa2  FLD float ptr [ESI + 0x50]
0047bfa5  FMUL float ptr [ESI + 0x40]
0047bfa8  FADDP
0047bfaa  FST float ptr [ESP + 0x1c]
0047bfae  FCOMP float ptr [0x00890968]
0047bfb4  FNSTSW AX
0047bfb6  TEST AH,0x41
0047bfb9  JNZ 0x0047c23f
0047bfbf  FLD float ptr [ESP + 0x1c]
0047bfc3  FLD float ptr [0x00894b64]
0047bfc9  FCOMP float ptr [ESP + 0x1c]
0047bfcd  FNSTSW AX
0047bfcf  TEST AH,0x5
0047bfd2  JP 0x0047bfdc
0047bfd4  FSTP ST0
0047bfd6  FLD float ptr [0x00894b64]
0047bfdc  FMUL float ptr [0x00890ea8]
0047bfe2  FLD float ptr [0x008945b4]
0047bfe8  FMUL ST1
0047bfea  FADD float ptr [ESP + 0x10]
0047bfee  FSTP float ptr [ESP + 0x10]
0047bff2  FLD float ptr [0x00894594]
0047bff8  FSUB float ptr [ESP + 0x38]
0047bffc  FMUL ST1
0047bffe  FADD float ptr [ESP + 0x38]
0047c002  FSTP float ptr [ESP + 0x14]
0047c006  FSTP ST0
0047c008  MOV AL,byte ptr [ESI + 0xbf]
0047c00e  TEST AL,AL
0047c010  JZ 0x0047c02e
0047c012  FLD float ptr [ESP + 0x10]
0047c016  FADD float ptr [0x008945b4]
0047c01c  FSTP float ptr [ESP + 0x10]
0047c020  FLD float ptr [ESP + 0x14]
0047c024  FMUL float ptr [0x008945e8]
0047c02a  FSTP float ptr [ESP + 0x14]
0047c02e  MOV AL,byte ptr [ESI + 0xbc]
0047c034  TEST AL,AL
0047c036  JZ 0x0047c058
0047c038  FLD float ptr [ESI + 0x10]
0047c03b  FCOMP float ptr [0x00894820]
0047c041  FNSTSW AX
0047c043  TEST AH,0x41
0047c046  JNZ 0x0047c058
0047c048  MOV dword ptr [ESP + 0x10],0x3e99999a
0047c050  MOV dword ptr [ESP + 0x14],0x40000000
0047c058  MOV AL,byte ptr [ESI + 0xbd]
0047c05e  TEST AL,AL
0047c060  JZ 0x0047c082
0047c062  FLD float ptr [ESI + 0x10]
0047c065  FCOMP float ptr [0x00894820]
0047c06b  FNSTSW AX
0047c06d  TEST AH,0x41
0047c070  JNZ 0x0047c082
0047c072  MOV dword ptr [ESP + 0x10],0x3e99999a
0047c07a  MOV dword ptr [ESP + 0x14],0x40a00000
0047c082  FLD float ptr [ESP + 0x34]
0047c086  MOV EDX,dword ptr [EBX]
0047c088  FMUL float ptr [ESP + 0x18]
0047c08c  MOV ECX,EBX
0047c08e  FMUL float ptr [EBP + 0x14]
0047c091  FSTP float ptr [ESP + 0x18]
0047c095  FLD float ptr [ESP + 0x3c]
0047c099  FMUL ST1
0047c09b  FSTP float ptr [ESP + 0x1c]
0047c09f  FSTP ST0
0047c0a1  CALL dword ptr [EDX + 0x24]
0047c0a4  TEST AL,AL
0047c0a6  FLD float ptr [ESP + 0x10]
0047c0aa  JNZ 0x0047c0c0
0047c0ac  FMUL float ptr [0x008910f0]
0047c0b2  FLD float ptr [ESP + 0x18]
0047c0b6  FMUL float ptr [0x008910f0]
0047c0bc  FSTP float ptr [ESP + 0x18]
0047c0c0  FLD float ptr [0x008edf70]
0047c0c6  MOV EAX,dword ptr [EBX + 0x1c]
0047c0c9  FMUL float ptr [ESP + 0x14]
0047c0cd  ADD EAX,0x70
0047c0d0  FLD float ptr [0x008edf74]
0047c0d6  FMUL float ptr [ESP + 0x14]
0047c0da  FLD float ptr [0x008edf78]
0047c0e0  FMUL float ptr [ESP + 0x14]
0047c0e4  FSTP float ptr [ESP + 0x48]
0047c0e8  MOV ECX,dword ptr [ESP + 0x48]
0047c0ec  FLD float ptr [0x008edf7c]
0047c0f2  FMUL float ptr [ESP + 0x14]
0047c0f6  FSTP float ptr [ESP + 0x4c]
0047c0fa  MOV EDX,dword ptr [ESP + 0x4c]
0047c0fe  FLD float ptr [0x008edf80]
0047c104  FMUL ST3
0047c106  FSTP float ptr [ESP + 0x20]
0047c10a  FLD float ptr [0x008edf84]
0047c110  FMUL ST3
0047c112  FSTP float ptr [ESP + 0x24]
0047c116  FLD float ptr [0x008edf88]
0047c11c  FMUL ST3
0047c11e  FSTP float ptr [ESP + 0x28]
0047c122  FLD float ptr [0x008edf8c]
0047c128  MOV dword ptr [EAX + 0x8],ECX
0047c12b  FMUL ST3
0047c12d  MOV ECX,dword ptr [ESP + 0x20]
0047c131  MOV dword ptr [EAX + 0xc],EDX
0047c134  MOV EDX,dword ptr [ESP + 0x24]
0047c138  FSTP float ptr [ESP + 0x2c]
0047c13c  FXCH
0047c13e  FSTP float ptr [EAX]
0047c140  FSTP float ptr [EAX + 0x4]
0047c143  MOV EAX,dword ptr [EBX + 0x1c]
0047c146  MOV dword ptr [EAX + 0x80],ECX
0047c14c  MOV ECX,dword ptr [ESP + 0x28]
0047c150  FSTP ST0
0047c152  MOV dword ptr [EAX + 0x84],EDX
0047c158  MOV EDX,dword ptr [ESP + 0x2c]
0047c15c  MOV dword ptr [EAX + 0x88],ECX
0047c162  MOV dword ptr [EAX + 0x8c],EDX
0047c168  FLD float ptr [0x008edf90]
0047c16e  FMUL float ptr [ESP + 0x1c]
0047c172  ADD EAX,0x80
0047c177  FLD float ptr [0x008edf94]
0047c17d  MOV EAX,dword ptr [EBX + 0x1c]
0047c180  FMUL float ptr [ESP + 0x1c]
0047c184  ADD EAX,0x90
0047c189  FLD float ptr [0x008edf98]
0047c18f  FMUL float ptr [ESP + 0x1c]
0047c193  FSTP float ptr [ESP + 0x48]
0047c197  MOV ECX,dword ptr [ESP + 0x48]
0047c19b  FLD float ptr [0x008edf9c]
0047c1a1  FMUL float ptr [ESP + 0x1c]
0047c1a5  FSTP float ptr [ESP + 0x4c]
0047c1a9  MOV EDX,dword ptr [ESP + 0x4c]
0047c1ad  FLD float ptr [0x008edfa0]
0047c1b3  FMUL float ptr [ESP + 0x18]
0047c1b7  FSTP float ptr [ESP + 0x20]
0047c1bb  FLD float ptr [0x008edfa4]
0047c1c1  FMUL float ptr [ESP + 0x18]
0047c1c5  FSTP float ptr [ESP + 0x24]
0047c1c9  FLD float ptr [0x008edfa8]
0047c1cf  FMUL float ptr [ESP + 0x18]
0047c1d3  FSTP float ptr [ESP + 0x28]
0047c1d7  FLD float ptr [0x008edfac]
0047c1dd  MOV dword ptr [EAX + 0x8],ECX
0047c1e0  FMUL float ptr [ESP + 0x18]
0047c1e4  MOV ECX,dword ptr [ESP + 0x20]
0047c1e8  MOV dword ptr [EAX + 0xc],EDX
0047c1eb  MOV EDX,dword ptr [ESP + 0x24]
0047c1ef  FSTP float ptr [ESP + 0x2c]
0047c1f3  FXCH
0047c1f5  FSTP float ptr [EAX]
0047c1f7  FSTP float ptr [EAX + 0x4]
0047c1fa  MOV EAX,dword ptr [EBX + 0x1c]
0047c1fd  ADD EAX,0xa0
0047c202  MOV dword ptr [EAX],ECX
0047c204  MOV ECX,dword ptr [ESP + 0x28]
0047c208  MOV dword ptr [EAX + 0x4],EDX
0047c20b  MOV dword ptr [EAX + 0x8],ECX
0047c20e  MOV EDX,dword ptr [ESP + 0x2c]
0047c212  MOV dword ptr [EAX + 0xc],EDX
0047c215  FILD dword ptr [0x00925ae8]
0047c21b  MOV EAX,dword ptr [EBP + 0x8]
0047c21e  PUSH 0x3f800000
0047c223  FMUL float ptr [0x00890984]
0047c229  PUSH ECX
0047c22a  MOV ECX,dword ptr [EBX + 0x1c]
0047c22d  FSTP float ptr [ESP]
0047c230  PUSH EAX
0047c231  CALL 0x00467420
0047c236  POP EDI
0047c237  POP ESI
0047c238  POP EBX
0047c239  MOV ESP,EBP
0047c23b  POP EBP
0047c23c  RET 0x10
0047c23f  FLD float ptr [0x00890968]
0047c245  JMP 0x0047bfdc
