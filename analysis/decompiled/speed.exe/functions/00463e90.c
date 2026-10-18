/* speed.exe 00463e90 FUN_00463e90; analysis pseudocode, not buildable source.
 * calls 00461410 FUN_00461410
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 */

int __thiscall FUN_00463e90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_007ec1bd();
  iVar3 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0xc); puVar1 != (undefined4 *)(param_1 + 0xc);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = FUN_00461410(param_2,&DAT_00890978);
    if (iVar2 != 0) {
      iVar3 = iVar3 + puVar1[3];
    }
  }
  FUN_007ec1c8();
  return iVar3;
}

