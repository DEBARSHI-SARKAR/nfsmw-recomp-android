/* speed.exe 00479900 FUN_00479900; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 004024e0 FUN_004024e0
 * calls 004d5ce0 FUN_004d5ce0
 * calls 00469e30 FUN_00469e30
 * calls 00469b90 FUN_00469b90
 * calls 004519d0 FUN_004519d0
 * calls 00453760 FUN_00453760
 * calls 0065faf0 FUN_0065faf0
 * calls 00460bf0 FUN_00460bf0
 * calls 00654af0 FUN_00654af0
 * calls 004023c0 FUN_004023c0
 * calls 00469cd0 FUN_00469cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00479900(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  
  if (0 < DAT_008ee348) goto LAB_00479c32;
  if (*(float *)(param_1 + 0x2b8) < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    uVar8 = FUN_004522f0();
    uVar3 = FUN_004519d0();
    *(char **)(param_1 + 0x1c) = "CDActionDrive";
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined1 *)(param_1 + 700) = 1;
  }
  if (*(float *)(param_1 + 0x2b4) < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    uVar8 = FUN_004522f0();
    uVar3 = FUN_004519d0();
    *(char **)(param_1 + 0x1c) = "CDActionDrive";
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    *(undefined1 *)(param_1 + 700) = 1;
  }
  if ((_DAT_00890968 < *(float *)(param_1 + 0x2b4)) && (*(float *)(param_1 + 0x2b4) < _DAT_00890d3c)
     ) {
    uVar8 = FUN_004522f0();
    uVar3 = FUN_004519d0();
    *(char **)(param_1 + 0x1c) = "CDActionTrackCop";
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  if (((((DAT_00911055 == '\0') && (iVar4 = *(int *)(param_1 + 8), iVar4 * 0x70 != -0x9195e0)) &&
       (puVar7 = (undefined4 *)(&DAT_00919624)[iVar4 * 0x1c], puVar7 != &DAT_00919624 + iVar4 * 0x1c
       )) && (((puVar7 != (undefined4 *)0x0 && (puVar7 + -1 != (int *)0x0)) &&
              ((puVar7[2] == 1 &&
               ((iVar4 = (**(code **)(puVar7[-1] + 0x10))(), iVar4 != 0 &&
                (cVar1 = FUN_00469e30(), cVar1 != '\0')))))))) &&
     (((_DAT_00894b64 < *(float *)(iVar4 + 0x10) ||
       ((_DAT_0089481c < *(float *)(iVar4 + 0x10) && (*(char *)(iVar4 + 0xc0) != '\0')))) &&
      (*(char *)(iVar4 + 0xc3) != '\0')))) {
    FUN_00453760();
    FUN_004024e0();
    *(undefined4 *)(param_1 + 0x2b8) = 0x40000000;
    FUN_004023c0();
    iVar4 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                         DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0);
    *(undefined4 *)(iVar4 + 4) = uStack_5c;
    FUN_0065faf0();
  }
  piVar6 = DAT_009885c8;
  if (((DAT_009885c8 == (int *)0x0) ||
      (cVar1 = (**(code **)(*DAT_009885c8 + 0x3c))(), cVar1 == '\0')) ||
     (piVar5 = (int *)(**(code **)(*piVar6 + 0x48))(), piVar5 == (int *)0x0)) {
LAB_00479b7c:
    iVar4 = FUN_00460bf0();
    if (DAT_008ee380 == iVar4) {
      if (*(int *)(param_1 + 0x20) != 0) {
        uVar8 = FUN_004522f0();
        FUN_004519d0();
        piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
        if ((*piVar6 == (int)uVar8) && (piVar6[1] == (int)((ulonglong)uVar8 >> 0x20))) {
          DAT_008ee398 = 0;
          puVar7 = (undefined4 *)FUN_00453760();
          *(undefined4 *)(param_1 + 0x1c) = puVar7[3];
          *(undefined4 *)(param_1 + 0x10) = *puVar7;
          *(undefined4 *)(param_1 + 0x14) = puVar7[1];
          *(undefined4 *)(param_1 + 0x18) = puVar7[2];
          if (DAT_009885c8 != (int *)0x0) {
            (**(code **)(*DAT_009885c8 + 0x58))();
          }
          FUN_00469cd0();
          FUN_00654af0();
        }
      }
      goto LAB_00479c32;
    }
  }
  else {
    cVar1 = (**(code **)(*piVar5 + 8))();
    uVar2 = (**(code **)(*piVar6 + 100))();
    *(undefined1 *)(param_1 + 700) = uVar2;
    if (cVar1 == '\0') goto LAB_00479b7c;
  }
  uVar8 = FUN_004522f0();
  uVar3 = FUN_004519d0();
  *(char **)(param_1 + 0x1c) = "CDActionIce";
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
LAB_00479c32:
  if (((*(int **)(param_1 + 0x20) != (int *)0x0) &&
      ((**(code **)(**(int **)(param_1 + 0x20) + 0x10))(), pcStack_4c != (char *)0x0)) &&
     (*pcStack_4c != '\0')) {
    *(char **)(param_1 + 0x1c) = pcStack_4c;
    *(undefined4 *)(param_1 + 0x10) = local_58;
    *(undefined4 *)(param_1 + 0x14) = uStack_54;
    *(undefined4 *)(param_1 + 0x18) = uStack_50;
  }
  if (((((*(int **)(param_1 + 0x20) == (int *)0x0) ||
        (piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0xc))(),
        *piVar6 != *(int *)(param_1 + 0x10))) || (piVar6[1] != *(int *)(param_1 + 0x14))) &&
      ((*(char **)(param_1 + 0x1c) != (char *)0x0 && (**(char **)(param_1 + 0x1c) != '\0')))) &&
     (piVar6 = DAT_009111fc, DAT_009111fc != (int *)0x0)) {
    while (*piVar6 != *(int *)(param_1 + 0x18)) {
      piVar5 = piVar6 + 2;
      piVar6 = (int *)*piVar5;
      if ((int *)*piVar5 == (int *)0x0) {
        return;
      }
    }
    iVar4 = (*(code *)piVar6[1])();
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 700) = 0;
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x20))();
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      *(int *)(param_1 + 0x20) = iVar4;
      FUN_004d5ce0();
    }
  }
  return;
}

