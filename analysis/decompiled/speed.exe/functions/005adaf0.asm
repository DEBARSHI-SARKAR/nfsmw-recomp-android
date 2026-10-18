005adaf0  MOV EAX,dword ptr [ECX + 0x60]
005adaf3  TEST EAX,EAX
005adaf5  JBE 0x005adb12
005adaf7  MOV EDX,dword ptr [ESP + 0x4]
005adafb  CMP EDX,EAX
005adafd  JC 0x005adb09
005adaff  DEC EAX
005adb00  MOV dword ptr [ECX + 0x88],EAX
005adb06  RET 0x4
005adb09  MOV dword ptr [ECX + 0x88],EDX
005adb0f  RET 0x4
005adb12  XOR EAX,EAX
005adb14  MOV dword ptr [ECX + 0x88],EAX
005adb1a  RET 0x4
