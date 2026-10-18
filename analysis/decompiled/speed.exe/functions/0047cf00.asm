0047cf00  PUSH EBP
0047cf01  MOV EBP,ESP
0047cf03  AND ESP,0xfffffff0
0047cf06  SUB ESP,0xc4
0047cf0c  PUSH EBX
0047cf0d  MOV EBX,dword ptr [EBP + 0xc]
0047cf10  MOVSX EAX,word ptr [EBX]
0047cf13  CMP EAX,0x2
0047cf16  PUSH ESI
0047cf17  PUSH EDI
0047cf18  MOV ESI,ECX
0047cf1a  JZ 0x0047cf35
0047cf1c  CMP EAX,0x3
0047cf1f  JZ 0x0047cf35
0047cf21  CMP EAX,0x4
0047cf24  JZ 0x0047cf35
0047cf26  CMP EAX,0x6
0047cf29  JZ 0x0047cf35
0047cf2b  CMP EAX,0x5
0047cf2e  MOV byte ptr [ESP + 0x1b],0x0
0047cf33  JNZ 0x0047cf3a
0047cf35  MOV byte ptr [ESP + 0x1b],0x1
0047cf3a  MOV EAX,dword ptr [ESI + 0x80]
0047cf40  MOV CL,byte ptr [EAX + 0xc0]
0047cf46  TEST CL,CL
0047cf48  JZ 0x0047cf56
0047cf4a  MOV ECX,dword ptr [0x00925ae8]
0047cf50  MOV dword ptr [ESI + 0xa8],ECX
0047cf56  MOV ECX,ESI
0047cf58  CALL 0x004741f0
0047cf5d  TEST AL,AL
0047cf5f  JZ 0x0047cf6d
0047cf61  MOV EDX,dword ptr [0x00925ae8]
0047cf67  MOV dword ptr [ESI + 0xac],EDX
0047cf6d  MOV EAX,dword ptr [EBP + 0x14]
0047cf70  PUSH EAX
0047cf71  PUSH EBX
0047cf72  MOV ECX,ESI
0047cf74  CALL 0x0046b1f0
0047cf79  MOV EDI,dword ptr [EBP + 0x8]
0047cf7c  PUSH EDI
0047cf7d  MOV ECX,ESI
0047cf7f  CALL 0x0046b410
0047cf84  LEA ECX,[ESP + 0x90]
0047cf8b  PUSH EDI
0047cf8c  PUSH ECX
0047cf8d  CALL 0x006bde60
0047cf92  MOV AL,byte ptr [ESI + 0xa0]
0047cf98  ADD ESP,0x8
0047cf9b  TEST AL,AL
0047cf9d  MOV dword ptr [ESP + 0x40],0x0
0047cfa5  MOV dword ptr [ESP + 0x44],0x0
0047cfad  MOV dword ptr [ESP + 0x48],0x0
0047cfb5  MOV dword ptr [ESP + 0x4c],0x0
0047cfbd  JZ 0x0047cfff
0047cfbf  MOV EAX,dword ptr [ESI + 0xe0]
0047cfc5  FLD float ptr [EAX + 0x24]
0047cfc8  MOV EDX,dword ptr [EAX + 0x20]
0047cfcb  FLD float ptr [EAX + 0x28]
0047cfce  ADD EAX,0x20
0047cfd1  LEA EAX,[ESP + 0x40]
0047cfd5  FXCH
0047cfd7  PUSH EAX
0047cfd8  FSTP float ptr [ESP + 0x48]
0047cfdc  LEA ECX,[ESP + 0x94]
0047cfe3  MOV dword ptr [ESP + 0x44],EDX
0047cfe7  FSTP float ptr [ESP + 0x4c]
0047cfeb  PUSH ECX
0047cfec  MOV EDX,EAX
0047cfee  PUSH EDX
0047cfef  MOV dword ptr [ESP + 0x58],0x0
0047cff7  CALL 0x0045ed10
0047cffc  ADD ESP,0xc
0047cfff  MOV AL,[0x00904ffa]
0047d004  TEST AL,AL
0047d006  JNZ 0x0047d011
0047d008  MOV EAX,[0x009b0890]
0047d00d  TEST EAX,EAX
0047d00f  JZ 0x0047d036
0047d011  MOV EAX,[0x008ee120]
0047d016  MOV ECX,dword ptr [0x008ee124]
0047d01c  MOV EDX,dword ptr [0x008ee128]
0047d022  MOV EDI,dword ptr [0x009111e4]
0047d028  MOV dword ptr [ESP + 0x30],EAX
0047d02c  MOV dword ptr [ESP + 0x34],ECX
0047d030  MOV dword ptr [ESP + 0x38],EDX
0047d034  JMP 0x0047d05d
0047d036  MOV EAX,dword ptr [EBX + 0x4]
0047d039  MOV ECX,dword ptr [EBX + 0xc]
0047d03c  MOV EDX,dword ptr [EBX + 0x8]
0047d03f  MOV dword ptr [ESP + 0x30],EAX
0047d043  LEA EAX,[ESP + 0x30]
0047d047  MOV dword ptr [ESP + 0x34],ECX
0047d04b  PUSH EAX
0047d04c  MOV ECX,ESI
0047d04e  MOV dword ptr [ESP + 0x3c],EDX
0047d052  CALL 0x0047ce80
0047d057  XOR EDI,EDI
0047d059  MOV DI,word ptr [EBX + 0x2]
0047d05d  PUSH EDI
0047d05e  CALL 0x0045db30
0047d063  FSTP float ptr [ESP + 0x20]
0047d067  PUSH EDI
0047d068  CALL 0x0045dbf0
0047d06d  FDIVR float ptr [ESP + 0x24]
0047d071  MOV AL,byte ptr [ESP + 0x23]
0047d075  ADD ESP,0x8
0047d078  TEST AL,AL
0047d07a  JZ 0x0047d092
0047d07c  FMUL float ptr [ESP + 0x30]
0047d080  MOV dword ptr [ESP + 0x5c],0x0
0047d088  FADD float ptr [ESP + 0x38]
0047d08c  FSTP float ptr [ESP + 0x1c]
0047d090  JMP 0x0047d0ac
0047d092  FLD float ptr [ESP + 0x38]
0047d096  FSUB ST0,ST1
0047d098  FSTP float ptr [ESP + 0x1c]
0047d09c  FSTP ST0
0047d09e  FLD float ptr [ESP + 0x30]
0047d0a2  FADD float ptr [0x0089096c]
0047d0a8  FSTP float ptr [ESP + 0x5c]
0047d0ac  MOV EDI,dword ptr [EBP + 0x10]
0047d0af  FLD float ptr [ESP + 0x40]
0047d0b3  FMUL float ptr [EDI + 0x40]
0047d0b6  LEA ECX,[EDI + 0x60]
0047d0b9  PUSH ECX
0047d0ba  LEA EDX,[EDI + 0x50]
0047d0bd  FSTP float ptr [ESP + 0x64]
0047d0c1  PUSH EDX
0047d0c2  FLD float ptr [ESP + 0x4c]
0047d0c6  LEA EAX,[ESP + 0x68]
0047d0ca  FMUL float ptr [EDI + 0x44]
0047d0cd  PUSH EAX
0047d0ce  FSTP float ptr [ESP + 0x70]
0047d0d2  FLD float ptr [ESP + 0x54]
0047d0d6  FMUL float ptr [EDI + 0x48]
0047d0d9  FSTP float ptr [ESP + 0x74]
0047d0dd  CALL 0x0046ae40
0047d0e2  FLD float ptr [ESP + 0x6c]
0047d0e6  ADD ESP,0xc
0047d0e9  FADD float ptr [ESP + 0x30]
0047d0ed  LEA ECX,[ESP + 0x60]
0047d0f1  PUSH ECX
0047d0f2  MOV ECX,dword ptr [ESI + 0x88]
0047d0f8  FSTP float ptr [ESP + 0x64]
0047d0fc  FLD float ptr [ESP + 0x68]
0047d100  FADD float ptr [ESP + 0x38]
0047d104  FSTP float ptr [ESP + 0x68]
0047d108  FLD float ptr [ESP + 0x6c]
0047d10c  FADD float ptr [ESP + 0x3c]
0047d110  FSTP float ptr [ESP + 0x6c]
0047d114  CALL 0x00651790
0047d119  FLD float ptr [ESP + 0x40]
0047d11d  LEA EDX,[EDI + 0x90]
0047d123  FMUL float ptr [EDI + 0x70]
0047d126  PUSH EDX
0047d127  LEA EAX,[EDI + 0x80]
0047d12d  PUSH EAX
0047d12e  FSTP float ptr [ESP + 0x78]
0047d132  LEA ECX,[ESP + 0x78]
0047d136  FLD float ptr [ESP + 0x4c]
0047d13a  PUSH ECX
0047d13b  FMUL float ptr [EDI + 0x74]
0047d13e  FSTP float ptr [ESP + 0x80]
0047d145  FLD float ptr [ESP + 0x54]
0047d149  FMUL float ptr [EDI + 0x78]
0047d14c  FSTP float ptr [ESP + 0x84]
0047d153  CALL 0x0046ae40
0047d158  FLD float ptr [ESP + 0x7c]
0047d15c  MOV EDX,dword ptr [ESP + 0x80]
0047d163  FADD float ptr [ESP + 0x68]
0047d167  MOV ECX,dword ptr [ESI + 0x8c]
0047d16d  ADD ESP,0xc
0047d170  LEA EAX,[ESP + 0x70]
0047d174  FSTP float ptr [ESP + 0x70]
0047d178  PUSH EAX
0047d179  FLD float ptr [ESP + 0x7c]
0047d17d  MOV dword ptr [ESP + 0x78],EDX
0047d181  FADD float ptr [ESP + 0x20]
0047d185  FSTP float ptr [ESP + 0x7c]
0047d189  CALL 0x00651790
0047d18e  CMP word ptr [EBX + 0x18],0x0
0047d193  MOV dword ptr [ESP + 0x20],0x0
0047d19b  MOV dword ptr [ESP + 0x24],0x0
0047d1a3  MOV dword ptr [ESP + 0x28],0x3f800000
0047d1ab  JZ 0x0047d209
0047d1ad  MOV EAX,dword ptr [ESI + 0xe0]
0047d1b3  FLD float ptr [EDI + 0x10]
0047d1b6  FMUL float ptr [EAX + 0x20]
0047d1b9  ADD EAX,0x20
0047d1bc  FLD float ptr [EDI + 0x14]
0047d1bf  LEA EDX,[EDI + 0x30]
0047d1c2  FMUL float ptr [EAX + 0x4]
0047d1c5  PUSH EDX
0047d1c6  FLD float ptr [EDI + 0x18]
0047d1c9  ADD EDI,0x20
0047d1cc  FMUL float ptr [EAX + 0x8]
0047d1cf  LEA EAX,[ESP + 0x24]
0047d1d3  PUSH EDI
0047d1d4  PUSH EAX
0047d1d5  FSTP float ptr [ESP + 0x44]
0047d1d9  FXCH
0047d1db  FSTP float ptr [ESP + 0x8c]
0047d1e2  MOV ECX,dword ptr [ESP + 0x8c]
0047d1e9  FLD float ptr [ESP + 0x44]
0047d1ed  MOV dword ptr [ESP + 0x2c],ECX
0047d1f1  FADD float ptr [0x0089096c]
0047d1f7  FXCH
0047d1f9  FSTP float ptr [ESP + 0x30]
0047d1fd  FSTP float ptr [ESP + 0x34]
0047d201  CALL 0x0046ae40
0047d206  ADD ESP,0xc
0047d209  MOV ECX,dword ptr [ESI + 0x80]
0047d20f  FLD float ptr [ECX + 0x10]
0047d212  FCOMP float ptr [0x00894820]
0047d218  FNSTSW AX
0047d21a  TEST AH,0x41
0047d21d  JNZ 0x0047d255
0047d21f  MOV EAX,ECX
0047d221  PUSH EAX
0047d222  ADD EAX,0x20
0047d225  PUSH EAX
0047d226  MOV ECX,ESI
0047d228  CALL 0x0047c440
0047d22d  FLD float ptr [EAX + 0x4]
0047d230  FLD float ptr [EAX + 0x8]
0047d233  FLD float ptr [ESP + 0x20]
0047d237  FADD float ptr [EAX]
0047d239  FSTP float ptr [ESP + 0x20]
0047d23d  FLD float ptr [ESP + 0x24]
0047d241  FADD ST0,ST2
0047d243  FSTP float ptr [ESP + 0x24]
0047d247  FLD float ptr [ESP + 0x28]
0047d24b  FADD ST0,ST1
0047d24d  FSTP float ptr [ESP + 0x28]
0047d251  FSTP ST0
0047d253  FSTP ST0
0047d255  LEA EDX,[ESP + 0x20]
0047d259  PUSH EDX
0047d25a  MOV EAX,EDX
0047d25c  PUSH EAX
0047d25d  CALL 0x0045f490
0047d262  ADD ESP,0x8
0047d265  LEA ECX,[ESP + 0x20]
0047d269  PUSH ECX
0047d26a  MOV ECX,dword ptr [ESI + 0x94]
0047d270  CALL 0x00651790
0047d275  MOV DL,byte ptr [ESP + 0x1b]
0047d279  TEST DL,DL
0047d27b  MOV BX,word ptr [EBX + 0x10]
0047d27f  JZ 0x0047d2a7
0047d281  MOV EAX,dword ptr [ESI + 0x80]
0047d287  MOV CL,byte ptr [EAX + 0xbc]
0047d28d  TEST CL,CL
0047d28f  JZ 0x0047d2a7
0047d291  FLD float ptr [EAX + 0x10]
0047d294  FCOMP float ptr [0x00890968]
0047d29a  FNSTSW AX
0047d29c  TEST AH,0x41
0047d29f  JNZ 0x0047d2a7
0047d2a1  ADD EBX,dword ptr [0x0091112c]
0047d2a7  MOV ECX,dword ptr [ESI + 0x84]
0047d2ad  MOVZX EAX,BX
0047d2b0  MOV dword ptr [ESP + 0x1c],EAX
0047d2b4  FILD dword ptr [ESP + 0x1c]
0047d2b8  FST float ptr [ECX + 0x8]
0047d2bb  FLD float ptr [ECX]
0047d2bd  FXCH
0047d2bf  FUCOMPP
0047d2c1  FNSTSW AX
0047d2c3  TEST AH,0x44
0047d2c6  JNP 0x0047d2ce
0047d2c8  MOV word ptr [ECX + 0x28],0x2
0047d2ce  MOV AL,byte ptr [ESI + 0xa2]
0047d2d4  TEST AL,AL
0047d2d6  JNZ 0x0047d2e0
0047d2d8  TEST DL,DL
0047d2da  JNZ 0x0047d39f
0047d2e0  MOV EAX,dword ptr [ESI + 0x94]
0047d2e6  MOV ECX,dword ptr [EAX + 0x8]
0047d2e9  MOV EDX,dword ptr [EAX + 0xc]
0047d2ec  MOV dword ptr [EAX],ECX
0047d2ee  MOV dword ptr [EAX + 0x4],EDX
0047d2f1  XOR ECX,ECX
0047d2f3  MOV word ptr [EAX + 0x28],CX
0047d2f7  MOV EDX,dword ptr [EAX + 0x34]
0047d2fa  MOV dword ptr [EAX + 0x2c],EDX
0047d2fd  MOV EDX,dword ptr [EAX + 0x38]
0047d300  MOV dword ptr [EAX + 0x30],EDX
0047d303  MOV word ptr [EAX + 0x54],CX
0047d307  MOV EDX,dword ptr [EAX + 0x60]
0047d30a  MOV dword ptr [EAX + 0x58],EDX
0047d30d  MOV EDX,dword ptr [EAX + 0x64]
0047d310  MOV dword ptr [EAX + 0x5c],EDX
0047d313  MOV word ptr [EAX + 0x80],CX
0047d31a  MOV EAX,dword ptr [ESI + 0x84]
0047d320  MOV EDX,dword ptr [EAX + 0x8]
0047d323  MOV dword ptr [EAX],EDX
0047d325  MOV EDX,dword ptr [EAX + 0xc]
0047d328  MOV dword ptr [EAX + 0x4],EDX
0047d32b  MOV word ptr [EAX + 0x28],CX
0047d32f  MOV EAX,dword ptr [ESI + 0x88]
0047d335  MOV EDX,dword ptr [EAX + 0x8]
0047d338  MOV dword ptr [EAX],EDX
0047d33a  MOV EDX,dword ptr [EAX + 0xc]
0047d33d  MOV dword ptr [EAX + 0x4],EDX
0047d340  MOV word ptr [EAX + 0x28],CX
0047d344  MOV EDX,dword ptr [EAX + 0x34]
0047d347  MOV dword ptr [EAX + 0x2c],EDX
0047d34a  MOV EDX,dword ptr [EAX + 0x38]
0047d34d  MOV dword ptr [EAX + 0x30],EDX
0047d350  MOV word ptr [EAX + 0x54],CX
0047d354  MOV EDX,dword ptr [EAX + 0x60]
0047d357  MOV dword ptr [EAX + 0x58],EDX
0047d35a  MOV EDX,dword ptr [EAX + 0x64]
0047d35d  MOV dword ptr [EAX + 0x5c],EDX
0047d360  MOV word ptr [EAX + 0x80],CX
0047d367  MOV EAX,dword ptr [ESI + 0x8c]
0047d36d  MOV EDX,dword ptr [EAX + 0x8]
0047d370  MOV dword ptr [EAX],EDX
0047d372  MOV EDX,dword ptr [EAX + 0xc]
0047d375  MOV dword ptr [EAX + 0x4],EDX
0047d378  MOV word ptr [EAX + 0x28],CX
0047d37c  MOV EDX,dword ptr [EAX + 0x34]
0047d37f  MOV dword ptr [EAX + 0x2c],EDX
0047d382  MOV EDX,dword ptr [EAX + 0x38]
0047d385  MOV dword ptr [EAX + 0x30],EDX
0047d388  MOV word ptr [EAX + 0x54],CX
0047d38c  MOV EDX,dword ptr [EAX + 0x60]
0047d38f  MOV dword ptr [EAX + 0x58],EDX
0047d392  MOV EDX,dword ptr [EAX + 0x64]
0047d395  MOV dword ptr [EAX + 0x5c],EDX
0047d398  MOV word ptr [EAX + 0x80],CX
0047d39f  MOV AL,byte ptr [ESI + 0xa2]
0047d3a5  TEST AL,AL
0047d3a7  JZ 0x0047d3ae
0047d3a9  CALL 0x00725550
0047d3ae  POP EDI
0047d3af  POP ESI
0047d3b0  POP EBX
0047d3b1  MOV ESP,EBP
0047d3b3  POP EBP
0047d3b4  RET 0x10
