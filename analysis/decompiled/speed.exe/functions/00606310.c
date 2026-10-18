/* speed.exe 00606310 FUN_00606310; analysis pseudocode, not buildable source.
 */

void FUN_00606310(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != *(int *)(param_1 + 0x28)) {
    do {
      if (((*(uint *)(iVar1 + 8) & 1) == 0) && ((*(uint *)(iVar1 + 8) & 2) != 0)) {
        *(undefined4 *)(iVar1 + 0xc) = **(undefined4 **)(iVar1 + 0x10);
      }
      iVar1 = iVar1 + -0x18;
    } while (iVar1 != *(int *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x32) = 1;
  return;
}

