/* speed.exe 004d9540 FUN_004d9540; analysis pseudocode, not buildable source.
 * calls 004d8ef0 FUN_004d8ef0
 */

void __fastcall FUN_004d9540(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_004d8ef0();
    for (iVar1 = *(int *)(iVar1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_004d8ef0();
    }
  }
  return;
}

