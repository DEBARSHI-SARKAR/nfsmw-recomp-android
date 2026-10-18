0041da00  SUB ESP,0xc
0041da03  PUSH ESI
0041da04  MOV ESI,dword ptr [ESP + 0x18]
0041da08  PUSH EDI
0041da09  MOV EDI,dword ptr [ESP + 0x20]
0041da0d  CMP ESI,EDI
0041da0f  JZ 0x0041daa7
0041da15  MOV ECX,dword ptr [ESI]
0041da17  MOV EAX,dword ptr [ECX]
0041da19  LEA EDX,[ESP + 0x8]
0041da1d  PUSH EDX
0041da1e  MOV dword ptr [ESP + 0xc],0x0
0041da26  MOV dword ptr [ESP + 0x10],0x0
0041da2e  MOV dword ptr [ESP + 0x14],0x0
0041da36  CALL dword ptr [EAX + 0xd4]
0041da3c  TEST AL,AL
0041da3e  JZ 0x0041da9c
0041da40  FLD float ptr [ESP + 0x24]
0041da44  FCOMP float ptr [ESP + 0x8]
0041da48  FNSTSW AX
0041da4a  TEST AH,0x41
0041da4d  JNZ 0x0041da55
0041da4f  FLD float ptr [ESP + 0x24]
0041da53  JMP 0x0041da59
0041da55  FLD float ptr [ESP + 0x8]
0041da59  FSTP float ptr [ESP + 0x24]
0041da5d  FLD float ptr [ESP + 0x28]
0041da61  FCOMP float ptr [ESP + 0xc]
0041da65  FNSTSW AX
0041da67  TEST AH,0x41
0041da6a  JNZ 0x0041da72
0041da6c  FLD float ptr [ESP + 0x28]
0041da70  JMP 0x0041da76
0041da72  FLD float ptr [ESP + 0xc]
0041da76  FSTP float ptr [ESP + 0x28]
0041da7a  FLD float ptr [ESP + 0x2c]
0041da7e  FCOMP float ptr [ESP + 0x10]
0041da82  FNSTSW AX
0041da84  TEST AH,0x41
0041da87  JNZ 0x0041da8f
0041da89  FLD float ptr [ESP + 0x2c]
0041da8d  JMP 0x0041da93
0041da8f  FLD float ptr [ESP + 0x10]
0041da93  FSTP float ptr [ESP + 0x2c]
0041da97  MOV byte ptr [ESP + 0x30],0x1
0041da9c  ADD ESI,0x4
0041da9f  CMP ESI,EDI
0041daa1  JNZ 0x0041da15
0041daa7  MOV EAX,dword ptr [ESP + 0x18]
0041daab  MOV EDX,dword ptr [ESP + 0x24]
0041daaf  MOV ECX,EAX
0041dab1  MOV dword ptr [ECX],EDX
0041dab3  MOV EDX,dword ptr [ESP + 0x28]
0041dab7  MOV dword ptr [ECX + 0x4],EDX
0041daba  MOV EDX,dword ptr [ESP + 0x2c]
0041dabe  MOV dword ptr [ECX + 0x8],EDX
0041dac1  MOV EDX,dword ptr [ESP + 0x30]
0041dac5  POP EDI
0041dac6  MOV dword ptr [ECX + 0xc],EDX
0041dac9  POP ESI
0041daca  ADD ESP,0xc
0041dacd  RET
