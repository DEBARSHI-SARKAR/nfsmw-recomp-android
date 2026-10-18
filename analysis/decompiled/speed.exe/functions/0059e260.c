/* speed.exe 0059e260 FUN_0059e260; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 00466410 FUN_00466410
 * calls 00524850 FUN_00524850
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall FUN_0059e260(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008730f3;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a1e80;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  param_1[4] = param_3;
  param_1[6] = 0x80000800;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0xc;
  local_4 = 0;
  *puVar2 = &PTR_FUN_00890970;
  param_1[0xd] = param_2;
  FUN_005d7930(&LAB_005653c0,puVar2);
  *puVar2 = &PTR_FUN_008a0308;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008a20c4;
  *puVar2 = &PTR_LAB_008a20bc;
  param_1[0xe] = 0;
  FUN_0058bbd0(0x87c38e97);
  uVar3 = FUN_00524850(param_1[4],0x27ddf583);
  param_1[0xf] = uVar3;
  iVar4 = FUN_00524850(param_1[4],0xedfb6d37);
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
  param_1[0x10] = iVar4;
  ExceptionList = local_c;
  return param_1;
}

