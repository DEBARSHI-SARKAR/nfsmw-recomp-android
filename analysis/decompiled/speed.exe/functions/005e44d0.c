/* speed.exe 005e44d0 FUN_005e44d0; analysis pseudocode, not buildable source.
 * calls 00722840 FUN_00722840
 * calls 0045ded0 FUN_0045ded0
 * calls 00401670 FUN_00401670
 * calls 0045a430 FUN_0045a430
 * calls 00567510 FUN_00567510
 * calls 00454810 FUN_00454810
 * calls 005c6bb0 FUN_005c6bb0
 * calls 005e2580 FUN_005e2580
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005e44d0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  void **ppvVar6;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c [4];
  int local_5c;
  void *local_4c [17];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875128;
  local_4c[0x10] = ExceptionList;
  ExceptionList = local_4c + 0x10;
  FUN_005e2580(param_1,0,0);
  local_4 = 0;
  if (local_5c == 0) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_4c[0x10];
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00454810(0x9f743a0e,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_006269b0(0xc);
  }
  uVar3 = FUN_00722840(2000);
  local_70 = puVar2[1];
  local_74 = *puVar2;
  FUN_00567510(&local_74,param_2,uVar3);
  puVar2 = &DAT_008a3028;
  ppvVar6 = local_4c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppvVar6 = (void *)*puVar2;
    puVar2 = puVar2 + 1;
    ppvVar6 = ppvVar6 + 1;
  }
  local_6c[0] = 0.0;
  local_6c[1] = 0.0;
  local_6c[2] = 1.0;
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
  FUN_00401670(local_6c,local_4c,local_6c);
  uVar1 = FUN_0045ded0(-local_6c[0],local_6c[2]);
  local_4 = 0xffffffff;
  *param_3 = (float)uVar1 * _DAT_00894958;
  FUN_0045a430();
  ExceptionList = local_4c[0x10];
  return 1;
}

