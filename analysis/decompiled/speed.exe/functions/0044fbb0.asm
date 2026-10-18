0044fbb0  MOV EDX,dword ptr [ESP + 0x4]
0044fbb4  MOV EAX,ECX
0044fbb6  MOV dword ptr [EAX + 0x10],EDX
0044fbb9  XOR ECX,ECX
0044fbbb  MOV dword ptr [EAX],0x893af8
0044fbc1  MOV dword ptr [EAX + 0xc],ECX
0044fbc4  LEA EDX,[EAX + 0x14]
0044fbc7  MOV dword ptr [EDX],EDX
0044fbc9  MOV dword ptr [EDX + 0x4],EDX
0044fbcc  MOV dword ptr [EAX + 0x1c],ECX
0044fbcf  MOV dword ptr [EAX + 0x20],ECX
0044fbd2  MOV dword ptr [EAX + 0x24],ECX
0044fbd5  MOV dword ptr [EAX + 0x28],ECX
0044fbd8  MOV dword ptr [EAX + 0x2c],ECX
0044fbdb  LEA EDX,[EAX + 0x30]
0044fbde  MOV dword ptr [EDX],EDX
0044fbe0  MOV dword ptr [EDX + 0x4],EDX
0044fbe3  MOV EDX,dword ptr [ESP + 0x8]
0044fbe7  MOV dword ptr [EAX + 0x3c],EDX
0044fbea  MOV EDX,dword ptr [ESP + 0xc]
0044fbee  MOV dword ptr [EAX + 0x114],EDX
0044fbf4  MOV EDX,dword ptr [ESP + 0x10]
0044fbf8  MOV dword ptr [EAX + 0x118],EDX
0044fbfe  MOV byte ptr [EAX + 0x38],CL
0044fc01  MOV byte ptr [EAX + 0x40],CL
0044fc04  MOV dword ptr [EAX + 0x110],ECX
0044fc0a  MOV EDX,dword ptr [0x0090da7c]
0044fc10  INC EDX
0044fc11  CMP EDX,0x10000
0044fc17  MOV dword ptr [0x0090da7c],EDX
0044fc1d  JL 0x0044fc2a
0044fc1f  MOV EDX,0x1
0044fc24  MOV dword ptr [0x0090da7c],EDX
0044fc2a  MOV dword ptr [EAX + 0xc],EDX
0044fc2d  MOV dword ptr [EAX + 0x54],ECX
0044fc30  MOV dword ptr [EAX + 0x58],ECX
0044fc33  MOV dword ptr [EAX + 0x5c],ECX
0044fc36  MOV dword ptr [EAX + 0x60],ECX
0044fc39  MOV dword ptr [EAX + 0x68],ECX
0044fc3c  MOV dword ptr [EAX + 0x6c],ECX
0044fc3f  MOV dword ptr [EAX + 0x70],ECX
0044fc42  MOV dword ptr [EAX + 0x74],ECX
0044fc45  MOV dword ptr [EAX + 0x7c],ECX
0044fc48  MOV dword ptr [EAX + 0x80],ECX
0044fc4e  MOV dword ptr [EAX + 0x84],ECX
0044fc54  MOV dword ptr [EAX + 0x88],ECX
0044fc5a  MOV EDX,0x3f800000
0044fc5f  MOV dword ptr [EAX + 0x50],EDX
0044fc62  MOV dword ptr [EAX + 0x64],EDX
0044fc65  MOV dword ptr [EAX + 0x78],EDX
0044fc68  MOV dword ptr [EAX + 0x8c],EDX
0044fc6e  MOV dword ptr [EAX + 0x90],EDX
0044fc74  MOV dword ptr [EAX + 0x94],ECX
0044fc7a  MOV dword ptr [EAX + 0x98],ECX
0044fc80  MOV dword ptr [EAX + 0x9c],ECX
0044fc86  MOV dword ptr [EAX + 0xa0],ECX
0044fc8c  MOV dword ptr [EAX + 0xa4],EDX
0044fc92  MOV dword ptr [EAX + 0xa8],ECX
0044fc98  MOV dword ptr [EAX + 0xac],ECX
0044fc9e  MOV dword ptr [EAX + 0xb0],ECX
0044fca4  MOV dword ptr [EAX + 0xb4],ECX
0044fcaa  MOV dword ptr [EAX + 0xb8],EDX
0044fcb0  MOV dword ptr [EAX + 0xbc],ECX
0044fcb6  MOV dword ptr [EAX + 0xc0],ECX
0044fcbc  MOV dword ptr [EAX + 0xc4],ECX
0044fcc2  MOV dword ptr [EAX + 0xc8],ECX
0044fcc8  MOV dword ptr [EAX + 0xcc],EDX
0044fcce  MOV dword ptr [EAX + 0xd0],EDX
0044fcd4  MOV dword ptr [EAX + 0xd4],ECX
0044fcda  MOV dword ptr [EAX + 0xd8],ECX
0044fce0  MOV dword ptr [EAX + 0xdc],ECX
0044fce6  MOV dword ptr [EAX + 0xe0],ECX
0044fcec  MOV dword ptr [EAX + 0xe4],EDX
0044fcf2  MOV dword ptr [EAX + 0xe8],ECX
0044fcf8  MOV dword ptr [EAX + 0xec],ECX
0044fcfe  MOV dword ptr [EAX + 0xf0],ECX
0044fd04  MOV dword ptr [EAX + 0xf4],ECX
0044fd0a  MOV dword ptr [EAX + 0xf8],EDX
0044fd10  MOV dword ptr [EAX + 0xfc],ECX
0044fd16  MOV dword ptr [EAX + 0x100],ECX
0044fd1c  MOV dword ptr [EAX + 0x104],ECX
0044fd22  MOV dword ptr [EAX + 0x108],ECX
0044fd28  MOV dword ptr [EAX + 0x10c],EDX
0044fd2e  RET 0x10
