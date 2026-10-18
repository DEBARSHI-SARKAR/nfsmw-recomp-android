/* speed.exe 0072f030 FUN_0072f030; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 0072efa0 FUN_0072efa0
 * calls 00466440 FUN_00466440
 * calls 00463c70 FUN_00463c70
 * calls 0045f140 FUN_0045f140
 */

void FUN_0072f030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0088067b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar4 = FUN_0045f140(DAT_009a39f4);
  piVar5 = DAT_009aa4d4;
  if (iVar4 != 0) {
    iVar4 = *DAT_009aa4d4;
    piVar2 = (int *)DAT_009aa4d4[1];
    *piVar2 = iVar4;
    *(int **)(iVar4 + 4) = piVar2;
    if ((((int *)piVar5[0xb] != (int *)0x0) && (iVar4 = *(int *)piVar5[0xb], iVar4 != 0)) &&
       (*(undefined4 **)(iVar4 + 0x2c) != (undefined4 *)0x0)) {
      **(undefined4 **)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
    piVar2 = (int *)piVar5[10];
    iVar4 = *piVar2;
    piVar3 = (int *)piVar2[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    FUN_00466440(piVar2);
    FUN_00463ca0(DAT_009a39f4,piVar5);
  }
  iVar4 = FUN_00463c70(DAT_009a39f4);
  local_14 = 0;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_0072efa0(param_1,param_2,param_3,param_4,param_5);
  }
  iVar4 = (int)DAT_009aa4d0;
  puVar1 = (undefined4 *)((int)DAT_009aa4d0 + 4);
  DAT_009aa4d0 = piVar5;
  *puVar1 = piVar5;
  *piVar5 = iVar4;
  piVar5[1] = (int)&DAT_009aa4d0;
  ExceptionList = local_1c;
  return;
}

