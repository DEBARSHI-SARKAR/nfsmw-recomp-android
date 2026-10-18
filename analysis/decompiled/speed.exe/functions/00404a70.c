/* speed.exe 00404a70 FUN_00404a70; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 */

undefined4 __fastcall FUN_00404a70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1968) != 0) {
    uVar1 = FUN_005faa20();
    return uVar1;
  }
  return 0xffffffff;
}

