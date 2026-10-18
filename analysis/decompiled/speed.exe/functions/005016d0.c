/* speed.exe 005016d0 FUN_005016d0; analysis pseudocode, not buildable source.
 * calls 004fbac0 FUN_004fbac0
 */

undefined4 __fastcall FUN_005016d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_004fbac0();
    return uVar1;
  }
  return 0;
}

