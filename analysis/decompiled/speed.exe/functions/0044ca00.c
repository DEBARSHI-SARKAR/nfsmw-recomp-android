/* speed.exe 0044ca00 FUN_0044ca00; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 00449970 FUN_00449970
 * calls 00448210 FUN_00448210
 * calls 0044bb80 FUN_0044bb80
 */

void __thiscall FUN_0044ca00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_50 [76];
  
  if (((*(int *)(param_1 + 0x20) == 0) ||
      (iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x24), iVar1 == 0)) ||
     (iVar1 = *(int *)(iVar1 + 8),
     (*(byte *)((iVar1 >> 3) + DAT_009ab21c) & (byte)(1 << ((byte)iVar1 & 7))) != 0)) {
    if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 0x10) != 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x28) = 1;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0044bb80(param_2);
      if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x24) != 0)) {
        FUN_00448210();
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
        FUN_00444fe0(local_50,*(int *)(param_1 + 0xc) + 0x60);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xf8) = 0;
        FUN_00449970(iVar1 + 0x40);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x28) = 0;
    return;
  }
  return;
}

