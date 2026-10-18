/* speed.exe 004b1340 FUN_004b1340; analysis pseudocode, not buildable source.
 * calls 006539d0 FUN_006539d0
 * calls 00653b70 FUN_00653b70
 */

void __thiscall FUN_004b1340(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x180) = param_2;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x40400000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  FUN_006539d0(0xf);
  FUN_00653b70(0);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x54) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x60) = 0xbf800000;
  FUN_006539d0(0xf);
  FUN_00653b70(0);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  FUN_006539d0(3);
  FUN_00653b70(0);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xe8) = 0xbdcccccd;
  *(undefined4 *)(param_1 + 0xec) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf0) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xf8) = 0xbf800000;
  FUN_006539d0(3);
  FUN_00653b70(0);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x140) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x134) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x138) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x13c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x144) = 0xbf800000;
  FUN_006539d0(2);
  FUN_00653b70(0);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x13c);
  return;
}

