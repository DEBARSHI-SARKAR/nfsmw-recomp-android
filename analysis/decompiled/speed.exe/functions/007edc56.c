/* speed.exe 007edc56 FUN_007edc56; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ecc6d FUN_007ecc6d
 * calls 007ed751 FUN_007ed751
 */

undefined4 FUN_007edc56(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 4) == 0) {
    FUN_007ed751();
  }
  FUN_007ec1bd();
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_2 + 0x7c) = param_3;
  uVar2 = (*param_1)(param_3,param_4);
  *(undefined4 *)(param_2 + 0x7c) = uVar1;
  FUN_007ecc6d(param_2 + 0x44);
  FUN_007ec1c8();
  return uVar2;
}

