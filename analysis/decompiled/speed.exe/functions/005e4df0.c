/* speed.exe 005e4df0 FUN_005e4df0; analysis pseudocode, not buildable source.
 * calls 005e4cf0 FUN_005e4cf0
 * calls 00401670 FUN_00401670
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 005c6bb0 FUN_005c6bb0
 * calls 005e2580 FUN_005e2580
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e4df0(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  void **ppvVar7;
  void *local_4c [17];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875188;
  local_4c[0x10] = ExceptionList;
  ExceptionList = local_4c + 0x10;
  uVar3 = FUN_005e4cf0();
  FUN_005e2580(uVar3,0,0);
  local_4 = 0;
  pfVar4 = (float *)FUN_00454810(0x9f743a0e,0);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_006269b0(0xc);
  }
  fVar1 = *pfVar4;
  fVar2 = pfVar4[2];
  *param_1 = -pfVar4[1];
  param_1[1] = fVar2;
  param_1[2] = fVar1;
  puVar6 = &DAT_008a3028;
  ppvVar7 = local_4c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppvVar7 = (void *)*puVar6;
    puVar6 = puVar6 + 1;
    ppvVar7 = ppvVar7 + 1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x3f800000;
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
  FUN_00401670(param_2,local_4c,param_2);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_4c[0x10];
  return;
}

