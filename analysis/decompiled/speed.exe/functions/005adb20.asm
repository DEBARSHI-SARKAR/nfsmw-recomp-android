005adb20  MOV EAX,dword ptr [ECX + 0x64]
005adb23  TEST EAX,EAX
005adb25  JBE 0x005adb42
005adb27  MOV EDX,dword ptr [ESP + 0x4]
005adb2b  CMP EDX,EAX
005adb2d  JC 0x005adb39
005adb2f  DEC EAX
005adb30  MOV dword ptr [ECX + 0x8c],EAX
005adb36  RET 0x4
005adb39  MOV dword ptr [ECX + 0x8c],EDX
005adb3f  RET 0x4
005adb42  XOR EAX,EAX
005adb44  MOV dword ptr [ECX + 0x8c],EAX
005adb4a  RET 0x4
