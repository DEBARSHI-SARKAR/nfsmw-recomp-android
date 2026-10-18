/* speed.exe 0083563c FUN_0083563c; analysis pseudocode, not buildable source.
 * calls 00835600 FUN_00835600
 * calls 008358c4 FUN_008358c4
 */

void __fastcall FUN_0083563c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x18);
  LOCK();
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if (iVar2 == 0) {
    FUN_008358c4(0);
    FUN_00835600(param_1);
  }
  return;
}

