/* speed.exe 006fc5f0 FUN_006fc5f0; analysis pseudocode, not buildable source.
 * calls 006b5900 FUN_006b5900
 * calls 005d7930 FUN_005d7930
 * calls 006f65b0 FUN_006f65b0
 * calls 006ee860 FUN_006ee860
 * calls 006fc150 FUN_006fc150
 */

undefined4 * __thiscall
FUN_006fc5f0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f65d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006ee860(param_5 + 4);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar1 = param_1 + 0xb;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0xc] = puVar4;
  FUN_005d7930(&LAB_00402820,puVar1);
  *puVar1 = &PTR_FUN_00894974;
  local_4._0_1_ = 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  FUN_006b5900(puVar4);
  local_4._0_1_ = 2;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 4;
  }
  puVar2 = param_1 + 0x10;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0x11] = puVar4;
  FUN_005d7930(&LAB_00668440,puVar2);
  *puVar2 = &PTR_FUN_008a9410;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_006f65b0(param_1);
  *puVar2 = &PTR_LAB_008b08ac;
  *param_1 = &PTR_FUN_008b095c;
  param_1[2] = &PTR_LAB_008b0954;
  *puVar1 = &PTR_LAB_008b0938;
  param_1[0xd] = &PTR_LAB_008b08b8;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = param_4;
  param_1[0x16] = param_3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(bool *)((int)param_1 + 0x69) = param_2 == (int *)0x0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar4 = param_1 + 0x23;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *puVar4 = puVar4;
  param_1[0x24] = puVar4;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (param_2 != (int *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x14))();
    param_1[0x21] = uVar3;
    fVar5 = (float10)(**(code **)(*param_2 + 0x18))();
    param_1[0x22] = (float)fVar5;
    FUN_006fc150(param_2);
    do {
      param_1[0x14] = param_2;
      param_2 = (int *)(**(code **)(*param_2 + 0x58))();
    } while (param_2 != (int *)0x0);
  }
  ExceptionList = local_c;
  return param_1;
}

