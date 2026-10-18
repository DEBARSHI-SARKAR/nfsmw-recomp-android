00668fe0  FLD float ptr [ECX]
00668fe2  FSUB float ptr [ESP + 0x4]
00668fe6  FST float ptr [ECX]
00668fe8  FCOMP float ptr [0x00890968]
00668fee  FNSTSW AX
00668ff0  TEST AH,0x41
00668ff3  JP 0x00669002
00668ff5  MOV dword ptr [ECX + 0x4],0x0
00668ffc  MOV dword ptr [ECX],0x0
00669002  RET 0x4
