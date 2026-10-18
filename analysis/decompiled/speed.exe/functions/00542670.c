/* speed.exe 00542670 FUN_00542670; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 004684d0 FUN_004684d0
 * calls 004b7b40 FUN_004b7b40
 * calls 0041eba0 FUN_0041eba0
 * calls 005fe090 FUN_005fe090
 * calls 0040e040 FUN_0040e040
 * calls 006e8df0 FUN_006e8df0
 * calls 00572070 FUN_00572070
 * calls 00525b20 FUN_00525b20
 * calls 00569bb0 FUN_00569bb0
 * calls 005e8b20 FUN_005e8b20
 * calls 00591d90 FUN_00591d90
 * calls 00516b50 FUN_00516b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00542670(int param_1,undefined4 param_2,char param_3)

{
  float10 fVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  float10 fVar8;
  char *pcVar9;
  int *piStack_4;
  
  if (DAT_00925e90 == 6) {
    pcVar9 = "InGamePhotoMaster.fng";
    if (DAT_0091d218 < 1) {
      iVar3 = FUN_005b5b70("InGamePhotoMaster.fng");
    }
    else {
      FUN_00572070();
      iVar3 = FUN_00591d90(pcVar9);
    }
    in_EAX = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 != 0);
    if (((iVar3 == 0) &&
        (((*(char *)(DAT_0091cb20 + 0x1e) == '\0' || (in_EAX = 0, param_3 != '\0')) &&
         (in_EAX = FUN_00569bb0(), (char)in_EAX == '\0')))) &&
       (in_EAX = FUN_00516b50("FadeScreenNoLoadingBar.fng"), (char)in_EAX == '\0')) {
      if (DAT_0091e000 != 0) {
        iVar3 = (**(code **)(**(int **)(DAT_0092d87c + param_1 * 4) + 4))();
        if (iVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_005e8b20(iVar3);
        }
        if (*(int *)(DAT_0091e000 + 0x1960) == 1) {
          cVar2 = FUN_004684d0();
          if (cVar2 != '\0') {
            fVar8 = (float10)FUN_005fe090();
            fVar1 = (float10)_DAT_00890968;
            uVar5 = CONCAT22(extraout_var,
                             (ushort)(fVar8 < fVar1) << 8 | (ushort)(NAN(fVar8) || NAN(fVar1)) << 10
                             | (ushort)(fVar8 == fVar1) << 0xe);
            if (fVar8 < fVar1 != (fVar8 == fVar1)) goto LAB_0054282e;
          }
          if (iVar4 != 0) {
            if (((((*(char *)(iVar4 + 0x1e) != '\0') || (*(char *)(iVar4 + 0x1d) != '\0')) ||
                 (*(char *)(iVar4 + 0x1c) != '\0')) || (*(char *)(iVar4 + 0x21) != '\0')) &&
               ((uVar5 = FUN_006e8df0(), uVar5 != 1 ||
                (((iVar3 = (**(code **)(**(int **)(DAT_0092d87c + (uint)(param_1 != 1) * 4) + 4))(),
                  iVar3 != 0 && (uVar5 = FUN_005e8b20(iVar3), uVar5 != 0)) &&
                 (((*(char *)(uVar5 + 0x1e) != '\0' ||
                   ((*(char *)(uVar5 + 0x1d) != '\0' || (*(char *)(uVar5 + 0x1c) != '\0')))) ||
                  (*(char *)(uVar5 + 0x21) != '\0')))))))) {
LAB_0054282e:
              return uVar5 & 0xffffff00;
            }
            if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
               ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
              piVar6 = (int *)FUN_0041eba0();
              piVar6 = (int *)(**(code **)(*piVar6 + 0x20))();
              iVar3 = (**(code **)(*piVar6 + 0x20))();
              if ((iVar3 != 0) &&
                 (((cVar2 = FUN_004b7b40(&piStack_4), cVar2 != '\0' &&
                   (uVar7 = (**(code **)(*piStack_4 + 8))(), (char)uVar7 != '\0')) &&
                  (uVar5 = CONCAT31((int3)((uint)uVar7 >> 8),DAT_0091ca58), DAT_0091ca58 == '\0'))))
              goto LAB_0054282e;
            }
          }
        }
        else if (((iVar3 != 0) && (cVar2 = FUN_0040e040(&piStack_4), cVar2 != '\0')) &&
                ((piVar6 = (int *)(**(code **)(*piStack_4 + 0xac))(), piVar6 != (int *)0x0 &&
                 ((piVar6 = (int *)(**(code **)(*piVar6 + 0xa0))(), piVar6 != (int *)0x0 &&
                  (uVar5 = (**(code **)(*piVar6 + 0x74))(), (char)uVar5 != '\0'))))))
        goto LAB_0054282e;
      }
      cVar2 = FUN_00525b20(param_2);
      return (uint)(cVar2 == '\0');
    }
  }
  return in_EAX & 0xffffff00;
}

