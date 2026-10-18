/* speed.exe 00556910 FUN_00556910; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 00460c70 FUN_00460c70
 * calls 00586ca0 FUN_00586ca0
 * calls 005926b0 FUN_005926b0
 * calls 00519d30 FUN_00519d30
 * calls 0054b500 FUN_0054b500
 * calls 0056bc10 FUN_0056bc10
 * calls 0045d380 FUN_0045d380
 * calls 0051dd80 FUN_0051dd80
 * calls 0053c8a0 FUN_0053c8a0
 * calls 00592410 FUN_00592410
 * calls 00519d50 FUN_00519d50
 */

void __thiscall FUN_00556910(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  local_20 = 0;
  uVar1 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x50));
  switch(uVar1) {
  case 1:
    iVar3 = *(int *)(param_1 + 0x100);
    if (param_2 == 0) {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 4;
      }
      uVar1 = FUN_00519d50(iVar3);
      *(undefined4 *)(param_1 + 0x100) = uVar1;
      FUN_0054b500();
      FUN_005926b0(1);
      return;
    }
    if (iVar3 == 0) {
      uVar1 = FUN_00519d30(0);
      *(undefined4 *)(param_1 + 0x100) = uVar1;
      FUN_0054b500();
      FUN_005926b0(1);
      return;
    }
    uVar1 = FUN_00519d30(iVar3 + 4);
    *(undefined4 *)(param_1 + 0x100) = uVar1;
    FUN_0054b500();
    FUN_005926b0(1);
    return;
  case 2:
    if (param_2 == 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0xc);
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)(param_1 + 0xf0);
LAB_00556acf:
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x110) + 4);
      }
      else {
        if (iVar3 != 1) {
          if (iVar3 != 2) goto LAB_00556ae5;
          puVar5 = (undefined4 *)(param_1 + 0xf8);
          goto LAB_00556acf;
        }
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x110) + 4);
        puVar5 = (undefined4 *)(param_1 + 0xe8);
      }
      if (puVar2 == puVar5) {
        puVar2 = (undefined4 *)puVar5[1];
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 0xc);
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)(param_1 + 0xf0);
      }
      else {
        if (iVar3 == 1) {
          puVar2 = (undefined4 *)**(int **)(param_1 + 0x110);
          if (puVar2 == (undefined4 *)(param_1 + 0xe8)) {
            *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xe8);
            FUN_0053c8a0();
            FUN_005926b0(1);
            return;
          }
          goto LAB_00556adf;
        }
        if (iVar3 != 2) goto LAB_00556ae5;
        puVar5 = (undefined4 *)(param_1 + 0xf8);
      }
      puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x110);
      if (puVar2 == puVar5) {
        *(undefined4 *)(param_1 + 0x110) = *puVar5;
        FUN_0053c8a0();
        FUN_005926b0(1);
        return;
      }
    }
LAB_00556adf:
    *(undefined4 **)(param_1 + 0x110) = puVar2;
LAB_00556ae5:
    FUN_0053c8a0();
    FUN_005926b0(1);
    return;
  case 3:
    if (param_2 == 0) {
      iVar3 = *(int *)(param_1 + 0x118) + -1;
      *(int *)(param_1 + 0x118) = iVar3;
      if (iVar3 < 2) {
        *(uint *)(param_1 + 0x118) = (uint)DAT_0089f6fc;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x118) + 1;
      *(int *)(param_1 + 0x118) = iVar3;
      if ((int)(uint)DAT_0089f6fc < iVar3) {
        *(undefined4 *)(param_1 + 0x118) = 2;
      }
    }
    iVar3 = FUN_0045d380(2);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    iVar3 = FUN_00592410(iVar3);
    FUN_00515e20(&local_20,0x20,&DAT_0089d764,*(undefined4 *)(param_1 + 0x118));
    if (*(int *)(iVar3 + 0xc) == 0) {
LAB_00556c33:
      puVar4 = &local_20;
      iVar3 = 0xc;
    }
    else {
      puVar4 = &local_20;
      iVar3 = *(int *)(iVar3 + 0xc) + 8;
    }
    goto LAB_00556d87;
  case 4:
    bVar6 = *(char *)(DAT_0091cf90 + 0x141) == '\0';
    *(bool *)(DAT_0091cf90 + 0x141) = bVar6;
    iVar3 = FUN_0045d380(3);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    FUN_00592410(iVar3);
    if (bVar6) {
      puVar4 = (undefined1 *)FUN_0056bc10(0x70e01038);
    }
    else {
      puVar4 = (undefined1 *)FUN_0056bc10(0x417b25e4);
    }
    goto LAB_00556d7e;
  case 5:
    goto switchD_0055695c_caseD_5;
  case 6:
    if (param_2 == 0) {
      iVar3 = *(int *)(param_1 + 0x114) + -1;
      *(int *)(param_1 + 0x114) = iVar3;
      if (iVar3 < 1) {
        *(undefined4 *)(param_1 + 0x114) = 8;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x114) + 1;
      *(int *)(param_1 + 0x114) = iVar3;
      if (8 < iVar3) {
        *(undefined4 *)(param_1 + 0x114) = 1;
      }
    }
    iVar3 = FUN_0045d380(5);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    iVar3 = FUN_00592410(iVar3);
    FUN_00515e20(&local_20,0x20,&DAT_0089d764,*(undefined4 *)(param_1 + 0x114));
    if (*(int *)(iVar3 + 0xc) == 0) goto LAB_00556c33;
    puVar4 = &local_20;
    iVar3 = *(int *)(iVar3 + 0xc) + 8;
    goto LAB_00556d87;
  case 7:
    *(bool *)(param_1 + 0x11c) = *(char *)(param_1 + 0x11c) == '\0';
    iVar3 = FUN_0045d380(6);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    FUN_00592410(iVar3);
    if (*(char *)(param_1 + 0x11c) == '\0') {
LAB_00556d72:
      uVar1 = 0x70dfe5c2;
    }
    else {
      uVar1 = 0x417b2604;
    }
    break;
  case 8:
    *(bool *)(param_1 + 0x11d) = *(char *)(param_1 + 0x11d) == '\0';
    iVar3 = FUN_0045d380(7);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    FUN_00592410(iVar3);
    if (*(char *)(param_1 + 0x11d) == '\0') goto LAB_00556d72;
    uVar1 = 0x417b2604;
    break;
  case 9:
    *(bool *)(param_1 + 0x11e) = *(char *)(param_1 + 0x11e) == '\0';
    iVar3 = FUN_0045d380(8);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    FUN_00592410(iVar3);
    if (*(char *)(param_1 + 0x11e) == '\0') goto LAB_00556d72;
    uVar1 = 0x417b2604;
    break;
  default:
    goto switchD_0055695c_default;
  }
  puVar4 = (undefined1 *)FUN_0056bc10(uVar1);
LAB_00556d7e:
  iVar3 = FUN_0051dd80(puVar4);
LAB_00556d87:
  FUN_00460c70(iVar3,puVar4);
switchD_0055695c_caseD_5:
switchD_0055695c_default:
  FUN_005926b0(1);
  return;
}

