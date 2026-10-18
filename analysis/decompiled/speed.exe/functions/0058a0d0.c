/* speed.exe 0058a0d0 FUN_0058a0d0; analysis pseudocode, not buildable source.
 * calls 005816b0 FUN_005816b0
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 */

byte FUN_0058a0d0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  uint *puVar8;
  bool bVar9;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  bVar7 = DAT_00926124;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008723c8;
  local_c = ExceptionList;
  if ((param_3 < 0) || (1 < param_3)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(*(int *)(DAT_0091cf90 + 0x10 + param_3 * 4) + 0x414);
  }
  iVar3 = 0;
  piVar5 = piVar6;
  do {
    if (*piVar5 == param_2) {
      puVar8 = (uint *)(piVar6 + iVar3 * 5);
      goto LAB_0058a135;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 5;
  } while (iVar3 < 200);
  puVar8 = (uint *)0x0;
LAB_0058a135:
  ExceptionList = &local_c;
  FUN_0051e1a0(puVar8[1],0,0);
  iVar3 = *(int *)(DAT_0091cf90 + 0x10);
  bVar1 = *(byte *)(iVar3 + 0xb0);
  bVar7 = bVar7 | 1U - (*(byte *)(local_18 + 0x59) < bVar1);
  local_4 = 0;
  if (((puVar8[3] & 0xf0000) != 0) && ((puVar8[3] & 7) != 0)) {
    uVar4 = FUN_005816b0();
    switch(uVar4) {
    case 5:
    case 6:
    case 8:
    case 0x17:
    case 0x18:
    case 0x2f:
    case 0x3e:
    case 0x43:
    case 0x44:
    case 0x4a:
      bVar7 = 1;
    }
switchD_0058a1a8_caseD_7:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return bVar7;
  }
  if (((puVar8[3] & 0xf0000) == 0) || (((puVar8[3] & 0xffff) >> 3 & 1) == 0))
  goto switchD_0058a1a8_caseD_7;
  uVar2 = *puVar8;
  if (uVar2 < 0x13624f) {
    if (uVar2 == 0x13624e) {
      if (bVar1 < 10) goto LAB_0058a3f2;
      goto switchD_0058a22a_default;
    }
    switch(uVar2) {
    case 0x965f:
      if (1 < bVar1) break;
      goto LAB_0058a3f2;
    case 0x9660:
      if (bVar1 < 3) goto LAB_0058a3f2;
      break;
    case 0x9661:
      if (bVar1 < 4) goto LAB_0058a3f2;
      break;
    case 0x9662:
      if (bVar1 < 5) goto LAB_0058a3f2;
      break;
    case 0x9663:
      if (bVar1 < 6) goto LAB_0058a3f2;
      break;
    case 0x9664:
      if (bVar1 < 7) goto LAB_0058a3f2;
      break;
    case 0x9665:
      if (bVar1 < 8) goto LAB_0058a3f2;
      break;
    case 0x9666:
      if (bVar1 < 9) goto LAB_0058a3f2;
    }
    goto switchD_0058a22a_default;
  }
  if (uVar2 < 0x2d642b9) {
    if (uVar2 != 0x2d642b8) {
      switch(uVar2) {
      case 0x13624f:
        if (bVar1 < 0xb) goto LAB_0058a3f2;
        break;
      case 0x136250:
        if (bVar1 < 0xc) goto LAB_0058a3f2;
        break;
      case 0x136251:
        if (bVar1 < 0xd) goto LAB_0058a3f2;
        break;
      case 0x136252:
        if (bVar1 < 0xe) goto LAB_0058a3f2;
        break;
      case 0x136253:
        if (bVar1 < 0xf) goto LAB_0058a3f2;
      }
      goto switchD_0058a22a_default;
    }
LAB_0058a3e5:
    bVar9 = DAT_008f8718 == '\0';
  }
  else {
    if (0x54653c71 < uVar2) {
      if (uVar2 < 0xcb6aaf30) {
        if (uVar2 == 0xcb6aaf2f) {
          bVar9 = (*(uint *)(iVar3 + 0xac) >> 0xf & 1) == 0;
          goto LAB_0058a3ec;
        }
        if ((uVar2 != 0x54655133) && (uVar2 != 0x582f21d9)) {
          bVar9 = uVar2 == 0x634d1bd2;
          goto LAB_0058a337;
        }
      }
      else if ((uVar2 != 0xe1075862) && (uVar2 != 0xe115ead0)) goto switchD_0058a22a_default;
      goto LAB_0058a3e5;
    }
    if (uVar2 == 0x54653c71) goto LAB_0058a3e5;
    if (uVar2 < 0x2cf370f1) {
      if ((uVar2 != 0x2cf370f0) && (uVar2 != 0x3a94520)) {
        if (uVar2 != 0x3d3401a) {
          bVar9 = uVar2 == 0x3d8a6d1;
LAB_0058a337:
          if (!bVar9) goto switchD_0058a22a_default;
        }
        goto LAB_0058a3e5;
      }
      bVar9 = (*(uint *)(iVar3 + 0xac) >> 0xe & 1) == 0;
    }
    else if (uVar2 == 0x2cf385b2) {
      bVar9 = (*(byte *)(iVar3 + 0xae) & 1) == 0;
    }
    else {
      if (uVar2 != 0x34498eb2) {
        bVar9 = uVar2 == 0x363a1fea;
        goto LAB_0058a337;
      }
      bVar9 = (*(uint *)(iVar3 + 0xac) >> 0x12 & 1) == 0;
    }
  }
LAB_0058a3ec:
  if (!bVar9) {
LAB_0058a3f2:
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 1;
  }
switchD_0058a22a_default:
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

