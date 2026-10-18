0069fc00  SUB ESP,0xc
0069fc03  PUSH ESI
0069fc04  MOV ESI,ECX
0069fc06  MOV EAX,dword ptr [ESI + 0xf4]
0069fc0c  TEST EAX,EAX
0069fc0e  JZ 0x0069fe11
0069fc14  MOV ECX,EAX
0069fc16  MOV EAX,dword ptr [ECX]
0069fc18  CALL dword ptr [EAX + 0x20]
0069fc1b  FST float ptr [ESP + 0x4]
0069fc1f  FCOMP float ptr [0x00890968]
0069fc25  FLD float ptr [ESP + 0x4]
0069fc29  FNSTSW AX
0069fc2b  TEST AH,0x5
0069fc2e  JP 0x0069fc32
0069fc30  FCHS
0069fc32  FCOMP float ptr [0x008aabe0]
0069fc38  FNSTSW AX
0069fc3a  TEST AH,0x41
0069fc3d  JNP 0x0069fe11
0069fc43  MOV ECX,dword ptr [ESI + 0xdc]
0069fc49  MOV EDX,dword ptr [ECX + 0x70]
0069fc4c  MOV dword ptr [ESP + 0xc],EDX
0069fc50  FLD float ptr [ESP + 0xc]
0069fc54  MOV EDX,dword ptr [ESP + 0x14]
0069fc58  FMUL float ptr [ESP + 0x4]
0069fc5c  MOV CL,byte ptr [EDX + 0xc4]
0069fc62  PUSH EBX
0069fc63  XOR BL,BL
0069fc65  AND CL,0x1
0069fc68  FSTP float ptr [ESP + 0xc]
0069fc6c  JNZ 0x0069fc88
0069fc6e  CMP word ptr [EDX + 0xcc],0x3
0069fc76  JG 0x0069fc8a
0069fc78  FLD float ptr [EDX + 0x4c]
0069fc7b  FCOMP float ptr [0x008933d4]
0069fc81  FNSTSW AX
0069fc83  TEST AH,0x41
0069fc86  JNZ 0x0069fc8a
0069fc88  MOV BL,0x1
0069fc8a  TEST CL,CL
0069fc8c  FLD float ptr [EDX + 0xd4]
0069fc92  FMUL float ptr [EDX + 0xd0]
0069fc98  JZ 0x0069fca0
0069fc9a  FMUL float ptr [0x008910f0]
0069fca0  FLD float ptr [0x00890968]
0069fca6  FLD float ptr [ESP + 0xc]
0069fcaa  FUCOMPP
0069fcac  FNSTSW AX
0069fcae  TEST AH,0x44
0069fcb1  JNP 0x0069fd4b
0069fcb7  MOV ECX,dword ptr [ESI + 0x12c]
0069fcbd  FLD float ptr [ECX + 0x78]
0069fcc0  FCOMP float ptr [0x00890968]
0069fcc6  FNSTSW AX
0069fcc8  TEST AH,0x41
0069fccb  JNZ 0x0069fd01
0069fccd  MOV AL,byte ptr [ECX + 0x10c]
0069fcd3  TEST AL,AL
0069fcd5  JNZ 0x0069fced
0069fcd7  FLD float ptr [ESP + 0xc]
0069fcdb  FMUL float ptr [0x008933d4]
0069fce1  FADD float ptr [ECX + 0xe0]
0069fce7  FSTP float ptr [ECX + 0xe0]
0069fced  FLD ST0
0069fcef  MOV byte ptr [ECX + 0x10d],BL
0069fcf5  FMUL float ptr [ECX + 0xe4]
0069fcfb  FSTP float ptr [ECX + 0xe4]
0069fd01  MOV ECX,dword ptr [ESI + 0x130]
0069fd07  FLD float ptr [ECX + 0x78]
0069fd0a  FCOMP float ptr [0x00890968]
0069fd10  FNSTSW AX
0069fd12  TEST AH,0x41
0069fd15  JNZ 0x0069fd4b
0069fd17  MOV AL,byte ptr [ECX + 0x10c]
0069fd1d  TEST AL,AL
0069fd1f  JNZ 0x0069fd37
0069fd21  FLD float ptr [ESP + 0xc]
0069fd25  FMUL float ptr [0x008933d4]
0069fd2b  FADD float ptr [ECX + 0xe0]
0069fd31  FSTP float ptr [ECX + 0xe0]
0069fd37  FLD ST0
0069fd39  MOV byte ptr [ECX + 0x10d],BL
0069fd3f  FMUL float ptr [ECX + 0xe4]
0069fd45  FSTP float ptr [ECX + 0xe4]
0069fd4b  FLD float ptr [0x0089096c]
0069fd51  FSUB float ptr [ESP + 0x10]
0069fd55  FMUL float ptr [ESP + 0x8]
0069fd59  FSTP float ptr [ESP + 0x18]
0069fd5d  FLD float ptr [0x00890968]
0069fd63  FLD float ptr [ESP + 0x18]
0069fd67  FUCOMPP
0069fd69  FNSTSW AX
0069fd6b  TEST AH,0x44
0069fd6e  JNP 0x0069fe0e
0069fd74  MOV ECX,dword ptr [ESI + 0x134]
0069fd7a  FLD float ptr [ECX + 0x78]
0069fd7d  FCOMP float ptr [0x00890968]
0069fd83  FNSTSW AX
0069fd85  TEST AH,0x41
0069fd88  JNZ 0x0069fdbe
0069fd8a  MOV AL,byte ptr [ECX + 0x10c]
0069fd90  TEST AL,AL
0069fd92  JNZ 0x0069fdaa
0069fd94  FLD float ptr [ESP + 0x18]
0069fd98  FMUL float ptr [0x008933d4]
0069fd9e  FADD float ptr [ECX + 0xe0]
0069fda4  FSTP float ptr [ECX + 0xe0]
0069fdaa  FLD ST0
0069fdac  MOV byte ptr [ECX + 0x10d],BL
0069fdb2  FMUL float ptr [ECX + 0xe4]
0069fdb8  FSTP float ptr [ECX + 0xe4]
0069fdbe  MOV ECX,dword ptr [ESI + 0x138]
0069fdc4  FLD float ptr [ECX + 0x78]
0069fdc7  FCOMP float ptr [0x00890968]
0069fdcd  FNSTSW AX
0069fdcf  TEST AH,0x41
0069fdd2  JNZ 0x0069fe0e
0069fdd4  MOV AL,byte ptr [ECX + 0x10c]
0069fdda  TEST AL,AL
0069fddc  JNZ 0x0069fdf4
0069fdde  FLD float ptr [ESP + 0x18]
0069fde2  FMUL float ptr [0x008933d4]
0069fde8  FADD float ptr [ECX + 0xe0]
0069fdee  FSTP float ptr [ECX + 0xe0]
0069fdf4  FMUL float ptr [ECX + 0xe4]
0069fdfa  MOV byte ptr [ECX + 0x10d],BL
0069fe00  POP EBX
0069fe01  POP ESI
0069fe02  FSTP float ptr [ECX + 0xe4]
0069fe08  ADD ESP,0xc
0069fe0b  RET 0x4
0069fe0e  FSTP ST0
0069fe10  POP EBX
0069fe11  POP ESI
0069fe12  ADD ESP,0xc
0069fe15  RET 0x4
