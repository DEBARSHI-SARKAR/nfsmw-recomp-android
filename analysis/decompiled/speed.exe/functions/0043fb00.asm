0043fb00  PUSH -0x1
0043fb02  PUSH 0x869608
0043fb07  MOV EAX,FS:[0x0]
0043fb0d  PUSH EAX
0043fb0e  MOV dword ptr FS:[0x0],ESP
0043fb15  SUB ESP,0x3c
0043fb18  PUSH EBP
0043fb19  PUSH ESI
0043fb1a  MOV ESI,ECX
0043fb1c  PUSH EDI
0043fb1d  MOV dword ptr [ESP + 0xc],ESI
0043fb21  CALL 0x0043f120
0043fb26  MOV dword ptr [ESP + 0x14],0x0
0043fb2e  MOV ECX,dword ptr [ESP + 0x14]
0043fb32  MOV dword ptr [ESP + 0x2c],ECX
0043fb36  MOV dword ptr [ESP + 0x10],0x0
0043fb3e  MOV EAX,dword ptr [ESP + 0x10]
0043fb42  MOV dword ptr [ESP + 0x20],0x0
0043fb4a  MOV ECX,dword ptr [ESP + 0x20]
0043fb4e  MOV dword ptr [ESP + 0x28],EAX
0043fb52  MOV dword ptr [ESP + 0x38],ECX
0043fb56  MOV dword ptr [ESP + 0x18],0xc1500000
0043fb5e  MOV EDX,dword ptr [ESP + 0x18]
0043fb62  MOV dword ptr [ESP + 0x1c],0x0
0043fb6a  MOV EAX,dword ptr [ESP + 0x1c]
0043fb6e  LEA ECX,[ESP + 0x28]
0043fb72  MOV dword ptr [ESI],0x892f5c
0043fb78  MOV dword ptr [ESP + 0x30],EDX
0043fb7c  MOV dword ptr [ESP + 0x34],EAX
0043fb80  MOV EAX,[0x0091ddbc]
0043fb85  MOV dword ptr [ESP + 0x24],0x0
0043fb8d  MOV EDX,dword ptr [ESP + 0x24]
0043fb91  LEA EDI,[ESI + 0x10]
0043fb94  PUSH ECX
0043fb95  MOV EBP,0x1
0043fb9a  MOV ECX,EDI
0043fb9c  MOV dword ptr [ESP + 0x54],0x0
0043fba4  MOV dword ptr [ESP + 0x40],EDX
0043fba8  MOV dword ptr [ESP + 0x44],EBP
0043fbac  MOV dword ptr [ESP + 0x48],EAX
0043fbb0  CALL 0x004393f0
0043fbb5  MOV dword ptr [ESP + 0x20],0x0
0043fbbd  MOV EAX,dword ptr [ESP + 0x20]
0043fbc1  MOV dword ptr [ESP + 0x1c],0x0
0043fbc9  MOV EDX,dword ptr [ESP + 0x1c]
0043fbcd  MOV dword ptr [ESP + 0x2c],EAX
0043fbd1  MOV dword ptr [ESP + 0x24],0x41500000
0043fbd9  MOV ECX,dword ptr [ESP + 0x24]
0043fbdd  MOV dword ptr [ESP + 0x28],EDX
0043fbe1  MOV dword ptr [ESP + 0x14],0x0
0043fbe9  MOV EAX,dword ptr [ESP + 0x14]
0043fbed  MOV dword ptr [ESP + 0x30],ECX
0043fbf1  MOV dword ptr [ESP + 0x10],0x0
0043fbf9  MOV EDX,dword ptr [ESP + 0x10]
0043fbfd  MOV dword ptr [ESP + 0x18],0x0
0043fc05  MOV ECX,dword ptr [ESP + 0x18]
0043fc09  MOV dword ptr [ESP + 0x38],EAX
0043fc0d  MOV dword ptr [ESP + 0x34],EDX
0043fc11  MOV EDX,dword ptr [0x0091ddbc]
0043fc17  LEA EAX,[ESP + 0x28]
0043fc1b  MOV dword ptr [ESP + 0x3c],ECX
0043fc1f  PUSH EAX
0043fc20  MOV ECX,EDI
0043fc22  MOV dword ptr [ESP + 0x44],EBP
0043fc26  MOV dword ptr [ESP + 0x48],EDX
0043fc2a  CALL 0x004393f0
0043fc2f  MOV dword ptr [ESP + 0x1c],0x40600000
0043fc37  MOV ECX,dword ptr [ESP + 0x1c]
0043fc3b  MOV dword ptr [ESP + 0x20],0x0
0043fc43  MOV EDX,dword ptr [ESP + 0x20]
0043fc47  MOV dword ptr [ESP + 0x24],0xc1500000
0043fc4f  MOV EAX,dword ptr [ESP + 0x24]
0043fc53  MOV dword ptr [ESP + 0x10],0x0
0043fc5b  MOV dword ptr [ESP + 0x14],0x0
0043fc63  MOV dword ptr [ESP + 0x18],0x0
0043fc6b  MOV dword ptr [ESP + 0x28],ECX
0043fc6f  MOV ECX,dword ptr [ESP + 0x10]
0043fc73  MOV dword ptr [ESP + 0x2c],EDX
0043fc77  MOV EDX,dword ptr [ESP + 0x14]
0043fc7b  MOV dword ptr [ESP + 0x30],EAX
0043fc7f  MOV EAX,dword ptr [ESP + 0x18]
0043fc83  MOV EBP,0x2
0043fc88  MOV dword ptr [ESP + 0x34],ECX
0043fc8c  MOV dword ptr [ESP + 0x38],EDX
0043fc90  MOV dword ptr [ESP + 0x3c],EAX
0043fc94  MOV dword ptr [ESP + 0x40],EBP
0043fc98  MOV ECX,dword ptr [0x0091ddbc]
0043fc9e  LEA EDX,[ESP + 0x28]
0043fca2  MOV dword ptr [ESP + 0x44],ECX
0043fca6  PUSH EDX
0043fca7  MOV ECX,EDI
0043fca9  CALL 0x004393f0
0043fcae  MOV dword ptr [ESP + 0x20],0x0
0043fcb6  MOV ECX,dword ptr [ESP + 0x20]
0043fcba  MOV dword ptr [ESP + 0x2c],ECX
0043fcbe  MOV dword ptr [ESP + 0x1c],0xc0600000
0043fcc6  MOV EAX,dword ptr [ESP + 0x1c]
0043fcca  MOV dword ptr [ESP + 0x14],0x0
0043fcd2  MOV ECX,dword ptr [ESP + 0x14]
0043fcd6  MOV dword ptr [ESP + 0x28],EAX
0043fcda  MOV dword ptr [ESP + 0x38],ECX
0043fcde  MOV dword ptr [ESP + 0x24],0x41500000
0043fce6  MOV EDX,dword ptr [ESP + 0x24]
0043fcea  MOV dword ptr [ESP + 0x10],0x0
0043fcf2  MOV EAX,dword ptr [ESP + 0x10]
0043fcf6  LEA ECX,[ESP + 0x28]
0043fcfa  MOV dword ptr [ESP + 0x30],EDX
0043fcfe  MOV dword ptr [ESP + 0x34],EAX
0043fd02  MOV EAX,[0x0091ddbc]
0043fd07  MOV dword ptr [ESP + 0x18],0x0
0043fd0f  MOV EDX,dword ptr [ESP + 0x18]
0043fd13  PUSH ECX
0043fd14  MOV ECX,EDI
0043fd16  MOV dword ptr [ESP + 0x40],EDX
0043fd1a  MOV dword ptr [ESP + 0x44],EBP
0043fd1e  MOV dword ptr [ESP + 0x48],EAX
0043fd22  CALL 0x004393f0
0043fd27  MOV dword ptr [ESP + 0x20],0x0
0043fd2f  MOV EAX,dword ptr [ESP + 0x20]
0043fd33  MOV dword ptr [ESP + 0x1c],0xc0600000
0043fd3b  MOV EDX,dword ptr [ESP + 0x1c]
0043fd3f  MOV dword ptr [ESP + 0x2c],EAX
0043fd43  MOV dword ptr [ESP + 0x24],0xc1500000
0043fd4b  MOV ECX,dword ptr [ESP + 0x24]
0043fd4f  MOV dword ptr [ESP + 0x28],EDX
0043fd53  MOV dword ptr [ESP + 0x14],0x0
0043fd5b  MOV EAX,dword ptr [ESP + 0x14]
0043fd5f  MOV dword ptr [ESP + 0x30],ECX
0043fd63  MOV dword ptr [ESP + 0x10],0x0
0043fd6b  MOV EDX,dword ptr [ESP + 0x10]
0043fd6f  MOV dword ptr [ESP + 0x18],0x0
0043fd77  MOV ECX,dword ptr [ESP + 0x18]
0043fd7b  MOV dword ptr [ESP + 0x38],EAX
0043fd7f  MOV dword ptr [ESP + 0x34],EDX
0043fd83  MOV EDX,dword ptr [0x0091ddbc]
0043fd89  LEA EAX,[ESP + 0x28]
0043fd8d  MOV dword ptr [ESP + 0x3c],ECX
0043fd91  MOV EBP,0x3
0043fd96  PUSH EAX
0043fd97  MOV ECX,EDI
0043fd99  MOV dword ptr [ESP + 0x44],EBP
0043fd9d  MOV dword ptr [ESP + 0x48],EDX
0043fda1  CALL 0x004393f0
0043fda6  MOV dword ptr [ESP + 0x1c],0x40600000
0043fdae  MOV ECX,dword ptr [ESP + 0x1c]
0043fdb2  MOV dword ptr [ESP + 0x20],0x0
0043fdba  MOV EDX,dword ptr [ESP + 0x20]
0043fdbe  MOV dword ptr [ESP + 0x28],ECX
0043fdc2  MOV dword ptr [ESP + 0x10],0x0
0043fdca  MOV ECX,dword ptr [ESP + 0x10]
0043fdce  MOV dword ptr [ESP + 0x2c],EDX
0043fdd2  MOV dword ptr [ESP + 0x24],0x41500000
0043fdda  MOV EAX,dword ptr [ESP + 0x24]
0043fdde  MOV dword ptr [ESP + 0x14],0x0
0043fde6  MOV EDX,dword ptr [ESP + 0x14]
0043fdea  MOV dword ptr [ESP + 0x34],ECX
0043fdee  MOV ECX,dword ptr [0x0091ddbc]
0043fdf4  MOV dword ptr [ESP + 0x18],0x0
0043fdfc  MOV dword ptr [ESP + 0x30],EAX
0043fe00  MOV EAX,dword ptr [ESP + 0x18]
0043fe04  MOV dword ptr [ESP + 0x38],EDX
0043fe08  LEA EDX,[ESP + 0x28]
0043fe0c  MOV dword ptr [ESP + 0x44],ECX
0043fe10  MOV dword ptr [ESP + 0x3c],EAX
0043fe14  MOV dword ptr [ESP + 0x40],EBP
0043fe18  PUSH EDX
0043fe19  MOV ECX,EDI
0043fe1b  CALL 0x004393f0
0043fe20  MOV ECX,dword ptr [ESP + 0x48]
0043fe24  POP EDI
0043fe25  MOV dword ptr [ESI + 0x4],0x6
0043fe2c  MOV byte ptr [ESI + 0xc],0x0
0043fe30  MOV EAX,ESI
0043fe32  POP ESI
0043fe33  MOV dword ptr FS:[0x0],ECX
0043fe3a  POP EBP
0043fe3b  ADD ESP,0x48
0043fe3e  RET 0x4
