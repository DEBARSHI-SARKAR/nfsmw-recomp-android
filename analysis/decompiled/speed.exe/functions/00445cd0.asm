00445cd0  FILD dword ptr [ESP + 0x4]
00445cd4  MOV EAX,dword ptr [ECX + 0x34]
00445cd7  MOV EDX,dword ptr [ESP + 0x8]
00445cdb  OR EAX,0x40
00445cde  FMUL float ptr [ECX + 0x60]
00445ce1  MOV dword ptr [ECX + 0x34],EAX
00445ce4  MOV EAX,dword ptr [ESP + 0x4]
00445ce8  MOV dword ptr [ECX + 0x38],EAX
00445ceb  FSTP float ptr [ECX + 0x40]
00445cee  MOV dword ptr [ECX + 0x3c],EDX
00445cf1  FILD dword ptr [ESP + 0x8]
00445cf5  FMUL float ptr [ECX + 0x60]
00445cf8  FSTP float ptr [ECX + 0x44]
00445cfb  RET 0x8
