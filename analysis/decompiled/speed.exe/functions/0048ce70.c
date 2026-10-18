/* speed.exe 0048ce70 FUN_0048ce70; analysis pseudocode, not buildable source.
 * calls 00486610 FUN_00486610
 * calls 005c8cc0 FUN_005c8cc0
 * calls 0048cd20 FUN_0048cd20
 * calls 0048cb90 FUN_0048cb90
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 FUN_0048ce70(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [12];
  undefined4 auStack_8c [12];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086adf2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0048cd20(param_1);
  FUN_0048cd20(param_2);
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x18))();
  puVar2 = (undefined4 *)*param_1;
  puVar4 = auStack_8c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(*(code *)*puVar2)();
  uStack_ac = *puVar2;
  uStack_a8 = puVar2[1];
  uStack_a4 = puVar2[2];
  uStack_a0 = 0x3f800000;
  uStack_50 = 0x3f800000;
  uStack_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  FUN_005c8cc0(auStack_8c);
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x18))();
  puVar2 = (undefined4 *)*param_2;
  puVar4 = auStack_4c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(*(code *)*puVar2)();
  uStack_ac = *puVar2;
  uStack_a8 = puVar2[1];
  uStack_a4 = puVar2[2];
  uStack_a0 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_1c = uStack_ac;
  uStack_18 = uStack_a8;
  uStack_14 = uStack_a4;
  FUN_005c8cc0(auStack_4c);
  FUN_00486610(param_3,auStack_8c,&uStack_ac);
  FUN_00486610(param_3,auStack_4c,auStack_98);
  iStack_9c = FUN_005d29d0(0x4c,0);
  uStack_4 = 0;
  if (iStack_9c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0048cb90(param_1,&uStack_ac,param_2,auStack_98,param_4);
    if (iVar3 != 0) {
      puVar2 = (undefined4 *)(iVar3 + 4);
      goto LAB_0048cfdb;
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_0048cfdb:
  *DAT_00911330 = puVar2;
  puVar1 = puVar2;
  puVar2[1] = DAT_00911330;
  DAT_00911330 = puVar1;
  *puVar2 = &DAT_0091132c;
  ExceptionList = pvStack_c;
  return *(undefined4 *)(iVar3 + 0x3c);
}

