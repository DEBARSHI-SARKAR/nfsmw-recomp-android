/* speed.exe 00731870 FUN_00731870; analysis pseudocode, not buildable source.
 * calls 00730460 FUN_00730460
 * calls 0072ca00 FUN_0072ca00
 * calls 0072df20 FUN_0072df20
 * calls 004624a0 FUN_004624a0
 * calls 00723e40 FUN_00723e40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00731870(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar5 = param_3;
  iVar7 = *(int *)(*(int *)(param_3 + 0x80) + 4);
  if ((iVar7 == 0xf) || (iVar7 == 0x10)) {
    param_3 = FUN_0072ca00(*(int *)(&DAT_00919620 + (iVar7 + -0xe) * 0x70) + 0x40);
  }
  else {
    param_3 = FUN_0072ca00(*(int *)(*(int *)(param_3 + 0x80) + 0x40) + 0x40);
  }
  iVar7 = 0;
  if (param_3 == 0) {
    puVar8 = DAT_009aa478;
    if ((undefined4 **)DAT_009aa478 != &DAT_009aa478) {
      do {
        if (((int)puVar8[3] % 100 < 10) && (iVar7 < param_2)) {
          *(short *)(param_1 + iVar7 * 2) = (short)puVar8[3];
          iVar7 = iVar7 + 1;
        }
        puVar8 = (undefined4 *)*puVar8;
      } while ((undefined4 **)puVar8 != &DAT_009aa478);
    }
  }
  else {
    iVar4 = 0xa28;
    do {
      sVar3 = (short)iVar4;
      if (((*(int *)(&DAT_009a3bb0 + iVar4 * 4) != 0) &&
          (*(int *)(*(int *)(&DAT_009a3bb0 + iVar4 * 4) + 4) != 0)) && (iVar7 < param_2)) {
        *(short *)(param_1 + iVar7 * 2) = sVar3;
        iVar7 = iVar7 + 1;
      }
      iVar1 = *(int *)(iVar4 * 4 + 0x9a3bb4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) && (iVar7 < param_2)) {
        *(short *)(param_1 + iVar7 * 2) = sVar3 + 1;
        iVar7 = iVar7 + 1;
      }
      iVar1 = *(int *)(iVar4 * 4 + 0x9a3bb8);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) && (iVar7 < param_2)) {
        *(short *)(param_1 + iVar7 * 2) = sVar3 + 2;
        iVar7 = iVar7 + 1;
      }
      iVar1 = *(int *)(iVar4 * 4 + 0x9a3bbc);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) && (iVar7 < param_2)) {
        *(short *)(param_1 + iVar7 * 2) = sVar3 + 3;
        iVar7 = iVar7 + 1;
      }
      iVar1 = *(int *)(iVar4 * 4 + 0x9a3bc0);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) && (iVar7 < param_2)) {
        *(short *)(param_1 + iVar7 * 2) = sVar3 + 4;
        iVar7 = iVar7 + 1;
      }
      iVar4 = iVar4 + 5;
    } while (iVar4 < 0xa8c);
    iVar4 = 0;
    if (0 < *(short *)(param_3 + 0x10)) {
      psVar6 = (short *)(param_3 + 0x12);
      do {
        sVar3 = *psVar6;
        if (((-1 < sVar3) && (*(int *)(&DAT_009a3bb0 + sVar3 * 4) != 0)) &&
           ((*(int *)(*(int *)(&DAT_009a3bb0 + sVar3 * 4) + 4) != 0 && (iVar7 < param_2)))) {
          *(short *)(param_1 + iVar7 * 2) = sVar3;
          iVar7 = iVar7 + 1;
        }
        iVar4 = iVar4 + 1;
        psVar6 = psVar6 + 1;
      } while (iVar4 < *(short *)(param_3 + 0x10));
    }
  }
  if (*(int *)(*(int *)(iVar5 + 0x80) + 4) == 1) {
    iVar5 = -1;
    if (param_3 != 0) {
      iVar5 = (int)*(short *)(param_3 + 0xc);
    }
    if (iVar5 != DAT_0090214c) {
      if (DAT_009a3a48 == 0) {
        DAT_0090214c = iVar5;
        return iVar7;
      }
      DAT_0090214c = iVar5;
      if (param_3 != 0) {
        FUN_004624a0("Seeulator",1,&DAT_0090214c,4);
      }
    }
    if (DAT_009a3a48 != 0) {
      if ((DAT_009a3a4c != 0) &&
         ((((char)(DAT_008f82f4 / 5) + (char)(DAT_008f82f4 >> 0x1f)) -
           (char)((longlong)DAT_008f82f4 * 0x66666667 >> 0x3f) & 1U) != 0)) {
        iVar7 = FUN_00723e40(param_1,iVar7,param_2,DAT_009a3a4c);
      }
      if ((DAT_009a3a48 != 0) && (DAT_009a3a54 != 0)) {
        DAT_009aac80 = 1;
        _DAT_009aaab4 = 0xffffffff;
        _DAT_009aab18 = 0xffffffff;
        if ((DAT_009aac81 == '\0') &&
           ((DAT_009ab208 != 0 && (cVar2 = FUN_0072df20(&param_1), cVar2 != '\0')))) {
          FUN_00730460(&param_1);
        }
        DAT_009a3a54 = 0;
      }
    }
  }
  return iVar7;
}

