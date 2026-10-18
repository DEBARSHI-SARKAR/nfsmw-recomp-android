/* speed.exe 007f4cb7 FUN_007f4cb7; analysis pseudocode, not buildable source.
 * calls 007f3f10 FUN_007f3f10
 * calls 007f7677 FUN_007f7677
 * calls 007f3e70 FUN_007f3e70
 * calls 007f40a9 FUN_007f40a9
 * calls 007f59f7 FUN_007f59f7
 * calls 007f63c2 FUN_007f63c2
 * calls 007f414d FUN_007f414d
 * calls 007f5a15 FUN_007f5a15
 */

undefined4 * __thiscall
FUN_007f4cb7(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_14 [16];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_3;
  puVar3 = param_1 + 7;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = 0;
  FUN_007f3e70();
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  FUN_007f3f10();
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FUN_007f59f7();
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_007f5a15();
  FUN_007f5a15();
  param_1[0xbe] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 4;
  param_1[0xbf] = 0;
  param_1[0xc0] = 1;
  iVar2 = FUN_007f414d(0x138);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007f63c2(param_1,param_3);
  }
  param_1[6] = uVar1;
  puVar3 = param_1 + 0x2d;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_007f40a9(param_2);
  uVar1 = FUN_007f7677(local_14);
  param_1[5] = uVar1;
  return param_1;
}

