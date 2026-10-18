/* speed.exe 005e8600 FUN_005e8600; analysis pseudocode, not buildable source.
 * calls 005e8130 FUN_005e8130
 * calls 005c6bb0 FUN_005c6bb0
 * calls 00401670 FUN_00401670
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005e8600(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  void **ppvVar7;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_4c [17];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875458;
  local_4c[0x10] = ExceptionList;
  ExceptionList = local_4c + 0x10;
  FUN_005e8130(param_2,3);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a39b0;
  puVar3 = (undefined4 *)FUN_00454810(0x9f743a0e,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(0xc);
  }
  puVar6 = &DAT_008a3028;
  ppvVar7 = local_4c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppvVar7 = (void *)*puVar6;
    puVar6 = puVar6 + 1;
    ppvVar7 = ppvVar7 + 1;
  }
  local_64 = 0;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_4c[0] = (void *)0x3f800000;
  local_4c[5] = (void *)0x3f800000;
  local_4c[10] = (void *)0x3f800000;
  local_4c[0xf] = (void *)0x3f800000;
  local_4c[0xe] = (void *)0x0;
  local_4c[0xd] = (void *)0x0;
  local_4c[0xc] = (void *)0x0;
  local_4c[0xb] = (void *)0x0;
  local_4c[9] = (void *)0x0;
  local_4c[8] = (void *)0x0;
  local_4c[7] = (void *)0x0;
  local_4c[6] = (void *)0x0;
  local_4c[4] = (void *)0x0;
  local_4c[3] = (void *)0x0;
  local_4c[2] = (void *)0x0;
  local_4c[1] = (void *)0x0;
  pfVar4 = (float *)FUN_00454810(0x5a6a57c6,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(4);
  }
  FUN_005c6bb0(local_4c,*pfVar4 * _DAT_008a3874,local_4c);
  FUN_00401670(&local_64,local_4c,&local_64);
  uVar1 = puVar3[2];
  uVar2 = *puVar3;
  param_1[10] = -(float)puVar3[1];
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  param_1[0xd] = local_64;
  param_1[0xe] = local_60;
  param_1[0xf] = local_5c;
  ExceptionList = local_4c[0x10];
  return param_1;
}

