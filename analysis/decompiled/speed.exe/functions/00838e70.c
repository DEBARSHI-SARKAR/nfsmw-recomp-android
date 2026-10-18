/* speed.exe 00838e70 FUN_00838e70; analysis pseudocode, not buildable source.
 * calls 00836950 FUN_00836950
 * calls 007d6cb0 __security_check_cookie
 * calls 008367a0 FUN_008367a0
 * calls 007c64e0 _strncpy
 * calls 00836c90 FUN_00836c90
 * calls 00847bd0 FUN_00847bd0
 * calls 00848200 FUN_00848200
 * calls 00838b90 FUN_00838b90
 * calls 00836a90 FUN_00836a90
 * calls 00847b60 FUN_00847b60
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00838e70(int param_1,char *param_2,undefined *param_3,uint param_4,int param_5,
            undefined4 param_6)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 auStack_4b0 [71];
  undefined4 auStack_394 [64];
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  char *pcStack_288;
  char local_250 [248];
  undefined *local_158;
  undefined4 local_130 [73];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  puVar5 = local_130;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(int *)(param_1 + 0xc) == 5) {
    return 0xffffff92;
  }
  if (*(int *)(param_1 + 0x38) != 2) {
    if (param_3 != (undefined *)0x100000) {
      return 0xfffffffc;
    }
    FUN_00836950();
  }
  piVar6 = (int *)0x0;
  iVar3 = FUN_00847b60();
  if (((iVar3 != 0) && (iVar3 = FUN_00848200(), iVar3 != 0)) &&
     (piVar2 = *(int **)(iVar3 + 0x100), piVar2 != (int *)0x0)) {
    if (param_3 == (undefined *)0x100000) {
      uVar1 = *(ushort *)((int)piVar2 + 10);
      *(ushort *)((int)piVar2 + 10) = uVar1 | (ushort)param_4;
      if ((((undefined4 *)*piVar2)[0x3e] & 0x100000) == 0) {
        puVar5 = (undefined4 *)*piVar2;
        pcVar4 = local_250;
        for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pcVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          pcVar4 = pcVar4 + 4;
        }
        uStack_28c = *(undefined4 *)(param_1 + 8);
        pcStack_288 = local_250;
        local_158 = &DAT_00900000;
        iStack_290 = 0x838f7c;
        FUN_00847bd0();
        iStack_290 = param_1;
        uStack_294 = 0x838f82;
        FUN_008367a0();
        return 0;
      }
      if ((param_4 & uVar1) != 0) {
        return 0;
      }
      FUN_008367a0();
      return 0;
    }
    piVar6 = piVar2;
    if ((*(uint *)(*piVar2 + 0xf8) & (uint)param_3) != 0) {
      return 0;
    }
  }
  if (((param_3 == (undefined *)0x200) || ((piVar6 == (int *)0x0 && (param_4 != 0x40)))) &&
     (iVar3 = FUN_00838b90(), iVar3 == 0)) {
    return 0xfffffffb;
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    if (param_3 != (undefined *)0x100000) {
      return 0xffffffff;
    }
    if (param_5 != 0) {
      return 0xffffffff;
    }
  }
  else if (param_5 != 0) {
    *(int *)(param_1 + 0x2c) = param_5;
    *(undefined4 *)(param_1 + 0x28) = param_6;
  }
  if (piVar6 != (int *)0x0) {
    puVar5 = (undefined4 *)*piVar6;
    puVar7 = local_130;
    for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  puVar5 = local_130;
  pcVar4 = local_250;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    pcVar4 = pcVar4 + 4;
  }
  pcStack_288 = (char *)0x839097;
  _strncpy(local_250,param_2,0x21);
  local_158 = param_3;
  if (param_3 == (undefined *)0x100000) {
    local_158 = &DAT_00900000;
  }
  pcVar4 = local_250;
  puVar5 = auStack_394;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_130;
  puVar7 = auStack_4b0;
  for (iVar3 = 0x47; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = FUN_00836c90(param_1);
  if ((iVar3 != 0) && (param_3 == (undefined *)0x100000)) {
    *(ushort *)(iVar3 + 10) = *(ushort *)(iVar3 + 10) | (ushort)param_4;
    pcStack_288 = (char *)0x839124;
    FUN_00836a90();
    pcStack_288 = (char *)param_1;
    uStack_28c = 0x83912a;
    FUN_008367a0();
  }
  return 0;
}

