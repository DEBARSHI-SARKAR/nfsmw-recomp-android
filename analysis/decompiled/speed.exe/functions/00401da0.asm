00401da0  FLD float ptr [ESP + 0x4]
00401da4  FCOMP float ptr [ESP + 0x8]
00401da8  FNSTSW AX
00401daa  TEST AH,0x5
00401dad  JP 0x00401db4
00401daf  FLD float ptr [ESP + 0x4]
00401db3  RET
00401db4  FLD float ptr [ESP + 0x8]
00401db8  RET
