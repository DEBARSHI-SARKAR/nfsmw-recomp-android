/* speed.exe 004684d0 FUN_004684d0; analysis pseudocode, not buildable source.
 * calls 005fc260 FUN_005fc260
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004684d0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x1968) != 0) {
    fVar1 = (float10)FUN_005fc260();
    if ((float10)_DAT_00890968 < fVar1) {
      return 1;
    }
  }
  return 0;
}

