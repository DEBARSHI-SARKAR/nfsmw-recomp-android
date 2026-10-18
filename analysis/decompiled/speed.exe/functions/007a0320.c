/* speed.exe 007a0320 FUN_007a0320; analysis pseudocode, not buildable source.
 * calls 0079f900 FUN_0079f900
 * calls 007a0060 FUN_007a0060
 * calls 0078c240 FUN_0078c240
 * calls 0079f090 FUN_0079f090
 * calls 00794f80 FUN_00794f80
 * calls 00840aa0 FUN_00840aa0
 * calls 0045ce40 FUN_0045ce40
 * calls 0078c380 FUN_0078c380
 * calls 007412d0 FUN_007412d0
 * calls 0078ef80 FUN_0078ef80
 * calls 00735960 FUN_00735960
 * calls 0079fcb0 FUN_0079fcb0
 * calls 007359f0 FUN_007359f0
 * calls 007924d0 FUN_007924d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a0320(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  switch(DAT_009b4220) {
  case 1:
    iVar2 = 1;
    FUN_0079f090();
    iVar3 = FUN_0078c240();
    if (1 < iVar3) {
      do {
        iVar3 = iVar2;
        FUN_0079f090(iVar2);
        iVar3 = FUN_0078c380(iVar3);
        if (*(int *)(iVar3 + 0x88) == 3) {
          puVar1 = (undefined4 *)FUN_0078ef80(iVar2);
          uVar4 = FUN_007924d0();
          *puVar1 = uVar4;
          FUN_0079f900(iVar2);
          FUN_0079fcb0(iVar2,DAT_00905dfc);
          puVar1 = &DAT_009b4250;
          do {
            if (((puVar1[1] != -1) && (puVar1 != (undefined4 *)0x0)) && (2 < (int)puVar1[4])) {
              FUN_0079fcb0(iVar2,*puVar1);
            }
            puVar1 = puVar1 + 7;
          } while ((int)puVar1 < 0x9b42a4);
        }
        iVar2 = iVar2 + 1;
        FUN_0079f090();
        iVar3 = FUN_0078c240();
      } while (iVar2 < iVar3);
    }
    FUN_007a0060(2);
    return;
  case 2:
    iVar3 = 0;
    if ((DAT_009b4254 != -1) && (2 < DAT_009b4260)) {
      iVar3 = 1;
    }
    if ((DAT_009b4270 != -1) && (2 < DAT_009b427c)) {
      iVar3 = iVar3 + 1;
    }
    if ((DAT_009b428c != -1) && (2 < DAT_009b4298)) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = FUN_0079f090();
    if (iVar3 == *(int *)(iVar2 + 0xc)) {
      if (iVar3 == 0) {
        DAT_009b4220 = 0;
        return;
      }
      FUN_007412d0();
      FUN_007a0060(3);
      return;
    }
    break;
  case 3:
  case 4:
    break;
  case 5:
    iVar3 = 0;
    if ((DAT_009b4254 != -1) && (DAT_009b4260 == 6)) {
      iVar3 = 1;
    }
    if ((DAT_009b4270 != -1) && (DAT_009b427c == 6)) {
      iVar3 = iVar3 + 1;
    }
    if ((DAT_009b428c != -1) && (DAT_009b4298 == 6)) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == DAT_009b4230) {
      _DAT_009b4b9c = DAT_00925b14;
      _DAT_009b40e0 = FUN_0045ce40();
      iVar3 = FUN_00794f80();
      iVar3 = FUN_00840aa0(*(undefined4 *)(iVar3 + 0x38),0x7374696d);
      iVar3 = iVar3 + 2;
      uVar7 = 0;
      uVar6 = 0x40000000;
      uVar4 = FUN_0045ce40(0x40000000,0,iVar3);
      FUN_00735960(uVar4,uVar6,uVar7,iVar3);
      FUN_007a0060(6);
      return;
    }
    break;
  case 6:
    uVar4 = FUN_0045ce40();
    fVar5 = (float10)FUN_007359f0(uVar4);
    if (fVar5 < (float10)_DAT_00890968 != (fVar5 == (float10)_DAT_00890968)) {
      FUN_007a0060(7);
    }
    break;
  default:
    goto switchD_007a0332_default;
  }
switchD_007a0332_default:
  return;
}

