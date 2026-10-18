/* speed.exe 00463e50 FUN_00463e50; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

int __fastcall FUN_00463e50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_007ec1bd();
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)(param_1 + 4);
      puVar1 = (undefined4 *)*puVar1) {
    if (iVar2 < (int)puVar1[2]) {
      iVar2 = puVar1[2];
    }
  }
  FUN_007ec1c8();
  return iVar2;
}

