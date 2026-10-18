/* speed.exe 004547d0 FUN_004547d0; analysis pseudocode, not buildable source.
 * calls 00454210 FUN_00454210
 */

undefined1 __fastcall FUN_004547d0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_00454210();
    return uVar1;
  }
  return 0;
}

