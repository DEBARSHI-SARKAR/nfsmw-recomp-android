/* speed.exe 005fe3e0 FUN_005fe3e0; analysis pseudocode, not buildable source.
 * calls 005ede20 FUN_005ede20
 * calls 00454810 FUN_00454810
 * calls 00624700 FUN_00624700
 * calls 007652f0 FUN_007652f0
 * calls 005fbd20 FUN_005fbd20
 * calls 005fba70 FUN_005fba70
 * calls 00627400 FUN_00627400
 * calls 004d0d70 FUN_004d0d70
 * calls 00620920 FUN_00620920
 * calls 006269b0 FUN_006269b0
 * calls 005d59f0 FUN_005d59f0
 * calls 00460d20 FUN_00460d20
 * calls 0073c970 FUN_0073c970
 */

void __fastcall FUN_005fe3e0(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008760be;
  pvStack_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x1968) != 0) {
    ExceptionList = &pvStack_c;
    uVar3 = FUN_005fba70("16.2.1");
    iVar4 = FUN_00460d20(uVar3);
    if (iVar4 == 0) {
      bVar1 = true;
    }
  }
  if (*(int *)(param_1 + 0x1968) != 0) {
    piVar5 = (int *)FUN_00454810(0x64273c71,0);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)FUN_006269b0(4);
    }
    if (*piVar5 != 0) goto LAB_005fe463;
  }
  FUN_004d0d70();
LAB_005fe463:
  *(undefined4 *)(param_1 + 0x1960) = 0;
  *(undefined4 *)(param_1 + 0x1964) = 2;
  *(undefined4 *)(param_1 + 0x1968) = 0;
  *(undefined1 *)(param_1 + 0x195c) = 0;
  FUN_007652f0();
  if ((DAT_0092d854 != 0) && (piVar5 = (int *)*DAT_0092d84c, piVar5 != (int *)0x0)) {
    while( true ) {
      cVar2 = (**(code **)(*piVar5 + 0x40))();
      if (cVar2 != '\0') {
        (**(code **)(*piVar5 + 0x50))();
      }
      iVar4 = (**(code **)(*piVar5 + 4))();
      if ((iVar4 != 0) && (piVar6 = (int *)FUN_005d59f0(&LAB_004040e0), piVar6 != (int *)0x0)) {
        iVar4 = *piVar6;
        uVar3 = (**(code **)(iVar4 + 0x74))();
        (**(code **)(iVar4 + 0x70))(uVar3);
        piVar6 = (int *)FUN_005d59f0(&LAB_00403700);
        if ((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0xa0))(), iVar4 == 0)) {
          (**(code **)(*DAT_0092c67c + 0x2c))(1);
        }
      }
      if (piVar5 == (int *)0xfffffff8) {
        piVar5 = (int *)0x0;
      }
      piVar6 = DAT_0092d84c + DAT_0092d854;
      piVar7 = DAT_0092d84c;
      if (DAT_0092d84c == piVar6) break;
      do {
        if ((int *)*piVar7 == piVar5) break;
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar6);
      if (((piVar7 == piVar6) || (piVar7 + 1 == piVar6)) ||
         (piVar5 = (int *)piVar7[1], piVar5 == (int *)0x0)) break;
    }
  }
  if ((!bVar1) && (*(int *)(DAT_0091e00c + 0x2d4) == 0)) {
    iVar4 = FUN_00627400(8);
    uStack_4 = 0;
    if (iVar4 != 0) {
      FUN_00624700();
    }
    uStack_4 = 0xffffffff;
  }
  iVar4 = FUN_00627400(8);
  uStack_4 = 1;
  if (iVar4 != 0) {
    FUN_00620920();
  }
  uStack_4 = 0xffffffff;
  if ((*(int *)(param_1 + 0x1968) == 0) || (cVar2 = FUN_005fbd20(), cVar2 == '\0')) {
    FUN_0073c970(0);
  }
  FUN_005ede20();
  DAT_0090d5ec = 0;
  ExceptionList = pvStack_c;
  return;
}

