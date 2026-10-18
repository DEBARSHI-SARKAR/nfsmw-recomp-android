007fcc70  PUSH EBP
007fcc71  MOV EBP,ESP
007fcc73  MOV EDX,dword ptr [EBP + 0x18]
007fcc76  MOV EAX,dword ptr [EBP + 0x10]
007fcc79  MOV ECX,dword ptr [EBP + 0xc]
007fcc7c  PUSH EBX
007fcc7d  MOV EBX,dword ptr [EBP + 0x8]
007fcc80  MOV dword ptr [EBX + 0xc],EDX
007fcc83  MOV EDX,dword ptr [EBP + 0x24]
007fcc86  MOV dword ptr [EBX + 0x18],EDX
007fcc89  MOV EDX,dword ptr [EBP + 0x28]
007fcc8c  MOV dword ptr [EBX + 0x1c],EDX
007fcc8f  MOV EDX,dword ptr [EBP + 0x2c]
007fcc92  PUSH ESI
007fcc93  MOV ESI,dword ptr [EBP + 0x1c]
007fcc96  MOV dword ptr [EBX + 0x4],EAX
007fcc99  MOV EAX,dword ptr [EBP + 0x14]
007fcc9c  MOV dword ptr [EBX + 0x20],EDX
007fcc9f  PUSH EDI
007fcca0  MOV EDI,dword ptr [EBP + 0x20]
007fcca3  XOR EDX,EDX
007fcca5  CMP EAX,EDX
007fcca7  MOV dword ptr [EBX],ECX
007fcca9  MOV dword ptr [EBX + 0x8],EAX
007fccac  MOV dword ptr [EBX + 0x10],ESI
007fccaf  MOV dword ptr [EBX + 0x14],EDI
007fccb2  JZ 0x007fcf9a
007fccb8  CMP EAX,0x1
007fccbb  JZ 0x007fcf8e
007fccc1  CMP EAX,0x4
007fccc4  JZ 0x007fcf5a
007fccca  JLE 0x007fcf53
007fccd0  CMP EAX,0x6
007fccd3  JLE 0x007fce06
007fccd9  CMP EAX,0x7
007fccdc  JZ 0x007fcd28
007fccde  CMP EAX,0x8
007fcce1  JNZ 0x007fcf53
007fcce7  PUSH EBX
007fcce8  CALL 0x007fca82
007fcced  CMP dword ptr [EBX],0x2
007fccf0  POP ECX
007fccf1  JL 0x007fcf80
007fccf7  CMP dword ptr [EBX + 0x6c],0x0
007fccfb  JZ 0x007fcd17
007fccfd  CMP dword ptr [EBX + 0xc0],0x0
007fcd04  JZ 0x007fcd17
007fcd06  PUSH dword ptr [EBX + 0xbc]
007fcd0c  PUSH dword ptr [EBX + 0x10]
007fcd0f  PUSH EBX
007fcd10  CALL 0x0080647b
007fcd15  JMP 0x007fcd53
007fcd17  PUSH dword ptr [EBX + 0x14]
007fcd1a  PUSH dword ptr [EBX + 0x10]
007fcd1d  PUSH EBX
007fcd1e  CALL 0x0080647b
007fcd23  JMP 0x007fcf71
007fcd28  CMP ECX,0x5
007fcd2b  JL 0x007fcdda
007fcd31  CMP dword ptr [EBX + 0x6c],EDX
007fcd34  JZ 0x007fcde1
007fcd3a  CMP dword ptr [EBX + 0xc0],EDX
007fcd40  JZ 0x007fcf69
007fcd46  PUSH dword ptr [EBX + 0xbc]
007fcd4c  PUSH ESI
007fcd4d  PUSH EBX
007fcd4e  CALL 0x00803d03
007fcd53  MOV EAX,dword ptr [EBX + 0x94]
007fcd59  IMUL EAX,dword ptr [EBX + 0x98]
007fcd60  MOV EDX,dword ptr [EBX + 0x7c]
007fcd63  MOV ESI,dword ptr [EBX + 0xbc]
007fcd69  MOV EDI,dword ptr [EBX + 0x14]
007fcd6c  ADD ESI,EDX
007fcd6e  ADD EDI,EDX
007fcd70  SHL EAX,0x1
007fcd72  MOV ECX,EAX
007fcd74  MOV EDX,ECX
007fcd76  SHR ECX,0x2
007fcd79  MOVSD.REP ES:EDI,ESI
007fcd7b  MOV ECX,EDX
007fcd7d  AND ECX,0x3
007fcd80  MOVSB.REP ES:EDI,ESI
007fcd82  MOV EDX,dword ptr [EBX + 0x80]
007fcd88  MOV ESI,dword ptr [EBX + 0xbc]
007fcd8e  MOV EDI,dword ptr [EBX + 0x14]
007fcd91  MOV ECX,EAX
007fcd93  SHR ECX,0x2
007fcd96  ADD ESI,EDX
007fcd98  ADD EDI,EDX
007fcd9a  MOVSD.REP ES:EDI,ESI
007fcd9c  MOV ECX,EAX
007fcd9e  AND ECX,0x3
007fcda1  MOVSB.REP ES:EDI,ESI
007fcda3  PUSH dword ptr [EBX + 0x98]
007fcda9  MOV ECX,dword ptr [EBX + 0x94]
007fcdaf  MOV EAX,dword ptr [EBX + 0x78]
007fcdb2  SHL ECX,0x3
007fcdb5  PUSH ECX
007fcdb6  MOV ECX,dword ptr [EBX + 0x90]
007fcdbc  SHL ECX,0x3
007fcdbf  PUSH ECX
007fcdc0  MOV ECX,dword ptr [EBX + 0x14]
007fcdc3  ADD ECX,EAX
007fcdc5  PUSH ECX
007fcdc6  MOV ECX,dword ptr [EBX + 0xbc]
007fcdcc  ADD ECX,EAX
007fcdce  PUSH ECX
007fcdcf  CALL dword ptr [0x009c6a88]
007fcdd5  JMP 0x007fce9a
007fcdda  PUSH EBX
007fcddb  CALL 0x007fca82
007fcde0  POP ECX
007fcde1  PUSH dword ptr [EBX + 0x14]
007fcde4  PUSH dword ptr [EBX + 0x10]
007fcde7  PUSH EBX
007fcde8  CALL 0x00803bfc
007fcded  PUSH dword ptr [EBX + 0x14]
007fcdf0  PUSH EBX
007fcdf1  CALL 0x007fe49d
007fcdf6  MOV EAX,dword ptr [EBX + 0x14]
007fcdf9  PUSH EAX
007fcdfa  PUSH EAX
007fcdfb  PUSH EBX
007fcdfc  CALL 0x008057af
007fce01  JMP 0x007fce9a
007fce06  CMP ECX,0x5
007fce09  JGE 0x007fce71
007fce0b  PUSH EBX
007fce0c  CALL 0x007fca82
007fce11  POP ECX
007fce12  PUSH dword ptr [EBX + 0x14]
007fce15  PUSH dword ptr [EBX + 0x10]
007fce18  PUSH EBX
007fce19  CALL 0x00803bfc
007fce1e  PUSH dword ptr [EBX + 0x14]
007fce21  PUSH EBX
007fce22  CALL 0x007fe49d
007fce27  MOV EAX,dword ptr [EBX + 0x14]
007fce2a  PUSH EAX
007fce2b  PUSH EAX
007fce2c  PUSH EBX
007fce2d  CALL 0x008057af
007fce32  ADD ESP,0x20
007fce35  CMP dword ptr [EBX + 0xc4],0x0
007fce3c  JZ 0x007fd01d
007fce42  PUSH dword ptr [EBP + 0x18]
007fce45  MOV EAX,dword ptr [EBX + 0x94]
007fce4b  PUSH dword ptr [EBX + 0x98]
007fce51  SHL EAX,0x3
007fce54  PUSH EAX
007fce55  MOV EAX,dword ptr [EBX + 0x90]
007fce5b  SHL EAX,0x3
007fce5e  PUSH EAX
007fce5f  MOV EAX,dword ptr [EBX + 0x78]
007fce62  ADD EAX,dword ptr [EBX + 0x14]
007fce65  PUSH EAX
007fce66  CALL dword ptr [0x009c6a7c]
007fce6c  JMP 0x007fd01a
007fce71  CMP dword ptr [EBX + 0x6c],EDX
007fce74  JZ 0x007fce12
007fce76  CMP dword ptr [EBX + 0xc0],EDX
007fce7c  JNZ 0x007fcea2
007fce7e  PUSH EDI
007fce7f  PUSH ESI
007fce80  PUSH EBX
007fce81  CALL 0x00803d03
007fce86  PUSH dword ptr [EBX + 0x14]
007fce89  PUSH EBX
007fce8a  CALL 0x007fe49d
007fce8f  MOV EAX,dword ptr [EBX + 0x14]
007fce92  PUSH EAX
007fce93  PUSH EAX
007fce94  PUSH EBX
007fce95  CALL 0x00805be3
007fce9a  ADD ESP,0x20
007fce9d  JMP 0x007fd01d
007fcea2  PUSH dword ptr [EBX + 0xbc]
007fcea8  PUSH ESI
007fcea9  PUSH EBX
007fceaa  CALL 0x00803d03
007fceaf  PUSH dword ptr [EBX + 0xbc]
007fceb5  PUSH EBX
007fceb6  CALL 0x007fe49d
007fcebb  MOV EAX,dword ptr [EBX + 0xbc]
007fcec1  PUSH EAX
007fcec2  PUSH EAX
007fcec3  PUSH EBX
007fcec4  CALL 0x00805be3
007fcec9  MOV EAX,dword ptr [EBX + 0x94]
007fcecf  IMUL EAX,dword ptr [EBX + 0x98]
007fced6  MOV EDX,dword ptr [EBX + 0x7c]
007fced9  MOV ESI,dword ptr [EBX + 0xbc]
007fcedf  MOV EDI,dword ptr [EBX + 0x14]
007fcee2  ADD ESI,EDX
007fcee4  ADD EDI,EDX
007fcee6  SHL EAX,0x1
007fcee8  MOV ECX,EAX
007fceea  MOV EDX,ECX
007fceec  SHR ECX,0x2
007fceef  MOVSD.REP ES:EDI,ESI
007fcef1  MOV ECX,EDX
007fcef3  AND ECX,0x3
007fcef6  MOVSB.REP ES:EDI,ESI
007fcef8  MOV EDX,dword ptr [EBX + 0x80]
007fcefe  MOV ESI,dword ptr [EBX + 0xbc]
007fcf04  MOV EDI,dword ptr [EBX + 0x14]
007fcf07  MOV ECX,EAX
007fcf09  SHR ECX,0x2
007fcf0c  ADD ESI,EDX
007fcf0e  ADD EDI,EDX
007fcf10  MOVSD.REP ES:EDI,ESI
007fcf12  MOV ECX,EAX
007fcf14  AND ECX,0x3
007fcf17  MOVSB.REP ES:EDI,ESI
007fcf19  PUSH dword ptr [EBX + 0x98]
007fcf1f  MOV ECX,dword ptr [EBX + 0x94]
007fcf25  MOV EAX,dword ptr [EBX + 0x78]
007fcf28  SHL ECX,0x3
007fcf2b  PUSH ECX
007fcf2c  MOV ECX,dword ptr [EBX + 0x90]
007fcf32  SHL ECX,0x3
007fcf35  PUSH ECX
007fcf36  MOV ECX,dword ptr [EBX + 0x14]
007fcf39  ADD ECX,EAX
007fcf3b  PUSH ECX
007fcf3c  MOV ECX,dword ptr [EBX + 0xbc]
007fcf42  ADD ECX,EAX
007fcf44  PUSH ECX
007fcf45  CALL dword ptr [0x009c6a88]
007fcf4b  ADD ESP,0x34
007fcf4e  JMP 0x007fd01d
007fcf53  PUSH EDI
007fcf54  PUSH ESI
007fcf55  JMP 0x007fcde7
007fcf5a  CMP ECX,0x5
007fcf5d  JL 0x007fcf79
007fcf5f  CMP dword ptr [EBX + 0x6c],EDX
007fcf62  JZ 0x007fcf80
007fcf64  JMP 0x007fcd3a
007fcf69  PUSH EDI
007fcf6a  PUSH ESI
007fcf6b  PUSH EBX
007fcf6c  CALL 0x00803d03
007fcf71  ADD ESP,0xc
007fcf74  JMP 0x007fd01d
007fcf79  PUSH EBX
007fcf7a  CALL 0x007fca82
007fcf7f  POP ECX
007fcf80  PUSH dword ptr [EBX + 0x14]
007fcf83  PUSH dword ptr [EBX + 0x10]
007fcf86  PUSH EBX
007fcf87  CALL 0x00803bfc
007fcf8c  JMP 0x007fcf71
007fcf8e  PUSH EBX
007fcf8f  CALL 0x007fca82
007fcf94  POP ECX
007fcf95  JMP 0x007fd01d
007fcf9a  CMP dword ptr [EBX + 0x6c],EDX
007fcf9d  JZ 0x007fd01d
007fcf9f  CMP dword ptr [EBX + 0xc0],EDX
007fcfa5  JZ 0x007fd01d
007fcfa7  MOV EAX,dword ptr [EBX + 0x94]
007fcfad  IMUL EAX,dword ptr [EBX + 0x98]
007fcfb4  MOV EDX,dword ptr [EBX + 0x7c]
007fcfb7  ADD ESI,EDX
007fcfb9  ADD EDI,EDX
007fcfbb  SHL EAX,0x1
007fcfbd  MOV ECX,EAX
007fcfbf  MOV EDX,ECX
007fcfc1  SHR ECX,0x2
007fcfc4  MOVSD.REP ES:EDI,ESI
007fcfc6  MOV ECX,EDX
007fcfc8  AND ECX,0x3
007fcfcb  MOVSB.REP ES:EDI,ESI
007fcfcd  MOV EDX,dword ptr [EBX + 0x80]
007fcfd3  MOV ESI,dword ptr [EBX + 0x10]
007fcfd6  MOV EDI,dword ptr [EBX + 0x14]
007fcfd9  MOV ECX,EAX
007fcfdb  SHR ECX,0x2
007fcfde  ADD ESI,EDX
007fcfe0  ADD EDI,EDX
007fcfe2  MOVSD.REP ES:EDI,ESI
007fcfe4  MOV ECX,EAX
007fcfe6  AND ECX,0x3
007fcfe9  MOVSB.REP ES:EDI,ESI
007fcfeb  PUSH dword ptr [EBX + 0x98]
007fcff1  MOV ECX,dword ptr [EBX + 0x94]
007fcff7  MOV EAX,dword ptr [EBX + 0x78]
007fcffa  SHL ECX,0x3
007fcffd  PUSH ECX
007fcffe  MOV ECX,dword ptr [EBX + 0x90]
007fd004  SHL ECX,0x3
007fd007  PUSH ECX
007fd008  MOV ECX,dword ptr [EBX + 0x14]
007fd00b  ADD ECX,EAX
007fd00d  PUSH ECX
007fd00e  MOV ECX,dword ptr [EBX + 0x10]
007fd011  ADD ECX,EAX
007fd013  PUSH ECX
007fd014  CALL dword ptr [0x009c6a88]
007fd01a  ADD ESP,0x14
007fd01d  POP EDI
007fd01e  POP ESI
007fd01f  POP EBX
007fd020  POP EBP
007fd021  RET
