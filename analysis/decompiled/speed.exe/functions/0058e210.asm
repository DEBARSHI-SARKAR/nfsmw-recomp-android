0058e210  FLD float ptr [ESP + 0xc]
0058e214  MOV EDX,dword ptr [ESP + 0x8]
0058e218  FCOMP float ptr [0x00890968]
0058e21e  XOR EAX,EAX
0058e220  MOV dword ptr [ECX + 0xc],EAX
0058e223  MOV dword ptr [ECX + 0x10],EAX
0058e226  MOV byte ptr [ECX + 0x15],AL
0058e229  MOV byte ptr [ECX + 0x16],AL
0058e22c  MOV byte ptr [ECX + 0x17],AL
0058e22f  MOV EAX,dword ptr [ESP + 0x4]
0058e233  MOV dword ptr [ECX + 0x18],EAX
0058e236  FNSTSW AX
0058e238  MOV byte ptr [ECX + 0x14],0x1
0058e23c  TEST AH,0x1
0058e23f  MOV dword ptr [ECX],0x8a1714
0058e245  MOV dword ptr [ECX + 0x1c],EDX
0058e248  JNZ 0x0058e264
0058e24a  MOV EAX,dword ptr [ESP + 0x10]
0058e24e  FLD float ptr [ESP + 0xc]
0058e252  MOV EDX,dword ptr [ESP + 0x14]
0058e256  FSTP float ptr [ECX + 0x20]
0058e259  MOV dword ptr [ECX + 0x24],EAX
0058e25c  MOV dword ptr [ECX + 0x28],EDX
0058e25f  MOV EAX,ECX
0058e261  RET 0x14
0058e264  MOV EAX,dword ptr [ESP + 0x10]
0058e268  FLD float ptr [0x00890968]
0058e26e  MOV EDX,dword ptr [ESP + 0x14]
0058e272  FSTP float ptr [ECX + 0x20]
0058e275  MOV dword ptr [ECX + 0x24],EAX
0058e278  MOV dword ptr [ECX + 0x28],EDX
0058e27b  MOV EAX,ECX
0058e27d  RET 0x14
