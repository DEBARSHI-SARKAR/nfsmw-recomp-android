00401dc0  FLD float ptr [ESP + 0x4]
00401dc4  FCOMP float ptr [ESP + 0x8]
00401dc8  FNSTSW AX
00401dca  TEST AH,0x41
00401dcd  JNZ 0x00401dd4
00401dcf  FLD float ptr [ESP + 0x4]
00401dd3  RET
00401dd4  FLD float ptr [ESP + 0x8]
00401dd8  RET
