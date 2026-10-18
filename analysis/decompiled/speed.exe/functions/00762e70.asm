00762e70  MOV ECX,dword ptr [ESP + 0x8]
00762e74  MOV EDX,dword ptr [ESP + 0x4]
00762e78  FLD float ptr [EDX + 0x8]
00762e7b  FSUB float ptr [ECX + 0x18]
00762e7e  FLD float ptr [ECX]
00762e80  FSUB float ptr [ECX + 0x10]
00762e83  FMULP
00762e85  FLD float ptr [EDX]
00762e87  FSUB float ptr [ECX + 0x10]
00762e8a  FLD float ptr [ECX + 0x8]
00762e8d  FSUB float ptr [ECX + 0x18]
00762e90  FMULP
00762e92  FSUBP
00762e94  FCOMP float ptr [0x00890968]
00762e9a  FNSTSW AX
00762e9c  TEST AH,0x1
00762e9f  JNZ 0x00762ef6
00762ea1  FLD float ptr [ECX + 0x10]
00762ea4  FSUB float ptr [ECX + 0x20]
00762ea7  FLD float ptr [EDX + 0x8]
00762eaa  FSUB float ptr [ECX + 0x28]
00762ead  FMULP
00762eaf  FLD float ptr [ECX + 0x18]
00762eb2  FSUB float ptr [ECX + 0x28]
00762eb5  FLD float ptr [EDX]
00762eb7  FSUB float ptr [ECX + 0x20]
00762eba  FMULP
00762ebc  FSUBP
00762ebe  FCOMP float ptr [0x00890968]
00762ec4  FNSTSW AX
00762ec6  TEST AH,0x1
00762ec9  JNZ 0x00762ef6
00762ecb  FLD float ptr [EDX + 0x8]
00762ece  FSUB float ptr [ECX + 0x8]
00762ed1  FLD float ptr [ECX + 0x20]
00762ed4  FSUB float ptr [ECX]
00762ed6  FMULP
00762ed8  FLD float ptr [ECX + 0x28]
00762edb  FSUB float ptr [ECX + 0x8]
00762ede  FLD float ptr [EDX]
00762ee0  FSUB float ptr [ECX]
00762ee2  FMULP
00762ee4  FSUBP
00762ee6  FCOMP float ptr [0x00890968]
00762eec  FNSTSW AX
00762eee  TEST AH,0x1
00762ef1  JNZ 0x00762ef6
00762ef3  MOV AL,0x1
00762ef5  RET
00762ef6  XOR AL,AL
00762ef8  RET
