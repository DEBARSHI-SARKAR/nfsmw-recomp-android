00444fa0  MOV EAX,ECX
00444fa2  MOV ECX,dword ptr [ESP + 0x4]
00444fa6  FLD float ptr [ECX + 0x4]
00444fa9  MOV EDX,dword ptr [ECX + 0xc]
00444fac  FLD float ptr [ECX + 0x8]
00444faf  MOV ECX,dword ptr [ECX]
00444fb1  FXCH
00444fb3  MOV dword ptr [ESP + 0x4],EDX
00444fb7  FSTP float ptr [EAX + 0x4]
00444fba  MOV dword ptr [EAX],ECX
00444fbc  MOV dword ptr [EAX + 0xc],EDX
00444fbf  FSTP float ptr [EAX + 0x8]
00444fc2  RET 0x4
