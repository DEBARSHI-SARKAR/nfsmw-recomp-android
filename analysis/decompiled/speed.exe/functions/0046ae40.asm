0046ae40  MOV ECX,dword ptr [ESP + 0x4]
0046ae44  MOV EDX,dword ptr [ESP + 0xc]
0046ae48  MOV EAX,dword ptr [EDX]
0046ae4a  PUSH ESI
0046ae4b  MOV ESI,dword ptr [ESP + 0xc]
0046ae4f  FLD float ptr [ESI]
0046ae51  MOV dword ptr [ESP + 0x10],EAX
0046ae55  FLD float ptr [ECX]
0046ae57  FST float ptr [ESP + 0xc]
0046ae5b  FCOMP
0046ae5d  FNSTSW AX
0046ae5f  TEST AH,0x41
0046ae62  JNZ 0x0046ae6a
0046ae64  FSTP ST0
0046ae66  FLD float ptr [ESP + 0xc]
0046ae6a  FLD float ptr [ESP + 0x10]
0046ae6e  FCOMP
0046ae70  FNSTSW AX
0046ae72  TEST AH,0x5
0046ae75  JP 0x0046ae7d
0046ae77  FSTP ST0
0046ae79  FLD float ptr [ESP + 0x10]
0046ae7d  FLD float ptr [ESI + 0x4]
0046ae80  MOV EAX,dword ptr [EDX + 0x4]
0046ae83  FLD float ptr [ECX + 0x4]
0046ae86  MOV dword ptr [ESP + 0x10],EAX
0046ae8a  FST float ptr [ESP + 0xc]
0046ae8e  FCOMP
0046ae90  FNSTSW AX
0046ae92  TEST AH,0x41
0046ae95  JNZ 0x0046ae9d
0046ae97  FSTP ST0
0046ae99  FLD float ptr [ESP + 0xc]
0046ae9d  FLD float ptr [ESP + 0x10]
0046aea1  FCOMP
0046aea3  FNSTSW AX
0046aea5  TEST AH,0x5
0046aea8  JP 0x0046aeb0
0046aeaa  FSTP ST0
0046aeac  FLD float ptr [ESP + 0x10]
0046aeb0  FLD float ptr [ESI + 0x8]
0046aeb3  MOV EDX,dword ptr [EDX + 0x8]
0046aeb6  FLD float ptr [ECX + 0x8]
0046aeb9  MOV dword ptr [ESP + 0x10],EDX
0046aebd  FST float ptr [ESP + 0xc]
0046aec1  POP ESI
0046aec2  FCOMP
0046aec4  FNSTSW AX
0046aec6  TEST AH,0x41
0046aec9  JNZ 0x0046aed1
0046aecb  FSTP ST0
0046aecd  FLD float ptr [ESP + 0x8]
0046aed1  FLD float ptr [ESP + 0xc]
0046aed5  FCOMP
0046aed7  FNSTSW AX
0046aed9  TEST AH,0x5
0046aedc  JP 0x0046aee4
0046aede  FSTP ST0
0046aee0  FLD float ptr [ESP + 0xc]
0046aee4  FXCH ST2
0046aee6  MOV EAX,ECX
0046aee8  FSTP float ptr [ECX]
0046aeea  FSTP float ptr [ECX + 0x4]
0046aeed  FSTP float ptr [ECX + 0x8]
0046aef0  RET
