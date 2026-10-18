0068ff00  PUSH ESI
0068ff01  PUSH EDI
0068ff02  PUSH 0x1
0068ff04  MOV ESI,ECX
0068ff06  CALL 0x00671330
0068ff0b  FLD float ptr [ESP + 0xc]
0068ff0f  FCOMP float ptr [0x00890cd4]
0068ff15  FNSTSW AX
0068ff17  TEST AH,0x41
0068ff1a  JNZ 0x0068ff22
0068ff1c  FLD float ptr [ESP + 0xc]
0068ff20  JMP 0x0068ff28
0068ff22  FLD float ptr [0x00890cd4]
0068ff28  MOV EDI,dword ptr [ESP + 0x14]
0068ff2c  FSTP float ptr [ESI + 0xc4]
0068ff32  MOV ECX,dword ptr [ESP + 0x10]
0068ff36  XOR EAX,EAX
0068ff38  MOV dword ptr [ESI + 0xf8],EDI
0068ff3e  MOV EDI,dword ptr [ESP + 0x18]
0068ff42  MOV dword ptr [ESI + 0xf0],ECX
0068ff48  MOV EDX,0x3f800000
0068ff4d  MOV dword ptr [ESI + 0xfc],EDI
0068ff53  MOV dword ptr [ESI + 0xc8],EAX
0068ff59  MOV dword ptr [ESI + 0xcc],EAX
0068ff5f  MOV dword ptr [ESI + 0xd0],EAX
0068ff65  MOV dword ptr [ESI + 0xd4],EAX
0068ff6b  MOV dword ptr [ESI + 0xd8],EAX
0068ff71  MOV dword ptr [ESI + 0xdc],EAX
0068ff77  MOV dword ptr [ESI + 0xe0],EAX
0068ff7d  MOV dword ptr [ESI + 0xe8],EAX
0068ff83  MOV dword ptr [ESI + 0xec],EAX
0068ff89  MOV dword ptr [ESI + 0xf4],EAX
0068ff8f  MOV dword ptr [ESI + 0x100],EAX
0068ff95  SAR ECX,0x1
0068ff97  MOV byte ptr [ESI + 0x10c],AL
0068ff9d  MOV byte ptr [ESI + 0x10d],AL
0068ffa3  MOV dword ptr [ESI + 0x110],EAX
0068ffa9  MOV dword ptr [ESI + 0x114],EAX
0068ffaf  POP EDI
0068ffb0  MOV dword ptr [ESI + 0xe4],EDX
0068ffb6  MOV dword ptr [ESI + 0x104],ECX
0068ffbc  MOV dword ptr [ESI + 0x118],0x3f000000
0068ffc6  MOV dword ptr [ESI + 0x11c],EDX
0068ffcc  MOV EAX,ESI
0068ffce  POP ESI
0068ffcf  RET 0x10
