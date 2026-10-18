/* speed.exe 0044e000 FUN_0044e000; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 * calls 00466410 FUN_00466410
 */

undefined4 * __thiscall
FUN_0044e000(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00869afb;
  ExceptionList = &local_c;
  piVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_00893adc;
  *piVar1 = (int)piVar1;
  param_1[5] = piVar1;
  param_1[3] = param_2;
  puVar6 = (undefined4 *)*param_3;
  local_4 = 0;
  do {
    if (puVar6 == param_3) {
      puVar6 = param_1 + 6;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *param_4;
        param_4 = param_4 + 1;
        puVar6 = puVar6 + 1;
      }
      ExceptionList = local_c;
      return param_1;
    }
    piVar3 = (int *)param_3[1];
    iVar5 = *piVar3;
    piVar4 = (int *)piVar3[1];
    iVar2 = piVar3[2];
    *piVar4 = iVar5;
    *(int **)(iVar5 + 4) = piVar4;
    FUN_00466440(piVar3);
    piVar3 = (int *)FUN_00466410();
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[2] = iVar2;
    }
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      do {
        if (*(char *)(piVar3[2] + 0x29) < *(char *)(piVar4[2] + 0x29)) {
          puVar6 = (undefined4 *)piVar4[1];
          *puVar6 = piVar3;
          piVar4[1] = (int)piVar3;
          piVar3[1] = (int)puVar6;
          *piVar3 = (int)piVar4;
          goto LAB_0044e09b;
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != piVar1);
    }
    puVar6 = (undefined4 *)param_1[5];
    *puVar6 = piVar3;
    param_1[5] = piVar3;
    piVar3[1] = (int)puVar6;
    *piVar3 = (int)piVar1;
LAB_0044e09b:
    puVar6 = (undefined4 *)*param_3;
  } while( true );
}

