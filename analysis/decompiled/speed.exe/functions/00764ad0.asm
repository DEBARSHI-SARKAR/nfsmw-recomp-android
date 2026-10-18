00764ad0  MOV EAX,dword ptr [ESP + 0x4]
00764ad4  SUB ESP,0x8
00764ad7  TEST EAX,EAX
00764ad9  JNZ 0x00764b1c
00764adb  MOVSX EAX,byte ptr [ECX + 0x13]
00764adf  MOVSX ECX,byte ptr [ECX + 0x15]
00764ae3  MOV dword ptr [ESP + 0xc],EAX
00764ae7  MOV EAX,dword ptr [ESP + 0x10]
00764aeb  FILD dword ptr [ESP + 0xc]
00764aef  MOV dword ptr [ESP + 0xc],ECX
00764af3  FMUL float ptr [0x00890bf0]
00764af9  FSTP float ptr [ESP]
00764afc  MOV EDX,dword ptr [ESP]
00764aff  FILD dword ptr [ESP + 0xc]
00764b03  MOV dword ptr [EAX],EDX
00764b05  FMUL float ptr [0x00890bf0]
00764b0b  FSTP float ptr [ESP + 0x4]
00764b0f  MOV ECX,dword ptr [ESP + 0x4]
00764b13  MOV dword ptr [EAX + 0x4],ECX
00764b16  ADD ESP,0x8
00764b19  RET 0x8
00764b1c  MOVSX EDX,byte ptr [ECX + 0x10]
00764b20  MOVSX EAX,byte ptr [ECX + 0x12]
00764b24  MOV dword ptr [ESP + 0xc],EDX
00764b28  FILD dword ptr [ESP + 0xc]
00764b2c  MOV dword ptr [ESP + 0xc],EAX
00764b30  MOV EAX,dword ptr [ESP + 0x10]
00764b34  FMUL float ptr [0x008b5b30]
00764b3a  FSTP float ptr [ESP]
00764b3d  MOV ECX,dword ptr [ESP]
00764b40  FILD dword ptr [ESP + 0xc]
00764b44  MOV dword ptr [EAX],ECX
00764b46  FMUL float ptr [0x008b5b30]
00764b4c  FSTP float ptr [ESP + 0x4]
00764b50  MOV EDX,dword ptr [ESP + 0x4]
00764b54  MOV dword ptr [EAX + 0x4],EDX
00764b57  ADD ESP,0x8
00764b5a  RET 0x8
