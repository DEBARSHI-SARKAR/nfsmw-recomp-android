006ecf20  PUSH ESI
006ecf21  MOV ESI,ECX
006ecf23  MOV ECX,dword ptr [0x008a2fc0]
006ecf29  PUSH EDI
006ecf2a  LEA EDI,[ESI + 0x64]
006ecf2d  MOV EAX,EDI
006ecf2f  MOV dword ptr [EAX],ECX
006ecf31  MOV EDX,dword ptr [0x008a2fc4]
006ecf37  MOV dword ptr [EAX + 0x4],EDX
006ecf3a  MOV ECX,dword ptr [0x008a2fc8]
006ecf40  MOV dword ptr [EAX + 0x8],ECX
006ecf43  MOV EDX,dword ptr [0x008a2fcc]
006ecf49  MOV dword ptr [EAX + 0xc],EDX
006ecf4c  MOV dword ptr [ESI + 0x84],0x0
006ecf56  MOV dword ptr [ESI + 0x88],0x0
006ecf60  MOV EAX,[0x00919694]
006ecf65  CMP EAX,0x919694
006ecf6a  JZ 0x006ecfd6
006ecf6c  TEST EAX,EAX
006ecf6e  JZ 0x006ecfd6
006ecf70  LEA ECX,[EAX + -0x4]
006ecf73  TEST ECX,ECX
006ecf75  JZ 0x006ecfd6
006ecf77  CMP EAX,0x919694
006ecf7c  JZ 0x006ecf87
006ecf7e  TEST EAX,EAX
006ecf80  JZ 0x006ecf87
006ecf82  ADD EAX,-0x4
006ecf85  JMP 0x006ecf89
006ecf87  XOR EAX,EAX
006ecf89  MOV EAX,dword ptr [EAX + 0x1c]
006ecf8c  FLD float ptr [EAX + 0x48]
006ecf8f  ADD EAX,0x40
006ecf92  FLD float ptr [EAX]
006ecf94  FLD float ptr [EAX + 0x4]
006ecf97  FCHS
006ecf99  FSTP float ptr [EDI]
006ecf9b  FXCH
006ecf9d  FSTP float ptr [EDI + 0x4]
006ecfa0  FSTP float ptr [EDI + 0x8]
006ecfa3  MOV dword ptr [ESI + 0x70],0x3f800000
006ecfaa  MOV EAX,[0x00919694]
006ecfaf  CMP EAX,0x919694
006ecfb4  JZ 0x006ecfbf
006ecfb6  TEST EAX,EAX
006ecfb8  JZ 0x006ecfbf
006ecfba  LEA ECX,[EAX + -0x4]
006ecfbd  JMP 0x006ecfc1
006ecfbf  XOR ECX,ECX
006ecfc1  MOV EAX,dword ptr [ECX]
006ecfc3  CALL dword ptr [EAX + 0x10]
006ecfc6  TEST EAX,EAX
006ecfc8  JZ 0x006ecfd6
006ecfca  MOV ECX,dword ptr [EAX + 0x94]
006ecfd0  MOV dword ptr [ESI + 0x84],ECX
006ecfd6  MOV EAX,[0x00919704]
006ecfdb  CMP EAX,0x919704
006ecfe0  JZ 0x006ed053
006ecfe2  TEST EAX,EAX
006ecfe4  JZ 0x006ed053
006ecfe6  LEA ECX,[EAX + -0x4]
006ecfe9  TEST ECX,ECX
006ecfeb  JZ 0x006ed053
006ecfed  CMP EAX,0x919704
006ecff2  JZ 0x006ecffd
006ecff4  TEST EAX,EAX
006ecff6  JZ 0x006ecffd
006ecff8  ADD EAX,-0x4
006ecffb  JMP 0x006ecfff
006ecffd  XOR EAX,EAX
006ecfff  MOV EAX,dword ptr [EAX + 0x1c]
006ed002  FLD float ptr [EAX + 0x48]
006ed005  ADD EAX,0x40
006ed008  FLD float ptr [EAX]
006ed00a  FLD float ptr [EAX + 0x4]
006ed00d  FCHS
006ed00f  FSTP float ptr [ESI + 0x74]
006ed012  FXCH
006ed014  FSTP float ptr [ESI + 0x78]
006ed017  FSTP float ptr [ESI + 0x7c]
006ed01a  MOV dword ptr [ESI + 0x80],0x3f800000
006ed024  MOV EAX,[0x00919704]
006ed029  CMP EAX,0x919704
006ed02e  JZ 0x006ed039
006ed030  TEST EAX,EAX
006ed032  JZ 0x006ed039
006ed034  LEA ECX,[EAX + -0x4]
006ed037  JMP 0x006ed03b
006ed039  XOR ECX,ECX
006ed03b  MOV EDX,dword ptr [ECX]
006ed03d  CALL dword ptr [EDX + 0x10]
006ed040  TEST EAX,EAX
006ed042  JZ 0x006ed06c
006ed044  MOV EAX,dword ptr [EAX + 0x94]
006ed04a  POP EDI
006ed04b  MOV dword ptr [ESI + 0x88],EAX
006ed051  POP ESI
006ed052  RET
006ed053  MOV ECX,dword ptr [EDI]
006ed055  MOV EDX,dword ptr [EDI + 0x4]
006ed058  MOV EAX,dword ptr [EDI + 0x8]
006ed05b  ADD ESI,0x74
006ed05e  MOV dword ptr [ESI],ECX
006ed060  MOV ECX,dword ptr [EDI + 0xc]
006ed063  MOV dword ptr [ESI + 0x4],EDX
006ed066  MOV dword ptr [ESI + 0x8],EAX
006ed069  MOV dword ptr [ESI + 0xc],ECX
006ed06c  POP EDI
006ed06d  POP ESI
006ed06e  RET
