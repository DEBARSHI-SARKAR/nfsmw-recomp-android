0068ed50  SUB ESP,0x10
0068ed53  FLD float ptr [0x00890968]
0068ed59  PUSH ESI
0068ed5a  MOV ESI,dword ptr [ESP + 0x18]
0068ed5e  PUSH EDI
0068ed5f  MOV EDI,ECX
0068ed61  MOV EAX,dword ptr [EDI + 0x1a8]
0068ed67  MOV dword ptr [ESP + 0x8],EAX
0068ed6b  FLD float ptr [ESP + 0x8]
0068ed6f  FUCOMPP
0068ed71  FNSTSW AX
0068ed73  TEST AH,0x44
0068ed76  JNP 0x0068ee34
0068ed7c  CMP dword ptr [EDI + 0xfc],0x2
0068ed83  JBE 0x0068ee34
0068ed89  FLD float ptr [ESI + 0x4c]
0068ed8c  FCOMP float ptr [0x00890968]
0068ed92  FNSTSW AX
0068ed94  TEST AH,0x41
0068ed97  JNZ 0x0068ee34
0068ed9d  FLD float ptr [ESI + 0x8c]
0068eda3  FMUL float ptr [ESI + 0x4c]
0068eda6  FMUL float ptr [0x00890f14]
0068edac  FLD float ptr [ESP + 0x8]
0068edb0  FMUL ST1
0068edb2  FCOMP float ptr [0x00890968]
0068edb8  FNSTSW AX
0068edba  TEST AH,0x5
0068edbd  JNP 0x0068eefe
0068edc3  FLD float ptr [ESP + 0x8]
0068edc7  FCOMP float ptr [0x00890968]
0068edcd  FLD float ptr [ESP + 0x8]
0068edd1  FNSTSW AX
0068edd3  TEST AH,0x5
0068edd6  JP 0x0068edda
0068edd8  FCHS
0068edda  LEA ECX,[ESP + 0xc]
0068edde  FMUL ST1
0068ede0  PUSH ECX
0068ede1  MOV EDX,ECX
0068ede3  FSTP float ptr [ESP + 0x14]
0068ede7  PUSH ESI
0068ede8  PUSH EDX
0068ede9  MOV dword ptr [ESP + 0x18],0x0
0068edf1  FSTP ST0
0068edf3  MOV dword ptr [ESP + 0x20],0x0
0068edfb  CALL 0x00401670
0068ee00  FLD float ptr [ESP + 0x18]
0068ee04  FADD float ptr [ESI + 0x60]
0068ee07  MOV ECX,dword ptr [EDI + 0xe8]
0068ee0d  ADD ESP,0xc
0068ee10  LEA EDX,[ESP + 0xc]
0068ee14  FSTP float ptr [ESP + 0xc]
0068ee18  PUSH EDX
0068ee19  FLD float ptr [ESP + 0x14]
0068ee1d  FADD float ptr [ESI + 0x64]
0068ee20  FSTP float ptr [ESP + 0x14]
0068ee24  FLD float ptr [ESP + 0x18]
0068ee28  FADD float ptr [ESI + 0x68]
0068ee2b  FSTP float ptr [ESP + 0x18]
0068ee2f  MOV EAX,dword ptr [ECX]
0068ee31  CALL dword ptr [EAX + 0x64]
0068ee34  FLD float ptr [ESI + 0x8c]
0068ee3a  MOV EAX,dword ptr [EDI + 0x1ac]
0068ee40  FMUL float ptr [ESI + 0x4c]
0068ee43  MOV dword ptr [ESP + 0x8],EAX
0068ee47  FST float ptr [ESP + 0x1c]
0068ee4b  FMUL float ptr [ESP + 0x8]
0068ee4f  FCOMP float ptr [0x00890968]
0068ee55  FNSTSW AX
0068ee57  TEST AH,0x41
0068ee5a  JNZ 0x0068ef00
0068ee60  CMP dword ptr [EDI + 0xfc],0x2
0068ee67  JBE 0x0068ef00
0068ee6d  CMP word ptr [ESI + 0xcc],0x0
0068ee75  JNZ 0x0068ef00
0068ee7b  FLD float ptr [ESP + 0x1c]
0068ee7f  FMUL float ptr [0x008ab244]
0068ee85  FLD float ptr [ESP + 0x8]
0068ee89  FCOMP float ptr [0x00890968]
0068ee8f  FLD float ptr [ESP + 0x8]
0068ee93  FNSTSW AX
0068ee95  TEST AH,0x5
0068ee98  JP 0x0068ee9c
0068ee9a  FCHS
0068ee9c  LEA ECX,[ESP + 0xc]
0068eea0  FMUL ST1
0068eea2  PUSH ECX
0068eea3  MOV EDX,ECX
0068eea5  FSTP float ptr [ESP + 0x14]
0068eea9  PUSH ESI
0068eeaa  PUSH EDX
0068eeab  MOV dword ptr [ESP + 0x18],0x0
0068eeb3  FSTP ST0
0068eeb5  MOV dword ptr [ESP + 0x20],0x0
0068eebd  CALL 0x00401670
0068eec2  FLD float ptr [ESP + 0x18]
0068eec6  FADD float ptr [ESI + 0x60]
0068eec9  MOV ECX,dword ptr [EDI + 0xe8]
0068eecf  ADD ESP,0xc
0068eed2  LEA EDX,[ESP + 0xc]
0068eed6  FSTP float ptr [ESP + 0xc]
0068eeda  PUSH EDX
0068eedb  FLD float ptr [ESP + 0x14]
0068eedf  FADD float ptr [ESI + 0x64]
0068eee2  FSTP float ptr [ESP + 0x14]
0068eee6  FLD float ptr [ESP + 0x18]
0068eeea  FADD float ptr [ESI + 0x68]
0068eeed  FSTP float ptr [ESP + 0x18]
0068eef1  MOV EAX,dword ptr [ECX]
0068eef3  CALL dword ptr [EAX + 0x64]
0068eef6  POP EDI
0068eef7  POP ESI
0068eef8  ADD ESP,0x10
0068eefb  RET 0x4
0068eefe  FSTP ST0
0068ef00  POP EDI
0068ef01  POP ESI
0068ef02  ADD ESP,0x10
0068ef05  RET 0x4
