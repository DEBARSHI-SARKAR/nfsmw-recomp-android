/* speed.exe 0072d670 FUN_0072d670; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 00460ca0 FUN_00460ca0
 * calls 004624a0 FUN_004624a0
 * calls 00460cd0 FUN_00460cd0
 * calls 00460a50 FUN_00460a50
 */

undefined4 * __thiscall
FUN_0072d670(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0088059f;
  local_c = ExceptionList;
  puVar5 = param_1 + 8;
  ExceptionList = &local_c;
  *puVar5 = puVar5;
  param_1[9] = puVar5;
  puVar1 = param_1 + 10;
  *puVar1 = puVar1;
  param_1[0xb] = puVar1;
  local_4 = 1;
  uStack_3 = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0xc,0x34,0xc0,(_func_void_void_ptr *)&LAB_00727680,
             (_func_void_void_ptr *)&DAT_00727690);
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = param_3;
  param_1[6] = param_3;
  _local_4 = CONCAT31(uStack_3,2);
  *param_1 = param_5;
  param_1[1] = param_4;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  puVar6 = param_1 + 0x1a;
  iVar7 = 0x20;
  do {
    puVar2 = (undefined4 *)param_1[9];
    piVar3 = puVar6 + -0xe;
    *puVar2 = piVar3;
    param_1[9] = piVar3;
    *piVar3 = (int)puVar5;
    puVar6[-0xd] = puVar2;
    puVar2 = (undefined4 *)param_1[9];
    piVar3 = puVar6 + -1;
    *puVar2 = piVar3;
    param_1[9] = piVar3;
    *piVar3 = (int)puVar5;
    *puVar6 = puVar2;
    puVar2 = (undefined4 *)param_1[9];
    piVar3 = puVar6 + 0xc;
    *puVar2 = piVar3;
    param_1[9] = piVar3;
    *piVar3 = (int)puVar5;
    puVar6[0xd] = puVar2;
    puVar2 = (undefined4 *)param_1[9];
    piVar3 = puVar6 + 0x19;
    *puVar2 = piVar3;
    param_1[9] = piVar3;
    *piVar3 = (int)puVar5;
    puVar6[0x1a] = puVar2;
    puVar2 = (undefined4 *)param_1[9];
    piVar3 = puVar6 + 0x26;
    *puVar2 = piVar3;
    param_1[9] = piVar3;
    puVar6[0x27] = puVar2;
    *piVar3 = (int)puVar5;
    puVar2 = (undefined4 *)param_1[9];
    piVar3 = puVar6 + 0x33;
    *puVar2 = piVar3;
    param_1[9] = piVar3;
    puVar6[0x34] = puVar2;
    puVar6 = puVar6 + 0x4e;
    iVar7 = iVar7 + -1;
    *piVar3 = (int)puVar5;
  } while (iVar7 != 0);
  if ((*(char *)(param_1 + 3) != '\0') && (DAT_0090e674 != 0)) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_30 = param_1;
    FUN_00460ca0(&local_2c,param_4,0x1f);
    FUN_004624a0("CODEINE",0x19,&local_30,0x24);
  }
  piVar3 = (int *)*puVar5;
  piVar4 = (int *)piVar3[1];
  iVar7 = *piVar3;
  *piVar4 = iVar7;
  *(int **)(iVar7 + 4) = piVar4;
  piVar3[2] = param_2;
  piVar3[3] = param_3;
  *(undefined1 *)(piVar3 + 4) = 0;
  FUN_00460cd0((int)piVar3 + 0x11,0,0x20);
  puVar5 = (undefined4 *)param_1[0xb];
  *puVar5 = piVar3;
  param_1[0xb] = piVar3;
  piVar3[1] = (int)puVar5;
  *piVar3 = (int)puVar1;
  if ((*(char *)(param_1 + 3) != '\0') && (DAT_0090e674 != 0)) {
    local_38 = param_2;
    local_34 = param_3;
    local_3c = param_1;
    FUN_004624a0("CODEINE",0x1b,&local_3c,0xc);
  }
  puVar5 = param_1 + 0x9cc;
  *puVar5 = 0;
  param_1[0x9cd] = 0;
  param_1[0x9ce] = 0;
  param_1[0x9cf] = 0;
  param_1[0x9d0] = 0;
  param_1[0x9d1] = 0;
  param_1[0x9d2] = 0;
  param_1[0x9d3] = 0;
  *puVar5 = param_1[1];
  param_1[0x9cd] = param_1;
  param_1[0x9ce] = param_2;
  param_1[0x9cf] = param_3;
  param_1[0x9d0] = &LAB_0072bb80;
  param_1[0x9d1] = &LAB_0072bc00;
  param_1[0x9d2] = &LAB_0072bc20;
  param_1[0x9d3] = &LAB_0072bc40;
  FUN_00460a50(*param_1,puVar5);
  ExceptionList = local_c;
  return param_1;
}

