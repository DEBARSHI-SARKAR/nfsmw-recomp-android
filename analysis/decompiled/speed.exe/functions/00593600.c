/* speed.exe 00593600 FUN_00593600; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0054e760 FUN_0054e760
 * calls 00516c90 FUN_00516c90
 * calls 0045d380 FUN_0045d380
 * calls 00593480 FUN_00593480
 * calls 00516c50 FUN_00516c50
 * calls 00515960 FUN_00515960
 * calls 00589900 FUN_00589900
 * calls 005b1df0 FUN_005b1df0
 * calls 00589870 FUN_00589870
 * calls 00593250 FUN_00593250
 * calls 00515990 FUN_00515990
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00593600(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  float local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_00515960(local_4,local_8);
  iVar5 = 0;
  iVar2 = FUN_0045d3a0(0);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_0045d3a0(0);
      if ((iVar5 < iVar2) && (iVar2 = FUN_0045d380(iVar5), iVar2 != 0)) {
        iVar2 = iVar2 + -4;
      }
      else {
        iVar2 = 0;
      }
      iVar4 = param_1[7];
      iVar3 = FUN_0045d3a0(0);
      if ((((iVar4 + iVar5 < iVar3) && (iVar4 = FUN_0045d380(iVar4 + iVar5), iVar4 != 0)) &&
          (iVar4 = iVar4 + -4, iVar4 != 0)) &&
         ((iVar2 = FUN_005b1df0(*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0 &&
          ((*(byte *)(iVar2 + 0xc) & 1) != 0)))) {
        if ((char)param_1[0x2c] == '\0') {
          if (param_1[6] != iVar4) {
            FUN_00593250(iVar4,param_1[7]);
          }
          iVar2 = param_1[0x2b];
          if (iVar2 != 0) {
            bVar6 = DAT_00987f71 == '\0';
LAB_005936ef:
            if (!bVar6) {
              FUN_00516c50(iVar2,param_1[0xb],0xff);
            }
          }
        }
        else if (DAT_00987f71 != '\0') {
          if (param_1[6] == iVar4) {
            iVar2 = param_1[0x2b];
            bVar6 = iVar2 == 0;
            goto LAB_005936ef;
          }
          FUN_00593250(iVar4,param_1[7]);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_0045d3a0(0);
    } while (iVar5 < iVar2);
  }
  if (param_1[0x24] != 0) {
    FUN_00515960(&local_c,&local_10);
    cVar1 = FUN_0054e760(local_c,local_10,param_1[0x24]);
    if (cVar1 != '\0') {
      FUN_00515990(&local_14);
      if (local_14 <= _DAT_00890968) {
        if (_DAT_00890968 <= local_14) goto LAB_005937b7;
        FUN_00593480(1);
        iVar2 = param_1[0xb];
        uVar8 = 0x148cd7;
      }
      else {
        FUN_00593480(0xffffffff);
        iVar2 = param_1[0xb];
        uVar8 = 0x704;
      }
      FUN_00516c90(uVar8,iVar2,0);
    }
  }
LAB_005937b7:
  FUN_00589900();
  iVar2 = param_1[0x23];
  if (iVar2 != 0x2711) {
    if (iVar2 == 10000) {
      iVar2 = param_1[9];
    }
    else if (iVar2 == -10000) {
      iVar2 = -param_1[9];
    }
    bVar7 = -1 < iVar2;
    bVar6 = false;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      bVar6 = iVar2 < 0;
    }
    if (iVar2 != 0 && !bVar6) {
      do {
        FUN_00593480((uint)bVar7 * 2 + -1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_10 = param_1[9];
  iVar2 = param_1[8];
  iVar5 = FUN_0045d3a0(0);
  local_c = param_1[8];
  iVar4 = param_1[7] / local_c;
  if (param_1[6] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[6] + 4;
  }
  iVar3 = FUN_0045d3a0(iVar3);
  FUN_00589870(local_10,(iVar5 + -1) / iVar2 + 1,iVar4 + 1,(iVar3 + -1) / local_c + 1);
  (**(code **)(*param_1 + 8))();
  return;
}

