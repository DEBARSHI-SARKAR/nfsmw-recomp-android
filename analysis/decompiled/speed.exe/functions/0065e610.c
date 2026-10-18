/* speed.exe 0065e610 FUN_0065e610; analysis pseudocode, not buildable source.
 * calls 007edb59 FUN_007edb59
 * calls 007edabb FUN_007edabb
 * calls 00461970 FUN_00461970
 * calls 00463ca0 FUN_00463ca0
 * calls 00461980 FUN_00461980
 * calls 00466340 FUN_00466340
 */

void FUN_0065e610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a11b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while ((3 < DAT_00925918 && (piVar6 = DAT_00925b28, (int **)DAT_00925b28 != &DAT_00925b28))) {
    while (piVar6[2] != 0) {
      piVar6 = (int *)*piVar6;
      if ((int **)piVar6 == &DAT_00925b28) goto LAB_0065e651;
    }
    iVar1 = *piVar6;
    piVar2 = (int *)piVar6[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    DAT_00925918 = DAT_00925918 + -1;
    uVar5 = FUN_007edb59(piVar6[3],100,0);
    FUN_007edabb(uVar5,&LAB_0064d060);
    FUN_00461980(piVar6[5]);
    FUN_00463ca0(DAT_00925914,piVar6);
  }
LAB_0065e651:
  puVar4 = (undefined4 *)FUN_00466340(DAT_00925914);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    DAT_00925918 = DAT_00925918 + 1;
    puVar4[2] = 0;
    puVar4[3] = param_2;
    puVar4[4] = param_3;
    uVar5 = FUN_00461970(param_1);
    puVar4[5] = uVar5;
  }
  *DAT_00925b2c = puVar4;
  puVar3 = puVar4;
  puVar4[1] = DAT_00925b2c;
  DAT_00925b2c = puVar3;
  *puVar4 = &DAT_00925b28;
  ExceptionList = local_c;
  return;
}

