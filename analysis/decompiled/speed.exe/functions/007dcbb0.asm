007dcbb0  PUSH EBP
007dcbb1  MOV EBP,ESP
007dcbb3  PUSH -0x1
007dcbb5  PUSH 0x8bd7f0
007dcbba  PUSH 0x7cd5e4
007dcbbf  MOV EAX,FS:[0x0]
007dcbc5  PUSH EAX
007dcbc6  MOV dword ptr FS:[0x0],ESP
007dcbcd  ADD ESP,-0x18
007dcbd0  PUSH EBX
007dcbd1  PUSH ESI
007dcbd2  PUSH EDI
007dcbd3  CMP dword ptr [EBP + 0xc],0x4
007dcbd7  JZ 0x007dcbdf
007dcbd9  CMP dword ptr [EBP + 0xc],0x3
007dcbdd  JNZ 0x007dcbe4
007dcbdf  JMP 0x007dcdc9
007dcbe4  CMP dword ptr [EBP + 0x8],0x2
007dcbe8  JZ 0x007dcc00
007dcbea  CMP dword ptr [EBP + 0x8],0x15
007dcbee  JZ 0x007dcc00
007dcbf0  CMP dword ptr [EBP + 0x8],0x16
007dcbf4  JZ 0x007dcc00
007dcbf6  CMP dword ptr [EBP + 0x8],0xf
007dcbfa  JNZ 0x007dccf5
007dcc00  PUSH 0x0
007dcc02  CALL 0x007d0fd0
007dcc07  ADD ESP,0x4
007dcc0a  MOV dword ptr [EBP + -0x4],0x0
007dcc11  CMP dword ptr [EBP + 0x8],0x2
007dcc15  JZ 0x007dcc1d
007dcc17  CMP dword ptr [EBP + 0x8],0x15
007dcc1b  JNZ 0x007dcc66
007dcc1d  CMP dword ptr [0x009bae80],0x0
007dcc24  JNZ 0x007dcc66
007dcc26  PUSH 0x1
007dcc28  PUSH 0x7dce20
007dcc2d  CALL dword ptr [0x00890254]
007dcc33  CMP EAX,0x1
007dcc36  JNZ 0x007dcc44
007dcc38  MOV dword ptr [0x009bae80],0x1
007dcc42  JMP 0x007dcc66
007dcc44  CALL dword ptr [0x00890188]
007dcc4a  MOV ESI,EAX
007dcc4c  CALL 0x007cb280
007dcc51  MOV dword ptr [EAX],ESI
007dcc53  PUSH -0x1
007dcc55  LEA EAX,[EBP + -0x10]
007dcc58  PUSH EAX
007dcc59  CALL 0x007c514a
007dcc5e  ADD ESP,0x8
007dcc61  JMP 0x007dcdc9
007dcc66  MOV ECX,dword ptr [EBP + 0x8]
007dcc69  MOV dword ptr [EBP + -0x28],ECX
007dcc6c  MOV EDX,dword ptr [EBP + -0x28]
007dcc6f  SUB EDX,0x2
007dcc72  MOV dword ptr [EBP + -0x28],EDX
007dcc75  CMP dword ptr [EBP + -0x28],0x14
007dcc79  JA 0x007dccd7
007dcc7b  MOV EAX,dword ptr [EBP + -0x28]
007dcc7e  MOVZX ECX,byte ptr [EAX + 0x7dcdfc]
007dcc85  JMP dword ptr [ECX*0x4 + 0x7dcde8]
007dcc8c  MOV EDX,dword ptr [0x009bae70]
007dcc92  MOV dword ptr [EBP + -0x1c],EDX
007dcc95  MOV EAX,dword ptr [EBP + 0xc]
007dcc98  MOV [0x009bae70],EAX
007dcc9d  JMP 0x007dccd7
007dcc9f  MOV ECX,dword ptr [0x009bae74]
007dcca5  MOV dword ptr [EBP + -0x1c],ECX
007dcca8  MOV EDX,dword ptr [EBP + 0xc]
007dccab  MOV dword ptr [0x009bae74],EDX
007dccb1  JMP 0x007dccd7
007dccb3  MOV EAX,[0x009bae78]
007dccb8  MOV dword ptr [EBP + -0x1c],EAX
007dccbb  MOV ECX,dword ptr [EBP + 0xc]
007dccbe  MOV dword ptr [0x009bae78],ECX
007dccc4  JMP 0x007dccd7
007dccc6  MOV EDX,dword ptr [0x009bae7c]
007dcccc  MOV dword ptr [EBP + -0x1c],EDX
007dcccf  MOV EAX,dword ptr [EBP + 0xc]
007dccd2  MOV [0x009bae7c],EAX
007dccd7  MOV dword ptr [EBP + -0x4],0xffffffff
007dccde  CALL 0x007dcce5
007dcce3  JMP 0x007dccf0
007dccf5  CMP dword ptr [EBP + 0x8],0x8
007dccf9  JZ 0x007dcd0c
007dccfb  CMP dword ptr [EBP + 0x8],0x4
007dccff  JZ 0x007dcd0c
007dcd01  CMP dword ptr [EBP + 0x8],0xb
007dcd05  JZ 0x007dcd0c
007dcd07  JMP 0x007dcdc9
007dcd0c  CALL 0x007cd100
007dcd11  MOV dword ptr [EBP + -0x24],EAX
007dcd14  MOV ECX,dword ptr [EBP + -0x24]
007dcd17  CMP dword ptr [ECX + 0x54],0x906780
007dcd1e  JNZ 0x007dcd68
007dcd20  PUSH 0x144
007dcd25  PUSH 0x8bd7e4
007dcd2a  PUSH 0x2
007dcd2c  MOV EDX,dword ptr [0x00906800]
007dcd32  PUSH EDX
007dcd33  CALL 0x007c6700
007dcd38  ADD ESP,0x10
007dcd3b  MOV ECX,dword ptr [EBP + -0x24]
007dcd3e  MOV dword ptr [ECX + 0x54],EAX
007dcd41  MOV EDX,dword ptr [EBP + -0x24]
007dcd44  CMP dword ptr [EDX + 0x54],0x0
007dcd48  JZ 0x007dcd66
007dcd4a  MOV EAX,[0x00906800]
007dcd4f  PUSH EAX
007dcd50  PUSH 0x906780
007dcd55  MOV ECX,dword ptr [EBP + -0x24]
007dcd58  MOV EDX,dword ptr [ECX + 0x54]
007dcd5b  PUSH EDX
007dcd5c  CALL 0x007d6d30
007dcd61  ADD ESP,0xc
007dcd64  JMP 0x007dcd68
007dcd66  JMP 0x007dcdc9
007dcd68  MOV EAX,dword ptr [EBP + -0x24]
007dcd6b  MOV ECX,dword ptr [EAX + 0x54]
007dcd6e  PUSH ECX
007dcd6f  MOV EDX,dword ptr [EBP + 0x8]
007dcd72  PUSH EDX
007dcd73  CALL 0x007dd150
007dcd78  ADD ESP,0x8
007dcd7b  MOV dword ptr [EBP + -0x20],EAX
007dcd7e  CMP dword ptr [EBP + -0x20],0x0
007dcd82  JNZ 0x007dcd86
007dcd84  JMP 0x007dcdc9
007dcd86  MOV EAX,dword ptr [EBP + -0x20]
007dcd89  MOV ECX,dword ptr [EAX + 0x8]
007dcd8c  MOV dword ptr [EBP + -0x1c],ECX
007dcd8f  MOV EDX,dword ptr [EBP + -0x20]
007dcd92  MOV EAX,dword ptr [EDX + 0x4]
007dcd95  CMP EAX,dword ptr [EBP + 0x8]
007dcd98  JNZ 0x007dcdc4
007dcd9a  MOV ECX,dword ptr [EBP + -0x20]
007dcd9d  MOV EDX,dword ptr [EBP + 0xc]
007dcda0  MOV dword ptr [ECX + 0x8],EDX
007dcda3  MOV EAX,dword ptr [EBP + -0x20]
007dcda6  ADD EAX,0xc
007dcda9  MOV dword ptr [EBP + -0x20],EAX
007dcdac  MOV ECX,dword ptr [0x00906804]
007dcdb2  IMUL ECX,ECX,0xc
007dcdb5  MOV EDX,dword ptr [EBP + -0x24]
007dcdb8  ADD ECX,dword ptr [EDX + 0x54]
007dcdbb  CMP dword ptr [EBP + -0x20],ECX
007dcdbe  JC 0x007dcdc2
007dcdc0  JMP 0x007dcdc4
007dcdc2  JMP 0x007dcd8f
