/* speed.exe 005e8e60 FUN_005e8e60; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 00460c50 FUN_00460c50
 * calls 0056f2f0 FUN_0056f2f0
 * calls 00739a70 FUN_00739a70
 * calls 00460bc0 FUN_00460bc0
 * calls 00453760 FUN_00453760
 * calls 00748130 FUN_00748130
 * calls 0075b220 FUN_0075b220
 * calls 00581c20 FUN_00581c20
 * calls 004e4ea0 FUN_004e4ea0
 * calls 006269b0 FUN_006269b0
 * calls 004040f0 FUN_004040f0
 * calls 005d59f0 FUN_005d59f0
 * calls 007398d0 FUN_007398d0
 * calls 0056f340 FUN_0056f340
 * calls 0041cb10 FUN_0041cb10
 * calls 005cc240 FUN_005cc240
 */

int __thiscall FUN_005e8e60(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined1 local_508 [4];
  undefined4 local_504;
  undefined1 *local_500;
  undefined4 local_4f8;
  int local_4f4;
  undefined4 *local_4f0;
  undefined4 *local_4ec;
  undefined1 *local_4e8;
  undefined4 local_4e4;
  undefined4 *local_4e0;
  undefined4 local_4dc;
  int local_4d4;
  undefined1 local_4b4 [400];
  int local_324;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087547b;
  local_c = ExceptionList;
  if (param_1[1] == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_00454810();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0();
  }
  pcVar1 = (char *)*puVar3;
  iVar4 = FUN_00454810();
  if (iVar4 == 0) {
    FUN_006269b0();
  }
  puVar3 = (undefined4 *)FUN_00454810();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0();
  }
  puVar6 = (undefined *)*puVar3;
  FUN_00581c20();
  if ((DAT_00926064 != 0) && (iVar4 = FUN_00460c50(), 0 < iVar4)) {
    puVar6 = PTR_DAT_008f86b0;
  }
  if (puVar6 != (undefined *)0x0) {
    FUN_00460bc0();
    iVar4 = FUN_00748130();
    if (iVar4 != 0) {
      FUN_0056f340();
      iVar5 = *(int *)(iVar4 + 0x50);
      if (*(int *)(iVar4 + 0x50) != 0) goto LAB_005e8f5e;
    }
  }
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar4 = FUN_00453760();
    iVar5 = *(int *)(iVar4 + 8);
    if (*(int *)(iVar4 + 8) != 0) goto LAB_005e8f5e;
  }
  iVar5 = param_2;
LAB_005e8f5e:
  FUN_004e4ea0();
  local_4 = 0;
  if (local_4d4 != 0) {
    if (local_324 == 0) {
      FUN_00739a70();
      FUN_00460bc0();
      FUN_007398d0();
      FUN_00739a70();
      FUN_0075b220();
      FUN_0056f2f0();
    }
    uVar2 = DAT_0091e000;
    local_520 = 0x3f800000;
    local_51c = 0x3f800000;
    local_518 = 0x3f800000;
    local_514 = 0;
    local_510 = 0;
    local_50c = 0x3f800000;
    FUN_004040f0();
    local_500 = local_508;
    local_4f0 = &local_514;
    local_4e8 = local_4b4;
    local_504 = 0xa6b47fac;
    local_4f8 = 3;
    local_4ec = &DAT_008a2fb4;
    local_4e4 = uVar2;
    local_4e0 = &local_520;
    local_4dc = 9;
    local_4f4 = iVar5;
    FUN_005cc240("PVehicle");
    iVar4 = FUN_0041cb10();
    if ((iVar4 != 0) && (iVar5 = FUN_005d59f0(), iVar5 != 0)) {
      *param_1 = *(undefined4 *)(iVar4 + 8);
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return iVar5;
    }
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

