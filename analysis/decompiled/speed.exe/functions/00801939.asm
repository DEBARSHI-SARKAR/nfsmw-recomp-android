00801939  PUSH EBP
0080193a  MOV EBP,ESP
0080193c  SUB ESP,0xc
0080193f  LEA EAX,[EBP + -0x4]
00801942  PUSH EAX
00801943  LEA EAX,[EBP + -0xc]
00801946  PUSH EAX
00801947  LEA EAX,[EBP + -0x8]
0080194a  PUSH EAX
0080194b  CALL 0x008066bb
00801950  ADD ESP,0xc
00801953  CMP dword ptr [EBP + -0x4],0x0
00801957  JZ 0x00801a72
0080195d  CALL 0x008129be
00801962  MOV dword ptr [0x009c6ab8],0x814596
0080196c  MOV dword ptr [0x009c6ad8],0x8147bd
00801976  MOV dword ptr [0x009c6a84],0x81455f
00801980  MOV dword ptr [0x009c6a80],0x808f07
0080198a  MOV dword ptr [0x009c6abc],0x814256
00801994  MOV dword ptr [0x009c6adc],0x813f59
0080199e  MOV dword ptr [0x009c6aa4],0x810b38
008019a8  MOV dword ptr [0x009c6ab0],0x81189a
008019b2  MOV dword ptr [0x009c6ad0],0x80b6be
008019bc  MOV dword ptr [0x009c6aa0],0x813b0f
008019c6  MOV dword ptr [0x009c6ae0],0x813db1
008019d0  MOV dword ptr [0x009c6a9c],0x813a4e
008019da  MOV dword ptr [0x009c6acc],0x81330e
008019e4  MOV dword ptr [0x009c6a78],0x8133d8
008019ee  MOV dword ptr [0x009c6a8c],0x8139d9
008019f8  MOV dword ptr [0x009c6ac0],0x813a2f
00801a02  MOV dword ptr [0x009c6ac4],0x813746
00801a0c  MOV dword ptr [0x009c6aac],0x8138b4
00801a16  MOV dword ptr [0x009c6a98],0x8134c0
00801a20  MOV dword ptr [0x009c6a94],0x813626
00801a2a  MOV dword ptr [0x009c6ad4],0x8129f2
00801a34  MOV dword ptr [0x009c6a90],0x812c5f
00801a3e  MOV dword ptr [0x009c6aa8],0x812dbf
00801a48  MOV dword ptr [0x009c6ab4],0x81312d
00801a52  MOV dword ptr [0x009c6a88],0x8128fe
00801a5c  MOV dword ptr [0x009c6ac8],0x80f460
00801a66  MOV dword ptr [0x009c6a7c],0x81271f
00801a70  LEAVE
00801a71  RET
00801a72  CMP dword ptr [EBP + -0x8],0x0
00801a76  JZ 0x00801b91
00801a7c  CALL 0x008129be
00801a81  MOV dword ptr [0x009c6ab8],0x814596
00801a8b  MOV dword ptr [0x009c6ad8],0x8147bd
00801a95  MOV dword ptr [0x009c6a84],0x81455f
00801a9f  MOV dword ptr [0x009c6a80],0x808f07
00801aa9  MOV dword ptr [0x009c6abc],0x810107
00801ab3  MOV dword ptr [0x009c6adc],0x80f6e2
00801abd  MOV dword ptr [0x009c6aa4],0x808f3e
00801ac7  MOV dword ptr [0x009c6ab0],0x80a1e5
00801ad1  MOV dword ptr [0x009c6ad0],0x80b6be
00801adb  MOV dword ptr [0x009c6aa0],0x813b0f
00801ae5  MOV dword ptr [0x009c6ae0],0x813db1
00801aef  MOV dword ptr [0x009c6a9c],0x813a4e
00801af9  MOV dword ptr [0x009c6acc],0x81330e
00801b03  MOV dword ptr [0x009c6a78],0x8133d8
00801b0d  MOV dword ptr [0x009c6a8c],0x8139d9
00801b17  MOV dword ptr [0x009c6ac0],0x813a2f
00801b21  MOV dword ptr [0x009c6ac4],0x813746
00801b2b  MOV dword ptr [0x009c6aac],0x8138b4
00801b35  MOV dword ptr [0x009c6a98],0x8134c0
00801b3f  MOV dword ptr [0x009c6a94],0x813626
00801b49  MOV dword ptr [0x009c6ad4],0x8129f2
00801b53  MOV dword ptr [0x009c6a90],0x812c5f
00801b5d  MOV dword ptr [0x009c6aa8],0x812dbf
00801b67  MOV dword ptr [0x009c6ab4],0x81312d
00801b71  MOV dword ptr [0x009c6a88],0x80f601
00801b7b  MOV dword ptr [0x009c6ac8],0x80f536
00801b85  MOV dword ptr [0x009c6a7c],0x80c664
00801b8f  LEAVE
00801b90  RET
00801b91  MOV dword ptr [0x009c6ab8],0x803ed8
00801b9b  MOV dword ptr [0x009c6ad8],0x803f29
00801ba5  MOV dword ptr [0x009c6a84],0x803e34
00801baf  MOV dword ptr [0x009c6a80],0x801ca1
00801bb9  MOV dword ptr [0x009c6abc],0x8052e5
00801bc3  MOV dword ptr [0x009c6adc],0x804cfe
00801bcd  MOV dword ptr [0x009c6aa4],0x80200b
00801bd7  MOV dword ptr [0x009c6ab0],0x802bec
00801be1  MOV dword ptr [0x009c6ad0],0x803370
00801beb  MOV dword ptr [0x009c6aa0],0x8062e7
00801bf5  MOV dword ptr [0x009c6ae0],0x80639a
00801bff  MOV dword ptr [0x009c6a9c],0x7fef19
00801c09  MOV dword ptr [0x009c6a8c],0x7fef4f
00801c13  MOV dword ptr [0x009c6ac0],0x7fef7f
00801c1d  MOV dword ptr [0x009c6acc],0x7fec00
00801c27  MOV dword ptr [0x009c6ac4],0x7fecfe
00801c31  MOV dword ptr [0x009c6aac],0x7fedaa
00801c3b  MOV dword ptr [0x009c6a78],0x7fe913
00801c45  MOV dword ptr [0x009c6a98],0x7fe9fd
00801c4f  MOV dword ptr [0x009c6a94],0x7feaa0
00801c59  MOV dword ptr [0x009c6ad4],0x803f91
00801c63  MOV dword ptr [0x009c6a90],0x803ffc
00801c6d  MOV dword ptr [0x009c6aa8],0x80407b
00801c77  MOV dword ptr [0x009c6ab4],0x8040e6
00801c81  MOV dword ptr [0x009c6a88],0x808e5b
00801c8b  MOV dword ptr [0x009c6ac8],0x808dae
00801c95  MOV dword ptr [0x009c6a7c],0x7fcaea
00801c9f  LEAVE
00801ca0  RET
