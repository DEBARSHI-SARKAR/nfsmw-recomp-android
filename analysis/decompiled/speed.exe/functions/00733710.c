/* speed.exe 00733710 FUN_00733710; analysis pseudocode, not buildable source.
 * calls 005fad10 FUN_005fad10
 * calls 00727340 FUN_00727340
 * calls 005fae00 FUN_005fae00
 * calls 005e4df0 FUN_005e4df0
 * calls 007e6630 __stricmp
 * calls 0045db30 FUN_0045db30
 * calls 005dca00 FUN_005dca00
 * calls 005c6bb0 FUN_005c6bb0
 * calls 0045dbf0 FUN_0045dbf0
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00733710(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  char *_Str1;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float local_60;
  undefined4 local_50 [19];
  
  _Str1 = (char *)(DAT_009a3a20 + 0x40);
  local_60 = 0.0;
  iVar4 = __stricmp(_Str1,"L2RA");
  if (iVar4 == 0) {
    param_1[2] = 1767.0;
    local_60 = 0.15;
  }
  else {
    iVar4 = __stricmp(_Str1,"L2RB");
    if (iVar4 == 0) {
      *param_1 = 0.0;
      param_1[1] = 21.0;
      param_1[2] = 0.0;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L2RC");
    if (iVar4 == 0) {
      *param_1 = 0.0;
      param_1[1] = 21.0;
      param_1[2] = 0.0;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L2RD");
    if (iVar4 == 0) {
      *param_1 = 16.0;
      param_1[1] = 457.0;
      param_1[2] = 43.0;
      local_60 = 0.63;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L2RE");
    if (iVar4 == 0) {
      *param_1 = 16.0;
      param_1[1] = 457.0;
      param_1[2] = 43.0;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L2RG");
    if (iVar4 == 0) {
      *param_1 = 2036.0;
      param_1[1] = 70.0;
      param_1[2] = -2010.0;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L4RA");
    if (iVar4 == 0) {
      *param_1 = 30.0;
      param_1[1] = 20.0;
      param_1[2] = 40.0;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L5RD");
    if (iVar4 == 0) {
      *param_1 = -20.0;
      param_1[1] = 2.0;
      param_1[2] = 100.0;
      goto LAB_007338a0;
    }
    iVar4 = __stricmp(_Str1,"L2RX");
    if (iVar4 != 0) goto LAB_007338a0;
    param_1[2] = 1773.0;
    local_60 = 0.63;
  }
  *param_1 = -2510.0;
  param_1[1] = 151.0;
LAB_007338a0:
  bVar3 = local_60 != _DAT_00890968;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 1.0;
  if (bVar3) {
    puVar5 = &DAT_008a3028;
    puVar6 = local_50;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_005c6bb0(local_50,local_60,local_50);
    FUN_00401670(param_2,local_50,param_2);
  }
  iVar4 = FUN_005dca00();
  if (iVar4 == 0) {
    if (DAT_0091e00c != 0) {
      FUN_005e4df0(param_1,param_2);
    }
  }
  else {
    FUN_005fad10(param_1);
    FUN_005fae00(param_2);
  }
  if (DAT_00926064 != 0) {
    iVar4 = FUN_00727340("SkipFEStartPosition",0);
    if (iVar4 != 0) {
      fVar1 = *(float *)(iVar4 + 0x18);
      fVar2 = *(float *)(iVar4 + 0x10);
      *param_1 = -*(float *)(iVar4 + 0x14);
      param_1[1] = fVar1;
      param_1[2] = fVar2;
      fVar7 = (float10)FUN_0045db30(*(undefined2 *)(iVar4 + 0x20));
      fVar8 = (float10)FUN_0045dbf0(*(undefined2 *)(iVar4 + 0x20));
      *param_2 = -(float)fVar7;
      param_2[1] = 0.0;
      param_2[2] = (float)fVar8;
    }
    fVar2 = _DAT_00926158;
    fVar1 = _DAT_00926150;
    if (_DAT_00890968 !=
        SQRT(_DAT_00926150 * _DAT_00926150 +
             _DAT_00926154 * _DAT_00926154 + _DAT_00926158 * _DAT_00926158)) {
      *param_1 = -_DAT_00926154;
      param_1[1] = fVar2;
      param_1[2] = fVar1;
    }
  }
  return;
}

