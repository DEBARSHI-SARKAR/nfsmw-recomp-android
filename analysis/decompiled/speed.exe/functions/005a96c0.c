/* speed.exe 005a96c0 FUN_005a96c0; analysis pseudocode, not buildable source.
 * calls 00588c90 FUN_00588c90
 * calls 005a5a90 FUN_005a5a90
 * calls 005a8db0 FUN_005a8db0
 * calls 0050e6c0 FUN_0050e6c0
 * calls 005a58c0 FUN_005a58c0
 * calls 00588d20 FUN_00588d20
 * calls 00586550 FUN_00586550
 * calls 0059bfb0 FUN_0059bfb0
 * calls 005865e0 FUN_005865e0
 * calls 00460ca0 FUN_00460ca0
 * calls 005a8f60 FUN_005a8f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a96c0(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_2 < 0x92b703b6) {
    if (param_2 == 0x92b703b5) {
      FUN_00588d20();
      return;
    }
    if (param_2 < 0x81017865) {
      if (param_2 == 0x81017864) {
        if ((float)(DAT_00925b14 - DAT_0091d4a8) * _DAT_00890984 < _DAT_008f42c0) {
          return;
        }
        iVar1 = param_1[0xd];
        FUN_0050e6c0(&DAT_00890978);
        FUN_005865e0(*(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10),*(undefined4 *)(iVar1 + 0x188),
                     iVar1 + 0x4c,iVar1 + 0xe8,*(undefined4 *)(iVar1 + 0x184));
        *(undefined1 *)(param_1 + 0x48) = 0;
        return;
      }
      if (param_2 != 0xc407210) {
        if (param_2 == 0x35f8620b) {
          iVar1 = param_1[0xd];
          if (iVar1 == 0) {
            return;
          }
          if (*(char *)(iVar1 + 0x28) == '\0') {
            return;
          }
          FUN_0059bfb0(iVar1);
          return;
        }
        if (param_2 != 0x72619778) {
          return;
        }
        if ((char)param_1[0x48] == '\0') {
          return;
        }
        uVar4 = 0xffffffff;
LAB_005a97d5:
        if ((char)param_1[0x47] == '\0') {
          FUN_005a58c0(uVar4);
          return;
        }
        FUN_005a5a90(uVar4);
        return;
      }
    }
    else if (param_2 != 0x911ab364) {
      if (param_2 == 0x911c0a4b) {
        if ((char)param_1[0x48] == '\0') {
          return;
        }
        uVar4 = 1;
        goto LAB_005a97d5;
      }
      if (param_2 != 0x9120409e) {
        return;
      }
      goto LAB_005a9846;
    }
    param_1[0x11] = param_3;
    param_1[0x44] = param_2;
    param_1[0x45] = param_4;
    param_1[0x46] = param_5;
  }
  else {
    if (0xc98356ba < param_2) {
      if (param_2 != 0xc9d30688) {
        if (param_2 != 0xda5b8712) {
          return;
        }
        DAT_0091d4a8 = DAT_00925b14;
        piVar2 = (int *)param_1[0xd];
        uVar4 = FUN_00586550();
        FUN_00460ca0(piVar2 + 0x13,uVar4,0x9b);
        piVar3 = (int *)param_1[0xd];
        if ((piVar3 != (int *)0x0) && ((char)piVar3[10] != '\0')) {
          (**(code **)(*piVar3 + 4))(param_1[4],0xda5b8712);
        }
        (**(code **)(*piVar2 + 0xc))();
      }
      *(undefined1 *)(param_1 + 0x48) = 1;
      return;
    }
    if (param_2 == 0xc98356ba) {
      FUN_005a8f60();
      return;
    }
    if (param_2 == 0x9803f6e2) {
      FUN_005a8db0();
      return;
    }
    if (param_2 == 0xaf0bbd92) {
      FUN_00588c90();
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if (param_2 != 0xb5971bf1) {
      return;
    }
  }
LAB_005a9846:
  if ((((char)param_1[0x48] != '\0') && (piVar2 = (int *)param_1[0xd], piVar2 != (int *)0x0)) &&
     ((char)piVar2[10] != '\0')) {
    (**(code **)(*piVar2 + 4))(param_1[4],param_2);
    return;
  }
  return;
}

