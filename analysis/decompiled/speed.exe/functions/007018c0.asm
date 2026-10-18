007018c0  MOV EAX,dword ptr [ESP + 0x4]
007018c4  DEC EAX
007018c5  CMP EAX,0x55
007018c8  JA 0x00702078
007018ce  JMP dword ptr [EAX*0x4 + 0x70207c]
007018d5  MOV EAX,dword ptr [ESP + 0x8]
007018d9  MOV ECX,dword ptr [ESP + 0xc]
007018dd  MOV dword ptr [EAX],0x1
007018e3  MOV dword ptr [ECX],0x1
007018e9  MOV AL,0x1
007018eb  RET
007018ec  MOV EDX,dword ptr [ESP + 0x8]
007018f0  MOV EAX,dword ptr [ESP + 0xc]
007018f4  MOV dword ptr [EDX],0x1
007018fa  MOV dword ptr [EAX],0x2
00701900  MOV AL,0x1
00701902  RET
00701903  MOV ECX,dword ptr [ESP + 0x8]
00701907  MOV EDX,dword ptr [ESP + 0xc]
0070190b  MOV dword ptr [ECX],0x1
00701911  MOV dword ptr [EDX],0x4
00701917  MOV AL,0x1
00701919  RET
0070191a  MOV EAX,dword ptr [ESP + 0x8]
0070191e  MOV ECX,dword ptr [ESP + 0xc]
00701922  MOV dword ptr [EAX],0x1
00701928  MOV dword ptr [ECX],0x8
0070192e  MOV AL,0x1
00701930  RET
00701931  MOV EDX,dword ptr [ESP + 0x8]
00701935  MOV EAX,dword ptr [ESP + 0xc]
00701939  MOV dword ptr [EDX],0x1
0070193f  MOV dword ptr [EAX],0x10
00701945  MOV AL,0x1
00701947  RET
00701948  MOV ECX,dword ptr [ESP + 0x8]
0070194c  MOV EDX,dword ptr [ESP + 0xc]
00701950  MOV dword ptr [ECX],0x1
00701956  MOV dword ptr [EDX],0x20
0070195c  MOV AL,0x1
0070195e  RET
0070195f  MOV EAX,dword ptr [ESP + 0x8]
00701963  MOV ECX,dword ptr [ESP + 0xc]
00701967  MOV dword ptr [EAX],0x1
0070196d  MOV dword ptr [ECX],0x40
00701973  MOV AL,0x1
00701975  RET
00701976  MOV EDX,dword ptr [ESP + 0x8]
0070197a  MOV EAX,dword ptr [ESP + 0xc]
0070197e  MOV dword ptr [EDX],0x1
00701984  MOV dword ptr [EAX],0x80
0070198a  MOV AL,0x1
0070198c  RET
0070198d  MOV ECX,dword ptr [ESP + 0x8]
00701991  MOV EDX,dword ptr [ESP + 0xc]
00701995  MOV dword ptr [ECX],0x1
0070199b  MOV dword ptr [EDX],0x100
007019a1  MOV AL,0x1
007019a3  RET
007019a4  MOV EAX,dword ptr [ESP + 0x8]
007019a8  MOV ECX,dword ptr [ESP + 0xc]
007019ac  MOV dword ptr [EAX],0x1
007019b2  MOV dword ptr [ECX],0x200
007019b8  MOV AL,0x1
007019ba  RET
007019bb  MOV EDX,dword ptr [ESP + 0x8]
007019bf  MOV EAX,dword ptr [ESP + 0xc]
007019c3  MOV dword ptr [EDX],0x1
007019c9  MOV dword ptr [EAX],0x400
007019cf  MOV AL,0x1
007019d1  RET
007019d2  MOV ECX,dword ptr [ESP + 0x8]
007019d6  MOV EDX,dword ptr [ESP + 0xc]
007019da  MOV dword ptr [ECX],0x1
007019e0  MOV dword ptr [EDX],0x800
007019e6  MOV AL,0x1
007019e8  RET
007019e9  MOV EAX,dword ptr [ESP + 0x8]
007019ed  MOV ECX,dword ptr [ESP + 0xc]
007019f1  MOV dword ptr [EAX],0x1
007019f7  MOV dword ptr [ECX],0x1000
007019fd  MOV AL,0x1
007019ff  RET
00701a00  MOV EDX,dword ptr [ESP + 0x8]
00701a04  MOV EAX,dword ptr [ESP + 0xc]
00701a08  MOV dword ptr [EDX],0x1
00701a0e  MOV dword ptr [EAX],0x2000
00701a14  MOV AL,0x1
00701a16  RET
00701a17  MOV ECX,dword ptr [ESP + 0x8]
00701a1b  MOV EDX,dword ptr [ESP + 0xc]
00701a1f  MOV dword ptr [ECX],0x1
00701a25  MOV dword ptr [EDX],0x4000
00701a2b  MOV AL,0x1
00701a2d  RET
00701a2e  MOV EAX,dword ptr [ESP + 0x8]
00701a32  MOV ECX,dword ptr [ESP + 0xc]
00701a36  MOV dword ptr [EAX],0x1
00701a3c  MOV dword ptr [ECX],0x8000
00701a42  MOV AL,0x1
00701a44  RET
00701a45  MOV EDX,dword ptr [ESP + 0x8]
00701a49  MOV EAX,dword ptr [ESP + 0xc]
00701a4d  MOV dword ptr [EDX],0x1
00701a53  MOV dword ptr [EAX],0x10000
00701a59  MOV AL,0x1
00701a5b  RET
00701a5c  MOV ECX,dword ptr [ESP + 0x8]
00701a60  MOV EDX,dword ptr [ESP + 0xc]
00701a64  MOV dword ptr [ECX],0x1
00701a6a  MOV dword ptr [EDX],0x20000
00701a70  MOV AL,0x1
00701a72  RET
00701a73  MOV EAX,dword ptr [ESP + 0x8]
00701a77  MOV ECX,dword ptr [ESP + 0xc]
00701a7b  MOV dword ptr [EAX],0x1
00701a81  MOV dword ptr [ECX],0x40000
00701a87  MOV AL,0x1
00701a89  RET
00701a8a  MOV EDX,dword ptr [ESP + 0x8]
00701a8e  MOV EAX,dword ptr [ESP + 0xc]
00701a92  MOV dword ptr [EDX],0x1
00701a98  MOV dword ptr [EAX],0x80000
00701a9e  MOV AL,0x1
00701aa0  RET
00701aa1  MOV ECX,dword ptr [ESP + 0x8]
00701aa5  MOV EDX,dword ptr [ESP + 0xc]
00701aa9  MOV dword ptr [ECX],0x1
00701aaf  MOV dword ptr [EDX],0x100000
00701ab5  MOV AL,0x1
00701ab7  RET
00701ab8  MOV EAX,dword ptr [ESP + 0x8]
00701abc  MOV ECX,dword ptr [ESP + 0xc]
00701ac0  MOV dword ptr [EAX],0x1
00701ac6  MOV dword ptr [ECX],0x200000
00701acc  MOV AL,0x1
00701ace  RET
00701acf  MOV EDX,dword ptr [ESP + 0x8]
00701ad3  MOV EAX,dword ptr [ESP + 0xc]
00701ad7  MOV dword ptr [EDX],0x1
00701add  MOV dword ptr [EAX],0x400000
00701ae3  MOV AL,0x1
00701ae5  RET
00701ae6  MOV ECX,dword ptr [ESP + 0x8]
00701aea  MOV EDX,dword ptr [ESP + 0xc]
00701aee  MOV dword ptr [ECX],0x1
00701af4  MOV dword ptr [EDX],0x800000
00701afa  MOV AL,0x1
00701afc  RET
00701afd  MOV EAX,dword ptr [ESP + 0x8]
00701b01  MOV ECX,dword ptr [ESP + 0xc]
00701b05  MOV dword ptr [EAX],0x1
00701b0b  MOV dword ptr [ECX],0x1000000
00701b11  MOV AL,0x1
00701b13  RET
00701b14  MOV EDX,dword ptr [ESP + 0x8]
00701b18  MOV EAX,dword ptr [ESP + 0xc]
00701b1c  MOV dword ptr [EDX],0x1
00701b22  MOV dword ptr [EAX],0x2000000
00701b28  MOV AL,0x1
00701b2a  RET
00701b2b  MOV ECX,dword ptr [ESP + 0x8]
00701b2f  MOV EDX,dword ptr [ESP + 0xc]
00701b33  MOV dword ptr [ECX],0x1
00701b39  MOV dword ptr [EDX],0x4000000
00701b3f  MOV AL,0x1
00701b41  RET
00701b42  MOV EAX,dword ptr [ESP + 0x8]
00701b46  MOV ECX,dword ptr [ESP + 0xc]
00701b4a  MOV dword ptr [EAX],0x1
00701b50  MOV dword ptr [ECX],0x8000000
00701b56  MOV AL,0x1
00701b58  RET
00701b59  MOV EDX,dword ptr [ESP + 0x8]
00701b5d  MOV EAX,dword ptr [ESP + 0xc]
00701b61  MOV dword ptr [EDX],0x1
00701b67  MOV dword ptr [EAX],0x10000000
00701b6d  MOV AL,0x1
00701b6f  RET
00701b70  MOV ECX,dword ptr [ESP + 0x8]
00701b74  MOV EDX,dword ptr [ESP + 0xc]
00701b78  MOV dword ptr [ECX],0x1
00701b7e  MOV dword ptr [EDX],0x20000000
00701b84  MOV AL,0x1
00701b86  RET
00701b87  MOV EAX,dword ptr [ESP + 0x8]
00701b8b  MOV ECX,dword ptr [ESP + 0xc]
00701b8f  MOV dword ptr [EAX],0x2
00701b95  MOV dword ptr [ECX],0x1
00701b9b  MOV AL,0x1
00701b9d  RET
00701b9e  MOV EDX,dword ptr [ESP + 0x8]
00701ba2  MOV EAX,dword ptr [ESP + 0xc]
00701ba6  MOV dword ptr [EDX],0x2
00701bac  MOV dword ptr [EAX],0x2
00701bb2  MOV AL,0x1
00701bb4  RET
00701bb5  MOV ECX,dword ptr [ESP + 0x8]
00701bb9  MOV EDX,dword ptr [ESP + 0xc]
00701bbd  MOV dword ptr [ECX],0x2
00701bc3  MOV dword ptr [EDX],0x4
00701bc9  MOV AL,0x1
00701bcb  RET
00701bcc  MOV EAX,dword ptr [ESP + 0x8]
00701bd0  MOV ECX,dword ptr [ESP + 0xc]
00701bd4  MOV dword ptr [EAX],0x2
00701bda  MOV dword ptr [ECX],0x8
00701be0  MOV AL,0x1
00701be2  RET
00701be3  MOV EDX,dword ptr [ESP + 0x8]
00701be7  MOV EAX,dword ptr [ESP + 0xc]
00701beb  MOV dword ptr [EDX],0x2
00701bf1  MOV dword ptr [EAX],0x10
00701bf7  MOV AL,0x1
00701bf9  RET
00701bfa  MOV ECX,dword ptr [ESP + 0x8]
00701bfe  MOV EDX,dword ptr [ESP + 0xc]
00701c02  MOV dword ptr [ECX],0x2
00701c08  MOV dword ptr [EDX],0x20
00701c0e  MOV AL,0x1
00701c10  RET
00701c11  MOV EAX,dword ptr [ESP + 0x8]
00701c15  MOV ECX,dword ptr [ESP + 0xc]
00701c19  MOV dword ptr [EAX],0x2
00701c1f  MOV dword ptr [ECX],0x40
00701c25  MOV AL,0x1
00701c27  RET
00701c28  MOV EDX,dword ptr [ESP + 0x8]
00701c2c  MOV EAX,dword ptr [ESP + 0xc]
00701c30  MOV dword ptr [EDX],0x2
00701c36  MOV dword ptr [EAX],0x80
00701c3c  MOV AL,0x1
00701c3e  RET
00701c3f  MOV ECX,dword ptr [ESP + 0x8]
00701c43  MOV EDX,dword ptr [ESP + 0xc]
00701c47  MOV dword ptr [ECX],0x2
00701c4d  MOV dword ptr [EDX],0x100
00701c53  MOV AL,0x1
00701c55  RET
00701c56  MOV EAX,dword ptr [ESP + 0x8]
00701c5a  MOV ECX,dword ptr [ESP + 0xc]
00701c5e  MOV dword ptr [EAX],0x2
00701c64  MOV dword ptr [ECX],0x200
00701c6a  MOV AL,0x1
00701c6c  RET
00701c6d  MOV EDX,dword ptr [ESP + 0x8]
00701c71  MOV EAX,dword ptr [ESP + 0xc]
00701c75  MOV dword ptr [EDX],0x2
00701c7b  MOV dword ptr [EAX],0x400
00701c81  MOV AL,0x1
00701c83  RET
00701c84  MOV ECX,dword ptr [ESP + 0x8]
00701c88  MOV EDX,dword ptr [ESP + 0xc]
00701c8c  MOV dword ptr [ECX],0x2
00701c92  MOV dword ptr [EDX],0x800
00701c98  MOV AL,0x1
00701c9a  RET
00701c9b  MOV EAX,dword ptr [ESP + 0x8]
00701c9f  MOV ECX,dword ptr [ESP + 0xc]
00701ca3  MOV dword ptr [EAX],0x2
00701ca9  MOV dword ptr [ECX],0x1000
00701caf  MOV AL,0x1
00701cb1  RET
00701cb2  MOV EDX,dword ptr [ESP + 0x8]
00701cb6  MOV EAX,dword ptr [ESP + 0xc]
00701cba  MOV dword ptr [EDX],0x2
00701cc0  MOV dword ptr [EAX],0x2000
00701cc6  MOV AL,0x1
00701cc8  RET
00701cc9  MOV ECX,dword ptr [ESP + 0x8]
00701ccd  MOV EDX,dword ptr [ESP + 0xc]
00701cd1  MOV dword ptr [ECX],0x2
00701cd7  MOV dword ptr [EDX],0x4000
00701cdd  MOV AL,0x1
00701cdf  RET
00701ce0  MOV EAX,dword ptr [ESP + 0x8]
00701ce4  MOV ECX,dword ptr [ESP + 0xc]
00701ce8  MOV dword ptr [EAX],0x2
00701cee  MOV dword ptr [ECX],0x8000
00701cf4  MOV AL,0x1
00701cf6  RET
00701cf7  MOV EDX,dword ptr [ESP + 0x8]
00701cfb  MOV EAX,dword ptr [ESP + 0xc]
00701cff  MOV dword ptr [EDX],0x2
00701d05  MOV dword ptr [EAX],0x10000
00701d0b  MOV AL,0x1
00701d0d  RET
00701d0e  MOV ECX,dword ptr [ESP + 0x8]
00701d12  MOV EDX,dword ptr [ESP + 0xc]
00701d16  MOV dword ptr [ECX],0x2
00701d1c  MOV dword ptr [EDX],0x20000
00701d22  MOV AL,0x1
00701d24  RET
00701d25  MOV EAX,dword ptr [ESP + 0x8]
00701d29  MOV ECX,dword ptr [ESP + 0xc]
00701d2d  MOV dword ptr [EAX],0x2
00701d33  MOV dword ptr [ECX],0x40000
00701d39  MOV AL,0x1
00701d3b  RET
00701d3c  MOV EDX,dword ptr [ESP + 0x8]
00701d40  MOV EAX,dword ptr [ESP + 0xc]
00701d44  MOV dword ptr [EDX],0x2
00701d4a  MOV dword ptr [EAX],0x80000
00701d50  MOV AL,0x1
00701d52  RET
00701d53  MOV ECX,dword ptr [ESP + 0x8]
00701d57  MOV EDX,dword ptr [ESP + 0xc]
00701d5b  MOV dword ptr [ECX],0x2
00701d61  MOV dword ptr [EDX],0x100000
00701d67  MOV AL,0x1
00701d69  RET
00701d6a  MOV EAX,dword ptr [ESP + 0x8]
00701d6e  MOV ECX,dword ptr [ESP + 0xc]
00701d72  MOV dword ptr [EAX],0x2
00701d78  MOV dword ptr [ECX],0x200000
00701d7e  MOV AL,0x1
00701d80  RET
00701d81  MOV EDX,dword ptr [ESP + 0x8]
00701d85  MOV EAX,dword ptr [ESP + 0xc]
00701d89  MOV dword ptr [EDX],0x2
00701d8f  MOV dword ptr [EAX],0x400000
00701d95  MOV AL,0x1
00701d97  RET
00701d98  MOV ECX,dword ptr [ESP + 0x8]
00701d9c  MOV EDX,dword ptr [ESP + 0xc]
00701da0  MOV dword ptr [ECX],0x2
00701da6  MOV dword ptr [EDX],0x800000
00701dac  MOV AL,0x1
00701dae  RET
00701daf  MOV EAX,dword ptr [ESP + 0x8]
00701db3  MOV ECX,dword ptr [ESP + 0xc]
00701db7  MOV dword ptr [EAX],0x2
00701dbd  MOV dword ptr [ECX],0x1000000
00701dc3  MOV AL,0x1
00701dc5  RET
00701dc6  MOV EDX,dword ptr [ESP + 0x8]
00701dca  MOV EAX,dword ptr [ESP + 0xc]
00701dce  MOV dword ptr [EDX],0x2
00701dd4  MOV dword ptr [EAX],0x2000000
00701dda  MOV AL,0x1
00701ddc  RET
00701ddd  MOV ECX,dword ptr [ESP + 0x8]
00701de1  MOV EDX,dword ptr [ESP + 0xc]
00701de5  MOV dword ptr [ECX],0x2
00701deb  MOV dword ptr [EDX],0x4000000
00701df1  MOV AL,0x1
00701df3  RET
00701df4  MOV EAX,dword ptr [ESP + 0x8]
00701df8  MOV ECX,dword ptr [ESP + 0xc]
00701dfc  MOV dword ptr [EAX],0x2
00701e02  MOV dword ptr [ECX],0x8000000
00701e08  MOV AL,0x1
00701e0a  RET
00701e0b  MOV EDX,dword ptr [ESP + 0x8]
00701e0f  MOV EAX,dword ptr [ESP + 0xc]
00701e13  MOV dword ptr [EDX],0x2
00701e19  MOV dword ptr [EAX],0x10000000
00701e1f  MOV AL,0x1
00701e21  RET
00701e22  MOV ECX,dword ptr [ESP + 0x8]
00701e26  MOV EDX,dword ptr [ESP + 0xc]
00701e2a  MOV dword ptr [ECX],0x2
00701e30  MOV dword ptr [EDX],0x20000000
00701e36  MOV AL,0x1
00701e38  RET
00701e39  MOV EAX,dword ptr [ESP + 0x8]
00701e3d  MOV ECX,dword ptr [ESP + 0xc]
00701e41  MOV dword ptr [EAX],0x2
00701e47  MOV dword ptr [ECX],0x40000000
00701e4d  MOV AL,0x1
00701e4f  RET
00701e50  MOV EDX,dword ptr [ESP + 0x8]
00701e54  MOV EAX,dword ptr [ESP + 0xc]
00701e58  MOV dword ptr [EDX],0x4
00701e5e  MOV dword ptr [EAX],0x4
00701e64  MOV AL,0x1
00701e66  RET
00701e67  MOV ECX,dword ptr [ESP + 0x8]
00701e6b  MOV EDX,dword ptr [ESP + 0xc]
00701e6f  MOV dword ptr [ECX],0x4
00701e75  MOV dword ptr [EDX],0x1
00701e7b  MOV AL,0x1
00701e7d  RET
00701e7e  MOV EAX,dword ptr [ESP + 0x8]
00701e82  MOV ECX,dword ptr [ESP + 0xc]
00701e86  MOV dword ptr [EAX],0x8
00701e8c  MOV dword ptr [ECX],0x1
00701e92  MOV AL,0x1
00701e94  RET
00701e95  MOV EDX,dword ptr [ESP + 0x8]
00701e99  MOV EAX,dword ptr [ESP + 0xc]
00701e9d  MOV dword ptr [EDX],0x8
00701ea3  MOV dword ptr [EAX],0x4
00701ea9  MOV AL,0x1
00701eab  RET
00701eac  MOV ECX,dword ptr [ESP + 0x8]
00701eb0  MOV EDX,dword ptr [ESP + 0xc]
00701eb4  MOV dword ptr [ECX],0x8
00701eba  MOV dword ptr [EDX],0x8
00701ec0  MOV AL,0x1
00701ec2  RET
00701ec3  MOV EAX,dword ptr [ESP + 0x8]
00701ec7  MOV ECX,dword ptr [ESP + 0xc]
00701ecb  MOV dword ptr [EAX],0x8
00701ed1  MOV dword ptr [ECX],0x10
00701ed7  MOV AL,0x1
00701ed9  RET
00701eda  MOV EDX,dword ptr [ESP + 0x8]
00701ede  MOV EAX,dword ptr [ESP + 0xc]
00701ee2  MOV dword ptr [EDX],0x8
00701ee8  MOV dword ptr [EAX],0x20
00701eee  MOV AL,0x1
00701ef0  RET
00701ef1  MOV ECX,dword ptr [ESP + 0x8]
00701ef5  MOV EDX,dword ptr [ESP + 0xc]
00701ef9  MOV dword ptr [ECX],0x8
00701eff  MOV dword ptr [EDX],0x40
00701f05  MOV AL,0x1
00701f07  RET
00701f08  MOV EAX,dword ptr [ESP + 0x8]
00701f0c  MOV ECX,dword ptr [ESP + 0xc]
00701f10  MOV dword ptr [EAX],0x8
00701f16  MOV dword ptr [ECX],0x80
00701f1c  MOV AL,0x1
00701f1e  RET
00701f1f  MOV EDX,dword ptr [ESP + 0x8]
00701f23  MOV EAX,dword ptr [ESP + 0xc]
00701f27  MOV dword ptr [EDX],0x8
00701f2d  MOV dword ptr [EAX],0x100
00701f33  MOV AL,0x1
00701f35  RET
00701f36  MOV ECX,dword ptr [ESP + 0x8]
00701f3a  MOV EDX,dword ptr [ESP + 0xc]
00701f3e  MOV dword ptr [ECX],0x8
00701f44  MOV dword ptr [EDX],0x200
00701f4a  MOV AL,0x1
00701f4c  RET
00701f4d  MOV EAX,dword ptr [ESP + 0x8]
00701f51  MOV ECX,dword ptr [ESP + 0xc]
00701f55  MOV dword ptr [EAX],0x8
00701f5b  MOV dword ptr [ECX],0x400
00701f61  MOV AL,0x1
00701f63  RET
00701f64  MOV EDX,dword ptr [ESP + 0x8]
00701f68  MOV EAX,dword ptr [ESP + 0xc]
00701f6c  MOV dword ptr [EDX],0x8
00701f72  MOV dword ptr [EAX],0x800
00701f78  MOV AL,0x1
00701f7a  RET
00701f7b  MOV ECX,dword ptr [ESP + 0x8]
00701f7f  MOV EDX,dword ptr [ESP + 0xc]
00701f83  MOV dword ptr [ECX],0x8
00701f89  MOV dword ptr [EDX],0x1000
00701f8f  MOV AL,0x1
00701f91  RET
00701f92  MOV EAX,dword ptr [ESP + 0x8]
00701f96  MOV ECX,dword ptr [ESP + 0xc]
00701f9a  MOV dword ptr [EAX],0x8
00701fa0  MOV dword ptr [ECX],0x2000
00701fa6  MOV AL,0x1
00701fa8  RET
00701fa9  MOV EDX,dword ptr [ESP + 0x8]
00701fad  MOV EAX,dword ptr [ESP + 0xc]
00701fb1  MOV dword ptr [EDX],0x8
00701fb7  MOV dword ptr [EAX],0x4000
00701fbd  MOV AL,0x1
00701fbf  RET
00701fc0  MOV ECX,dword ptr [ESP + 0x8]
00701fc4  MOV EDX,dword ptr [ESP + 0xc]
00701fc8  MOV dword ptr [ECX],0x8
00701fce  MOV dword ptr [EDX],0x8000
00701fd4  MOV AL,0x1
00701fd6  RET
00701fd7  MOV EAX,dword ptr [ESP + 0x8]
00701fdb  MOV ECX,dword ptr [ESP + 0xc]
00701fdf  MOV dword ptr [EAX],0x8
00701fe5  MOV dword ptr [ECX],0x10000
00701feb  MOV AL,0x1
00701fed  RET
00701fee  MOV EDX,dword ptr [ESP + 0x8]
00701ff2  MOV EAX,dword ptr [ESP + 0xc]
00701ff6  MOV dword ptr [EDX],0x8
00701ffc  MOV dword ptr [EAX],0x20000
00702002  MOV AL,0x1
00702004  RET
00702005  MOV ECX,dword ptr [ESP + 0x8]
00702009  MOV EDX,dword ptr [ESP + 0xc]
0070200d  MOV dword ptr [ECX],0x8
00702013  MOV dword ptr [EDX],0x40000
00702019  MOV AL,0x1
0070201b  RET
0070201c  MOV EAX,dword ptr [ESP + 0x8]
00702020  MOV ECX,dword ptr [ESP + 0xc]
00702024  MOV dword ptr [EAX],0x8
0070202a  MOV dword ptr [ECX],0x80000
00702030  MOV AL,0x1
00702032  RET
00702033  MOV EDX,dword ptr [ESP + 0x8]
00702037  MOV EAX,dword ptr [ESP + 0xc]
0070203b  MOV dword ptr [EDX],0x1
00702041  MOV dword ptr [EAX],0x40000000
00702047  MOV AL,0x1
00702049  RET
0070204a  MOV ECX,dword ptr [ESP + 0x8]
0070204e  MOV EDX,dword ptr [ESP + 0xc]
00702052  MOV dword ptr [ECX],0x4
00702058  MOV dword ptr [EDX],0x8
0070205e  MOV AL,0x1
00702060  RET
00702061  MOV EAX,dword ptr [ESP + 0x8]
00702065  MOV ECX,dword ptr [ESP + 0xc]
00702069  MOV dword ptr [EAX],0x8
0070206f  MOV dword ptr [ECX],0x100000
00702075  MOV AL,0x1
00702077  RET
00702078  XOR AL,AL
0070207a  RET
