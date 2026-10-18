006edc90  MOV EAX,[0x00988e04]
006edc95  TEST EAX,EAX
006edc97  JNZ 0x006edcb0
006edc99  MOV EAX,dword ptr [ECX + 0x2c]
006edc9c  ADD ECX,0x2c
006edc9f  CALL dword ptr [EAX + 0xc]
006edca2  TEST EAX,EAX
006edca4  JZ 0x006edcb0
006edca6  MOV ECX,dword ptr [0x009885c8]
006edcac  TEST ECX,ECX
006edcae  JZ 0x006edcb3
006edcb0  XOR AL,AL
006edcb2  RET
006edcb3  MOV ECX,dword ptr [EAX + 0x4]
006edcb6  PUSH ESI
006edcb7  PUSH 0x4040e0
006edcbc  CALL 0x005d59f0
006edcc1  MOV ESI,EAX
006edcc3  TEST ESI,ESI
006edcc5  JZ 0x006edd0c
006edcc7  MOV EDX,dword ptr [ESI]
006edcc9  MOV ECX,ESI
006edccb  CALL dword ptr [EDX + 0x8c]
006edcd1  FMUL float ptr [0x008967e0]
006edcd7  FCOMP float ptr [0x008b01c0]
006edcdd  FNSTSW AX
006edcdf  TEST AH,0x5
006edce2  JNP 0x006edd0c
006edce4  MOV EAX,dword ptr [ESI]
006edce6  MOV ECX,ESI
006edce8  CALL dword ptr [EAX + 0xbc]
006edcee  TEST AL,AL
006edcf0  JNZ 0x006edd0c
006edcf2  MOV EDX,dword ptr [ESI]
006edcf4  MOV ECX,ESI
006edcf6  CALL dword ptr [EDX + 0x20]
006edcf9  TEST AL,AL
006edcfb  JNZ 0x006edd0c
006edcfd  MOV EAX,dword ptr [ESI]
006edcff  MOV ECX,ESI
006edd01  CALL dword ptr [EAX + 0x5c]
006edd04  TEST AL,AL
006edd06  JNZ 0x006edd0c
006edd08  MOV AL,0x1
006edd0a  POP ESI
006edd0b  RET
006edd0c  XOR AL,AL
006edd0e  POP ESI
006edd0f  RET
