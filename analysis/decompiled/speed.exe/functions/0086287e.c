/* speed.exe 0086287e FUN_0086287e; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 008622cc FUN_008622cc
 */

void FUN_0086287e(undefined4 param_1,code *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_008622cc(param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_007ec1bd();
    iVar1 = *(int *)(iVar2 + 0x1c);
    *(code **)(iVar2 + 0x18) = param_2;
    FUN_007ec1c8();
    if (iVar1 == 0) {
      (*param_2)(param_1);
    }
  }
  return;
}

