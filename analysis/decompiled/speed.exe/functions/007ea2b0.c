/* speed.exe 007ea2b0 FUN_007ea2b0; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 */

void FUN_007ea2b0(int param_1)

{
  int iVar1;
  undefined1 *extraout_ECX;
  
  FUN_007e9ef0(param_1);
  *extraout_ECX = 0x6f;
  iVar1 = *(int *)(param_1 + 0x90);
  if (extraout_ECX + 0x10 == (undefined1 *)0x0) {
    *(undefined4 *)(extraout_ECX + 8) = 0;
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
    return;
  }
  *(int *)(extraout_ECX + 8) = (int)(extraout_ECX + 0x10) - (int)extraout_ECX;
  *(int *)(extraout_ECX + 0xc) = iVar1 + 1;
  return;
}

