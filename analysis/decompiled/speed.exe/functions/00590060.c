/* speed.exe 00590060 FUN_00590060; analysis pseudocode, not buildable source.
 * calls 00580550 FUN_00580550
 * calls 00722840 FUN_00722840
 * calls 00733c30 FUN_00733c30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00590060(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_10;
  
  if (((param_1[300] & 4U) == 0) || (*param_1 != '\x02')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  iVar5 = FUN_00722840(DAT_00904fb8);
  uVar3 = DAT_00904fd8;
  uVar2 = _DAT_00904fbc;
  uVar1 = DAT_00904fb8;
  if (iVar5 != 0) {
    if ((*(uint *)(iVar5 + 0x94) & 1) != 0) {
      local_10 = 1;
      goto LAB_005900c5;
    }
    local_10 = 0;
    if ((*(uint *)(iVar5 + 0x94) & 4) != 0) goto LAB_005900c5;
  }
  local_10 = 0xffffffff;
LAB_005900c5:
  iVar5 = FUN_00733c30(0);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xb70)) {
    piVar7 = (int *)(param_1 + 0x574);
    do {
      if (*piVar7 == iVar5) {
        param_1 = param_1 + iVar6 * 0xc0 + 0x570;
        goto LAB_00590115;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 0x30;
    } while (iVar6 < *(int *)(param_1 + 0xb70));
  }
  param_1 = (char *)0x0;
LAB_00590115:
  FUN_00580550(local_10,uVar1,uVar2,uVar3,uVar4,param_1);
  return;
}

