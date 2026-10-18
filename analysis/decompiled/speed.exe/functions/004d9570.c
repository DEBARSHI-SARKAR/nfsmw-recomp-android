/* speed.exe 004d9570 FUN_004d9570; analysis pseudocode, not buildable source.
 * calls 004d9010 FUN_004d9010
 */

void __fastcall FUN_004d9570(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_004d9010();
    for (iVar1 = *(int *)(iVar1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_004d9010();
    }
  }
  return;
}

