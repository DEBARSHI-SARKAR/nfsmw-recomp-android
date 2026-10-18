/* speed.exe 006a6fb0 FUN_006a6fb0; analysis pseudocode, not buildable source.
 * calls 00699a90 FUN_00699a90
 * calls 00782a30 FUN_00782a30
 */

void __thiscall FUN_006a6fb0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_1[0xc];
  *(undefined1 *)(iVar1 + 0x5d) = 0;
  (**(code **)(*param_1 + 0x70))(param_2);
  *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfd;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  *(undefined4 *)(iVar1 + 0x14) = param_2[1];
  *(undefined4 *)(iVar1 + 0x18) = param_2[2];
  *(undefined1 *)(iVar1 + 0x5c) = 0;
  if (param_1[0x30] == 1) {
    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) | 0x40;
  }
  else {
    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xbf;
  }
  *(undefined2 *)(*(int *)param_1[0xc] + 0x1e) = *(undefined2 *)(*(int *)param_1[0xc] + 0x1c);
  FUN_00782a30();
  FUN_00699a90();
  return;
}

