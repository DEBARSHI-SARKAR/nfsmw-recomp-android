0045ea70  PUSH EBP
0045ea71  MOV EBP,ESP
0045ea73  AND ESP,0xfffffff0
0045ea76  SUB ESP,0x140
0045ea7c  FLD float ptr [EBP + 0x10]
0045ea7f  MOV ECX,dword ptr [EBP + 0x14]
0045ea82  FMUL float ptr [EBP + 0x10]
0045ea85  MOV EDX,dword ptr [EBP + 0x18]
0045ea88  FLD float ptr [EBP + 0x10]
0045ea8b  MOV EAX,dword ptr [EBP + 0x10]
0045ea8e  MOV dword ptr [ESP + 0x18],ECX
0045ea92  FMUL ST1
0045ea94  LEA ECX,[ESP]
0045ea97  MOV dword ptr [ESP + 0x28],EDX
0045ea9b  MOV dword ptr [ESP + 0x8],EAX
0045ea9f  FSTP float ptr [ESP]
0045eaa2  MOV EAX,dword ptr [EBP + 0x1c]
0045eaa5  PUSH ECX
0045eaa6  FSTP float ptr [ESP + 0x8]
0045eaaa  LEA EDX,[ESP + 0xc4]
0045eab1  FLD float ptr [EBP + 0x14]
0045eab4  PUSH EDX
0045eab5  FMUL float ptr [EBP + 0x14]
0045eab8  MOV dword ptr [ESP + 0x48],0x40000000
0045eac0  FLD float ptr [EBP + 0x14]
0045eac3  MOV dword ptr [ESP + 0x4c],0xc0000000
0045eacb  MOV dword ptr [ESP + 0x50],0x3f800000
0045ead3  FMUL ST1
0045ead5  MOV dword ptr [ESP + 0x54],0x3f800000
0045eadd  MOV dword ptr [ESP + 0x58],0xc0400000
0045eae5  MOV dword ptr [ESP + 0x5c],0x40400000
0045eaed  FSTP float ptr [ESP + 0x18]
0045eaf1  MOV dword ptr [ESP + 0x60],0xc0000000
0045eaf9  MOV dword ptr [ESP + 0x64],0xbf800000
0045eb01  FSTP float ptr [ESP + 0x1c]
0045eb05  MOV dword ptr [ESP + 0x68],0x0
0045eb0d  FLD float ptr [EBP + 0x18]
0045eb10  MOV dword ptr [ESP + 0x6c],0x0
0045eb18  FMUL float ptr [EBP + 0x18]
0045eb1b  MOV dword ptr [ESP + 0x70],0x3f800000
0045eb23  FLD float ptr [EBP + 0x18]
0045eb26  MOV dword ptr [ESP + 0x74],0x0
0045eb2e  MOV dword ptr [ESP + 0x78],0x3f800000
0045eb36  FMUL ST1
0045eb38  MOV dword ptr [ESP + 0x7c],0x0
0045eb40  MOV dword ptr [ESP + 0x80],0x0
0045eb4b  MOV dword ptr [ESP + 0x84],0x0
0045eb56  FSTP float ptr [ESP + 0x28]
0045eb5a  MOV dword ptr [ESP + 0x88],0x0
0045eb65  MOV dword ptr [ESP + 0x8c],0x0
0045eb70  FSTP float ptr [ESP + 0x2c]
0045eb74  MOV dword ptr [ESP + 0x90],0x0
0045eb7f  FLD float ptr [EBP + 0x1c]
0045eb82  MOV dword ptr [ESP + 0x94],0x3f800000
0045eb8d  FMUL float ptr [EBP + 0x1c]
0045eb90  MOV dword ptr [ESP + 0x98],0x3f800000
0045eb9b  FLD float ptr [EBP + 0x1c]
0045eb9e  MOV dword ptr [ESP + 0x9c],0x3f800000
0045eba9  MOV dword ptr [ESP + 0xa0],0x3f800000
0045ebb4  FMUL ST1
0045ebb6  MOV dword ptr [ESP + 0xa4],0x3f800000
0045ebc1  MOV dword ptr [ESP + 0xa8],0x0
0045ebcc  MOV dword ptr [ESP + 0xac],0x0
0045ebd7  FSTP float ptr [ESP + 0x38]
0045ebdb  MOV dword ptr [ESP + 0xb0],0x3f800000
0045ebe6  MOV dword ptr [ESP + 0xb4],0x0
0045ebf1  FSTP float ptr [ESP + 0x3c]
0045ebf5  MOV dword ptr [ESP + 0xb8],0x40400000
0045ec00  MOV dword ptr [ESP + 0xbc],0x40000000
0045ec0b  MOV dword ptr [ESP + 0xc0],0x3f800000
0045ec16  MOV dword ptr [ESP + 0xc4],0x0
0045ec21  MOV dword ptr [ESP + 0x14],0x3f800000
0045ec29  MOV dword ptr [ESP + 0x24],0x3f800000
0045ec31  MOV dword ptr [ESP + 0x34],0x3f800000
0045ec39  MOV dword ptr [ESP + 0x40],EAX
0045ec3d  MOV dword ptr [ESP + 0x44],0x3f800000
0045ec45  CALL 0x0045e610
0045ec4a  MOV EAX,EDX
0045ec4c  PUSH EAX
0045ec4d  LEA ECX,[ESP + 0x8c]
0045ec54  PUSH ECX
0045ec55  LEA EDX,[ESP + 0x10]
0045ec59  PUSH EDX
0045ec5a  CALL 0x006bd900
0045ec5f  LEA EAX,[ESP + 0x14]
0045ec63  PUSH EAX
0045ec64  LEA ECX,[ESP + 0x58]
0045ec68  PUSH ECX
0045ec69  LEA EDX,[ESP + 0x11c]
0045ec70  PUSH EDX
0045ec71  CALL 0x006bd900
0045ec76  MOV EAX,dword ptr [EBP + 0xc]
0045ec79  MOV EDX,dword ptr [EBP + 0x8]
0045ec7c  PUSH EAX
0045ec7d  LEA ECX,[ESP + 0x124]
0045ec84  PUSH ECX
0045ec85  PUSH EDX
0045ec86  CALL 0x006bd900
0045ec8b  ADD ESP,0x2c
0045ec8e  MOV ESP,EBP
0045ec90  POP EBP
0045ec91  RET
