/* speed.exe 00844970 FUN_00844970; analysis pseudocode, not buildable source.
 * calls 008448f0 FUN_008448f0
 */

void FUN_00844970(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1834) != 0) {
    if (param_2 != -1) {
      FUN_008448f0();
      return;
    }
    iVar1 = 0;
    do {
      FUN_008448f0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x1d);
  }
  return;
}

