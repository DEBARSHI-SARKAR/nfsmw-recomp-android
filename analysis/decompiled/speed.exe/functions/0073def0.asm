0073def0  FLD float ptr [ESP + 0x4]
0073def4  MOV ECX,dword ptr [ECX + 0x1cc]
0073defa  FLD float ptr [0x00890968]
0073df00  FLD float ptr [ESP + 0x4]
0073df04  FUCOMPP
0073df06  FNSTSW AX
0073df08  TEST AH,0x44
0073df0b  JP 0x0073df28
0073df0d  MOV EAX,dword ptr [ECX]
0073df0f  FSTP ST0
0073df11  MOV EDX,dword ptr [EAX + 0x8]
0073df14  FLD float ptr [EDX + 0x44]
0073df17  FLD float ptr [0x00890968]
0073df1d  FLD ST1
0073df1f  FUCOMPP
0073df21  FNSTSW AX
0073df23  TEST AH,0x44
0073df26  JNP 0x0073df49
0073df28  FILD dword ptr [0x00925b14]
0073df2e  XOR AL,AL
0073df30  MOV byte ptr [ECX + 0xc],AL
0073df33  MOV byte ptr [ECX + 0xd],AL
0073df36  FMUL float ptr [0x00890984]
0073df3c  MOV byte ptr [ECX + 0xe],0x1
0073df40  FSTP float ptr [ECX + 0x4]
0073df43  FSTP float ptr [ECX + 0x8]
0073df46  RET 0x4
0073df49  FSTP ST0
0073df4b  RET 0x4
