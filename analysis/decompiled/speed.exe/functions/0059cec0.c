/* speed.exe 0059cec0 FUN_0059cec0; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 0058bbd0 FUN_0058bbd0
 * calls 005d7930 FUN_005d7930
 * calls 00466410 FUN_00466410
 */

undefined4 * __thiscall FUN_0059cec0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872f33;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x40004000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0xc;
  local_4 = 0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_005658f0,puVar2);
  *puVar2 = &PTR_FUN_008a0420;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a1f50;
  *puVar2 = &PTR_LAB_008a1f44;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_0058bbd0(0xc46a80a9);
  uVar3 = FUN_00524850(param_1[4],0x7f91da62);
  param_1[0x11] = uVar3;
  uVar3 = FUN_00524850(param_1[4],0x6f85ed55);
  param_1[0x12] = uVar3;
  iVar4 = FUN_00524850(param_1[4],0x862824c9);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00466410();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = iVar4;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  param_1[0x14] = iVar4;
  iVar4 = FUN_00524850(param_1[4],0x4b2cbe1b);
  if (iVar4 != 0) {
    piVar6 = (int *)FUN_00466410();
    piVar5 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      piVar6[2] = iVar4;
      piVar5 = piVar6;
    }
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = piVar5;
    param_1[3] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  param_1[0x15] = iVar4;
  ExceptionList = local_c;
  return param_1;
}

