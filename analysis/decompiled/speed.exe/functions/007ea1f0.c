/* speed.exe 007ea1f0 FUN_007ea1f0; analysis pseudocode, not buildable source.
 * calls 007e9ef0 FUN_007e9ef0
 * calls 007c6100 _sprintf
 */

void FUN_007ea1f0(int param_1)

{
  undefined4 uVar1;
  undefined1 *extraout_ECX;
  
  FUN_007e9ef0(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  *extraout_ECX = 0x69;
  if (extraout_ECX + 0x10 == (undefined1 *)0x0) {
    *(undefined4 *)(extraout_ECX + 8) = 0;
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  else {
    *(int *)(extraout_ECX + 8) = (int)(extraout_ECX + 0x10) - (int)extraout_ECX;
    *(undefined4 *)(extraout_ECX + 0xc) = uVar1;
  }
  if (*(int *)(extraout_ECX + 8) == 0) {
    _sprintf((char *)0x0,"EAGL%d",uVar1);
    return;
  }
  _sprintf(extraout_ECX + *(int *)(extraout_ECX + 8),"EAGL%d",uVar1);
  return;
}

