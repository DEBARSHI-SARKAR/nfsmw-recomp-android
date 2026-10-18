/* speed.exe 007ea130 FUN_007ea130; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 */

void FUN_007ea130(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *extraout_ECX;
  
  FUN_007e9ef0(param_1);
  *extraout_ECX = 0x7c;
  *(undefined4 *)(extraout_ECX + 0x10) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(extraout_ECX + 0x14) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(extraout_ECX + 0x18) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(extraout_ECX + 0x1c) = *(undefined4 *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x7c);
  iVar2 = *(int *)(param_1 + 0x80);
  if (extraout_ECX + 0x20 == (undefined1 *)0x0) {
    *(undefined4 *)(extraout_ECX + 8) = 0;
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
    return;
  }
  *(int *)(extraout_ECX + 8) = (int)(extraout_ECX + 0x20) - (int)extraout_ECX;
  *(int *)(extraout_ECX + 0xc) = iVar1 * iVar2 * 4;
  return;
}

