0044adb0  PUSH ESI
0044adb1  MOV ESI,dword ptr [ECX + 0x18]
0044adb4  PUSH EDI
0044adb5  LEA EDI,[ECX + 0x14]
0044adb8  CMP ESI,EDI
0044adba  JZ 0x0044add9
0044adbc  PUSH EBX
0044adbd  MOV EBX,dword ptr [ESP + 0x14]
0044adc1  PUSH EBP
0044adc2  MOV EBP,dword ptr [ESP + 0x14]
0044adc6  MOV ECX,dword ptr [ESI + 0x8]
0044adc9  MOV EAX,dword ptr [ECX]
0044adcb  PUSH EBX
0044adcc  PUSH EBP
0044adcd  CALL dword ptr [EAX + 0x1c]
0044add0  MOV ESI,dword ptr [ESI + 0x4]
0044add3  CMP ESI,EDI
0044add5  JNZ 0x0044adc6
0044add7  POP EBP
0044add8  POP EBX
0044add9  POP EDI
0044adda  POP ESI
0044addb  RET 0x8
