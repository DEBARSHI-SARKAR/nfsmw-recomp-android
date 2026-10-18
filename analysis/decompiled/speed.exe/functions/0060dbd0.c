/* speed.exe 0060dbd0 FUN_0060dbd0; analysis pseudocode, not buildable source.
 * calls 004c2340 FUN_004c2340
 * calls 00659660 FUN_00659660
 * calls 0041ace0 FUN_0041ace0
 * calls 005fabb0 FUN_005fabb0
 * calls 005faa20 FUN_005faa20
 * calls 00627400 FUN_00627400
 * calls 005d51f0 FUN_005d51f0
 * calls 00621e80 FUN_00621e80
 * calls 00454810 FUN_00454810
 * calls 00460d20 FUN_00460d20
 * calls 005eed90 FUN_005eed90
 * calls 005fba70 FUN_005fba70
 * calls 00602010 FUN_00602010
 * calls 005fef30 FUN_005fef30
 * calls 005ffcc0 FUN_005ffcc0
 * calls 004549b0 FUN_004549b0
 * calls 005dbed0 FUN_005dbed0
 * calls 005d59f0 FUN_005d59f0
 * calls 006269b0 FUN_006269b0
 * calls 005dbef0 FUN_005dbef0
 * calls 00569bb0 FUN_00569bb0
 * calls 005fcba0 FUN_005fcba0
 * calls 005fe330 FUN_005fe330
 * calls 00624920 FUN_00624920
 */

void FUN_0060dbd0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087666e;
  pvStack_c = ExceptionList;
  DAT_0091cf28 = 0;
  ExceptionList = &pvStack_c;
  FUN_00602010();
  FUN_005eed90();
  FUN_004c2340(0,"Game_StartRace");
  FUN_0041ace0();
  uVar2 = FUN_005fabb0();
  piVar3 = (int *)FUN_00454810(0x5e161bba,0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_006269b0(4);
  }
  if (0 < *piVar3) {
    puVar4 = (undefined4 *)FUN_00454810(0x5e161bba,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_006269b0(4);
    }
    uVar2 = *puVar4;
  }
  if (((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
     (iVar5 = FUN_005faa20(), iVar5 != 2)) {
    *(undefined4 *)(DAT_0091e000 + 0x454c) = uVar2;
  }
  else {
    *(undefined4 *)(DAT_0091e000 + 0x454c) = 0;
  }
  pcVar6 = (char *)FUN_005fcba0();
  iVar5 = DAT_0091e000;
  if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
    *(undefined4 *)(DAT_0091e000 + 0x4550) = 0;
  }
  else {
    uVar2 = FUN_004549b0(pcVar6);
    *(undefined4 *)(iVar5 + 0x4550) = uVar2;
  }
  uVar2 = FUN_005fba70();
  iVar5 = FUN_00460d20("e3demo",uVar2);
  if (iVar5 == 0) {
    FUN_00659660();
  }
  FUN_005fe330();
  iVar5 = FUN_00627400(8);
  local_4 = 0;
  if (iVar5 != 0) {
    FUN_00624920();
  }
  local_4 = 0xffffffff;
  FUN_005fef30();
  FUN_005ffcc0();
  iVar8 = 0;
  iVar5 = FUN_005dbef0();
  if (0 < iVar5) {
    do {
      piVar3 = (int *)FUN_005dbed0(iVar8);
      if (((*piVar3 != 0) &&
          (iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar3), iVar5 != 0))
         && (*(int *)(iVar5 + 4) != 0)) {
        if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = FUN_005faa20();
        }
        piVar3 = (int *)FUN_005d59f0(&LAB_00403850);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(iVar5 == 2);
        }
        piVar3 = (int *)FUN_005d59f0(&LAB_004037e0);
        if (piVar3 != (int *)0x0) {
          piVar7 = (int *)FUN_00454810(0xe4211f4f,0);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)FUN_006269b0(4);
          }
          iVar5 = *piVar7;
          fStack_14 = (float)iVar5;
          fVar9 = (float10)(**(code **)(*piVar3 + 4))();
          if ((float10)iVar5 < fVar9) {
            fStack_14 = (float)fVar9;
          }
          (**(code **)(*piVar3 + 8))(fStack_14);
        }
      }
      iVar8 = iVar8 + 1;
      iVar5 = FUN_005dbef0();
    } while (iVar8 < iVar5);
  }
  cVar1 = FUN_00569bb0();
  if (cVar1 != '\0') {
    iVar5 = FUN_00627400(0xc);
    local_4 = 1;
    if (iVar5 != 0) {
      FUN_00621e80(0x161a918);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

