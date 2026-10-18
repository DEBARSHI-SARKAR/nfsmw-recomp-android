/* speed.exe 0065d530 thunk_FUN_006589a0; analysis pseudocode, not buildable source.
 */

void thunk_FUN_006589a0(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 + param_2;
  for (; param_1 < uVar1; param_1 = param_1 + 8 + *(int *)(param_1 + 4)) {
    FUN_0045ce40();
    iVar2 = FUN_0064a8b0(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      __break();
    }
  }
  if (DAT_00925874 != '\0') {
    return;
  }
  FUN_0045ce40();
  if (DAT_00915fe4 != 0) {
    FUN_00505350();
  }
  FUN_004facb0();
  return;
}

