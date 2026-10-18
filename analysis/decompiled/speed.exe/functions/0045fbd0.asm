0045fbd0  PUSH ECX
0045fbd1  MOV EAX,dword ptr [ESP + 0x10]
0045fbd5  MOV ECX,dword ptr [EAX + 0x4]
0045fbd8  FLD float ptr [EAX]
0045fbda  MOV EDX,dword ptr [EAX + 0x8]
0045fbdd  FLD ST0
0045fbdf  MOV dword ptr [ESP + 0x10],ECX
0045fbe3  MOV ECX,dword ptr [ESP + 0x8]
0045fbe7  FCOMP float ptr [ECX]
0045fbe9  MOV dword ptr [ESP],EDX
0045fbec  FNSTSW AX
0045fbee  TEST AH,0x5
0045fbf1  JP 0x0045fbf5
0045fbf3  FST float ptr [ECX]
0045fbf5  FLD float ptr [ESP + 0x10]
0045fbf9  FCOMP float ptr [ECX + 0x4]
0045fbfc  FNSTSW AX
0045fbfe  TEST AH,0x5
0045fc01  JP 0x0045fc0a
0045fc03  MOV EAX,dword ptr [ESP + 0x10]
0045fc07  MOV dword ptr [ECX + 0x4],EAX
0045fc0a  FLD float ptr [ESP]
0045fc0d  FCOMP float ptr [ECX + 0x8]
0045fc10  FNSTSW AX
0045fc12  TEST AH,0x5
0045fc15  JP 0x0045fc1d
0045fc17  MOV EDX,dword ptr [ESP]
0045fc1a  MOV dword ptr [ECX + 0x8],EDX
0045fc1d  MOV ECX,dword ptr [ESP + 0xc]
0045fc21  FLD ST0
0045fc23  FCOMP float ptr [ECX]
0045fc25  FNSTSW AX
0045fc27  TEST AH,0x41
0045fc2a  JNZ 0x0045fc30
0045fc2c  FSTP float ptr [ECX]
0045fc2e  JMP 0x0045fc32
0045fc30  FSTP ST0
0045fc32  FLD float ptr [ESP + 0x10]
0045fc36  FCOMP float ptr [ECX + 0x4]
0045fc39  FNSTSW AX
0045fc3b  TEST AH,0x41
0045fc3e  JNZ 0x0045fc47
0045fc40  MOV EAX,dword ptr [ESP + 0x10]
0045fc44  MOV dword ptr [ECX + 0x4],EAX
0045fc47  FLD float ptr [ESP]
0045fc4a  FCOMP float ptr [ECX + 0x8]
0045fc4d  FNSTSW AX
0045fc4f  TEST AH,0x41
0045fc52  JNZ 0x0045fc5a
0045fc54  MOV EDX,dword ptr [ESP]
0045fc57  MOV dword ptr [ECX + 0x8],EDX
0045fc5a  POP ECX
0045fc5b  RET
