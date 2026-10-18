0069aaa0  SUB ESP,0xc
0069aaa3  PUSH ESI
0069aaa4  MOV ESI,ECX
0069aaa6  MOV EAX,dword ptr [ESI + 0x18]
0069aaa9  MOV ECX,dword ptr [EAX]
0069aaab  MOV DL,byte ptr [ECX + 0x1e]
0069aaae  SHR DL,0x3
0069aab1  TEST DL,0x1
0069aab4  JZ 0x0069aaf9
0069aab6  MOV EAX,dword ptr [ESI]
0069aab8  PUSH EDI
0069aab9  MOV ECX,ESI
0069aabb  CALL dword ptr [EAX + 0x18]
0069aabe  FDIVR float ptr [0x0089096c]
0069aac4  MOV EAX,dword ptr [ESP + 0x18]
0069aac8  MOV EDI,dword ptr [ESI]
0069aaca  FLD ST0
0069aacc  FMUL float ptr [EAX]
0069aace  FSTP float ptr [ESP + 0x8]
0069aad2  FLD ST0
0069aad4  FMUL float ptr [EAX + 0x4]
0069aad7  FSTP float ptr [ESP + 0xc]
0069aadb  FMUL float ptr [EAX + 0x8]
0069aade  FSTP float ptr [ESP + 0x10]
0069aae2  CALL 0x006e8da0
0069aae7  PUSH ECX
0069aae8  LEA ECX,[ESP + 0xc]
0069aaec  FSTP float ptr [ESP]
0069aaef  PUSH ECX
0069aaf0  MOV ECX,ESI
0069aaf2  CALL dword ptr [EDI + 0x9c]
0069aaf8  POP EDI
0069aaf9  POP ESI
0069aafa  ADD ESP,0xc
0069aafd  RET 0x4
