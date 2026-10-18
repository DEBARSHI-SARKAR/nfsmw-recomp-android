00476870  MOV EAX,dword ptr [ESP + 0x4]
00476874  PUSH ESI
00476875  PUSH 0x9
00476877  PUSH EAX
00476878  MOV ESI,ECX
0047687a  CALL 0x00470890
0047687f  MOV dword ptr [ESI],0x894e90
00476885  MOV dword ptr [ESI + 0x80],0x1
0047688f  XOR EAX,EAX
00476891  MOV dword ptr [ESI + 0x88],EAX
00476897  MOV dword ptr [ESI + 0x90],EAX
0047689d  MOV dword ptr [ESI + 0x94],EAX
004768a3  MOV dword ptr [ESI + 0x98],EAX
004768a9  MOV dword ptr [ESI + 0x9c],EAX
004768af  MOV dword ptr [ESI + 0xa0],EAX
004768b5  MOV dword ptr [ESI + 0xb0],EAX
004768bb  MOV dword ptr [ESI + 0xb4],EAX
004768c1  MOV dword ptr [ESI + 0xb8],EAX
004768c7  MOV ECX,dword ptr [ESI + 0x90]
004768cd  MOV dword ptr [ESI + 0xc0],ECX
004768d3  MOV EDX,dword ptr [ESI + 0x94]
004768d9  MOV dword ptr [ESI + 0xc4],EDX
004768df  MOV ECX,dword ptr [ESI + 0x98]
004768e5  MOV dword ptr [ESI + 0xc8],ECX
004768eb  MOV EDX,dword ptr [ESI + 0x9c]
004768f1  MOV dword ptr [ESI + 0xcc],EDX
004768f7  MOV ECX,dword ptr [ESI + 0xa0]
004768fd  MOV dword ptr [ESI + 0xd0],ECX
00476903  FLD float ptr [ESI + 0xb4]
00476909  FLD float ptr [ESI + 0xb8]
0047690f  MOV EDX,dword ptr [ESI + 0xb0]
00476915  MOV dword ptr [ESI + 0xe0],EDX
0047691b  FXCH
0047691d  FSTP float ptr [ESI + 0xe4]
00476923  FSTP float ptr [ESI + 0xe8]
00476929  MOV ECX,dword ptr [ESI + 0x90]
0047692f  MOV dword ptr [ESI + 0xf0],ECX
00476935  MOV EDX,dword ptr [ESI + 0x94]
0047693b  MOV dword ptr [ESI + 0xf4],EDX
00476941  MOV ECX,dword ptr [ESI + 0x98]
00476947  MOV dword ptr [ESI + 0xf8],ECX
0047694d  MOV EDX,dword ptr [ESI + 0x9c]
00476953  MOV dword ptr [ESI + 0xfc],EDX
00476959  MOV ECX,dword ptr [ESI + 0xa0]
0047695f  MOV dword ptr [ESI + 0x100],ECX
00476965  FLD float ptr [ESI + 0xb4]
0047696b  FLD float ptr [ESI + 0xb8]
00476971  MOV EDX,dword ptr [ESI + 0xb0]
00476977  MOV dword ptr [ESI + 0x110],EDX
0047697d  FXCH
0047697f  FSTP float ptr [ESI + 0x114]
00476985  FSTP float ptr [ESI + 0x118]
0047698b  MOV dword ptr [ESI + 0x120],EAX
00476991  MOV dword ptr [ESI + 0x124],EAX
00476997  MOV dword ptr [ESI + 0x128],EAX
0047699d  MOV dword ptr [ESI + 0x134],EAX
004769a3  MOV dword ptr [ESI + 0x138],0x3f800000
004769ad  MOV dword ptr [ESI + 0x12c],0x41200000
004769b7  MOV dword ptr [ESI + 0x130],0x2
004769c1  MOV EAX,ESI
004769c3  POP ESI
004769c4  RET 0x4
