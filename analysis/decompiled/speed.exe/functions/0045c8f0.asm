0045c8f0  MOV EAX,dword ptr [ESP + 0x8]
0045c8f4  FLD float ptr [EAX + 0x4]
0045c8f7  MOV ECX,dword ptr [EAX + 0xc]
0045c8fa  FLD float ptr [EAX + 0x8]
0045c8fd  MOV dword ptr [ESP + 0x8],ECX
0045c901  FLD float ptr [ESP + 0xc]
0045c905  FMUL float ptr [EAX]
0045c907  MOV EAX,dword ptr [ESP + 0x4]
0045c90b  FSTP float ptr [EAX]
0045c90d  FXCH
0045c90f  FMUL float ptr [ESP + 0xc]
0045c913  FSTP float ptr [EAX + 0x4]
0045c916  FMUL float ptr [ESP + 0xc]
0045c91a  FSTP float ptr [EAX + 0x8]
0045c91d  FLD float ptr [ESP + 0x8]
0045c921  FMUL float ptr [ESP + 0xc]
0045c925  FSTP float ptr [EAX + 0xc]
0045c928  RET
