/* speed.exe 006022a0 FUN_006022a0; analysis pseudocode, not buildable source.
 * calls 006010e0 FUN_006010e0
 */

void __fastcall FUN_006022a0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      FUN_006010e0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  return;
}

