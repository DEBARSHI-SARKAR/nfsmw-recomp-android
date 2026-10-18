/* speed.exe 0075e850 FUN_0075e850; analysis pseudocode, not buildable source.
 * calls 007586b0 FUN_007586b0
 * calls 0075e810 FUN_0075e810
 * calls 00460bf0 FUN_00460bf0
 * calls 007585b0 FUN_007585b0
 */

undefined4 * __thiscall FUN_0075e850(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_008b4c60;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  uVar3 = FUN_00460bf0(param_2);
  uVar6 = 0;
  param_1[4] = uVar3;
  puVar5 = param_1;
  FUN_0075e810(uVar3,param_1,0);
  iVar4 = FUN_007586b0(uVar3,puVar5,uVar6);
  if (iVar4 == 0) {
    piVar1 = param_1 + 1;
    iVar4 = FUN_007585b0();
    piVar2 = *(int **)(iVar4 + 4);
    *piVar2 = (int)piVar1;
    *(int **)(iVar4 + 4) = piVar1;
    param_1[2] = piVar2;
    *piVar1 = iVar4;
  }
  return param_1;
}

