/* speed.exe 00487160 FUN_00487160; analysis pseudocode, not buildable source.
 * calls 004665b0 FUN_004665b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00487160(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x28))();
  param_1[0x20] = *puVar2;
  param_1[0x21] = puVar2[1];
  param_1[0x22] = puVar2[2];
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x30))();
  param_1[0x23] = *puVar2;
  param_1[0x24] = puVar2[1];
  param_1[0x25] = puVar2[2];
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x10))();
  param_1[0x26] = *puVar2;
  param_1[0x27] = puVar2[1];
  param_1[0x28] = puVar2[2];
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))();
  param_1[0x29] = *puVar2;
  param_1[0x2a] = puVar2[1];
  param_1[0x2b] = puVar2[2];
  puVar2 = (undefined4 *)(**(code **)*param_2)();
  param_1[0x2c] = *puVar2;
  param_1[0x2d] = puVar2[1];
  param_1[0x2e] = puVar2[2];
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f800000;
  uVar1 = (**(code **)(*param_2 + 0x34))();
  *(undefined1 *)(param_1 + 0x32) = uVar1;
  param_1[0x33] = 0;
  fVar5 = (float10)(**(code **)(*param_2 + 0x2c))();
  param_1[0x34] = (float)fVar5;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x18))();
  puVar4 = param_1;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004665b0(param_1,param_1 + 0x10);
  param_1[0x35] = _DAT_0089096c / (float)param_1[0x34];
  return param_1;
}

