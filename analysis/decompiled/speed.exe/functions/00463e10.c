/* speed.exe 00463e10 FUN_00463e10; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

int __fastcall FUN_00463e10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_007ec1bd();
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + puVar1[2];
  }
  FUN_007ec1c8();
  return iVar2;
}

