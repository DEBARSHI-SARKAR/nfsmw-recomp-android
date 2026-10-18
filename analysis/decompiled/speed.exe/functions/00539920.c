/* speed.exe 00539920 FUN_00539920; analysis pseudocode, not buildable source.
 * calls 005b7580 FUN_005b7580
 * calls 00525220 FUN_00525220
 * calls 0079ca30 FUN_0079ca30
 * calls 005b8550 FUN_005b8550
 * calls 007c4b80 FUN_007c4b80
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 0079bac0 FUN_0079bac0
 * calls 00790920 FUN_00790920
 * calls 0078bcc0 FUN_0078bcc0
 * calls 00516af0 FUN_00516af0
 * calls 00793850 FUN_00793850
 * calls 00573140 FUN_00573140
 * calls 0078c2a0 FUN_0078c2a0
 * calls 00591d90 FUN_00591d90
 * calls 0078bbe0 FUN_0078bbe0
 * calls 00592410 FUN_00592410
 * calls 005b5b70 FUN_005b5b70
 * calls 0045d380 FUN_0045d380
 * calls 00572070 FUN_00572070
 * calls 0079f090 FUN_0079f090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00539920(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  
  FUN_0079bac0();
  FUN_0079ca30();
  iVar3 = FUN_0078bbe0();
  iVar4 = FUN_0078bcc0();
  *(undefined1 *)(param_1 + 0x11a4) = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      iVar5 = FUN_0045d380(uVar9);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -4;
      }
      iVar5 = FUN_00592410(iVar5);
      pcVar10 = *(char **)(param_1 + 0x10);
      uVar1 = uVar9 + 1;
      uVar6 = FUN_00573140("READY %d",uVar1);
      if (pcVar10 == (char *)0x0) {
LAB_00539a19:
        iVar8 = 0;
      }
      else {
        pcVar7 = pcVar10;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (pcVar7 == pcVar10 + 1) goto LAB_00539a19;
        if (DAT_0091d218 < 1) {
          iVar8 = FUN_005b5b70(pcVar10);
          if (iVar8 == 0) {
            iVar8 = FUN_005b7580(pcVar10);
            if (iVar8 == 0) goto LAB_00539a19;
            goto LAB_00539a01;
          }
        }
        else {
          FUN_00572070();
          iVar8 = FUN_00591d90(pcVar10);
LAB_00539a01:
          if (iVar8 == 0) goto LAB_00539a19;
        }
        iVar8 = FUN_005b8550(uVar6);
        if (iVar8 == 0) goto LAB_00539a19;
      }
      if ((iVar5 == 0) || (*(char *)(iVar5 + 0x14) == '\0')) {
        if (iVar8 != 0) {
          uVar6 = 0x163c76;
          goto LAB_00539aa7;
        }
      }
      else if ((*(char *)(iVar5 + 0x29) == '\0') &&
              ((uVar9 == 0 || (iVar5 = FUN_00793850(uVar9), iVar5 == 3)))) {
        iVar5 = FUN_00790920(uVar9);
        if (((iVar3 == 0) && (iVar5 != 0)) && (0 < *(int *)(iVar5 + 0x18))) {
          if (iVar8 != 0) {
            uVar6 = 0xf4e45f25;
LAB_00539aa7:
            iVar5 = FUN_005b1360(uVar6);
            if (iVar5 != 0) {
              FUN_005b8400(iVar5,0);
              *(undefined4 *)(iVar5 + 0x10) = 0;
            }
          }
        }
        else if (iVar8 != 0) {
          uVar6 = 0x39da474;
          goto LAB_00539aa7;
        }
      }
      else {
        if ((iVar8 != 0) && (iVar5 = FUN_005b1360(0xf4e45f25), iVar5 != 0)) {
          FUN_005b8400(iVar5,0);
          *(undefined4 *)(iVar5 + 0x10) = 0;
        }
        *(undefined1 *)(param_1 + 0x11a4) = 1;
      }
      uVar9 = uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x48));
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x11a4) == '\0') {
    if (((iVar5 != 0) && (iVar5 = FUN_00516af0(iVar5), iVar5 != 0)) &&
       (iVar5 = FUN_005b8550(0x6a0831f6), iVar5 != 0)) {
      uVar6 = 0x16a259;
      goto LAB_00539b36;
    }
  }
  else if (((iVar5 != 0) && (iVar5 = FUN_00516af0(iVar5), iVar5 != 0)) &&
          (iVar5 = FUN_005b8550(0x6a0831f6), iVar5 != 0)) {
    uVar6 = 0x1ca7c0;
LAB_00539b36:
    iVar5 = FUN_005b1360(uVar6);
    if (iVar5 != 0) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
  }
  if ((float)(*(int *)(param_1 + 0x2c) - DAT_00925b14) * _DAT_00890984 <= _DAT_00890968) {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar5 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar5 != 0)) &&
        (iVar5 = FUN_005b8550(0x7792134), iVar5 != 0)) &&
       (iVar5 = FUN_005b1360(0x16a259), iVar5 != 0)) {
      FUN_005b8400(iVar5,0);
      *(undefined4 *)(iVar5 + 0x10) = 0;
    }
    if (iVar4 != 0) {
      if ((iVar3 == 0) && (*(char *)(param_1 + 0x11a5) == '\0')) {
        if (((*(int *)(param_1 + 0x10) != 0) &&
            ((iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0 &&
             (iVar3 = FUN_005b8550(0x7792134), iVar3 != 0)))) &&
           (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        uVar6 = 0x1a9afbfe;
LAB_00539c84:
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d6970c7,uVar6);
        return;
      }
      if (*(int *)(iVar4 + 0x24) < (int)(uint)*(byte *)(DAT_0091cf90 + 0x138)) {
        if ((((*(int *)(param_1 + 0x10) != 0) &&
             (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
            (iVar3 = FUN_005b8550(0x7792134), iVar3 != 0)) &&
           (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        uVar6 = 0x8c68dfb4;
        goto LAB_00539c84;
      }
      FUN_0079f090();
      iVar3 = FUN_0078c2a0();
      if (iVar3 + 1 != *(int *)(iVar4 + 0x24)) {
        if (((*(int *)(param_1 + 0x10) != 0) &&
            (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
           ((iVar3 = FUN_005b8550(0x7792134), iVar3 != 0 &&
            (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)))) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d6970c7,0x5fd01268);
        return;
      }
    }
    if ((-1 < DAT_008f32bc) && (DAT_008f32bc < 6)) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (((iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0 &&
           (iVar3 = FUN_005b8550(0x7792134), iVar3 != 0)) &&
          (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)))) {
        FUN_005b8400(iVar3,0);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d6970c7,0x6f816e4);
      return;
    }
    if (DAT_009b41c9 == '\0') {
      if (DAT_009b41c8 == '\0') {
        return;
      }
      if (((*(int *)(param_1 + 0x10) != 0) &&
          (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
         ((iVar3 = FUN_005b8550(0x7792134), iVar3 != 0 &&
          (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)))) {
        FUN_005b8400(iVar3,0);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d6970c7,0x3cd25d49);
      DAT_009b41c8 = '\0';
    }
    else {
      if (((*(int *)(param_1 + 0x10) != 0) &&
          (iVar3 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar3 != 0)) &&
         ((iVar3 = FUN_005b8550(0x7792134), iVar3 != 0 &&
          (iVar3 = FUN_005b1360(0x1ca7c0), iVar3 != 0)))) {
        FUN_005b8400(iVar3,0);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2d6970c7,0x148f8752);
      DAT_009b41c9 = '\0';
    }
    uVar6 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
  }
  return;
}

