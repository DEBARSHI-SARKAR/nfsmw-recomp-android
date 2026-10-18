/* speed.exe 00667010 FUN_00667010; analysis pseudocode, not buildable source.
 * calls 00516f30 FUN_00516f30
 * calls 007ec298 FUN_007ec298
 * calls 006c1410 FUN_006c1410
 * calls 0075bde0 FUN_0075bde0
 * calls 006626b0 FUN_006626b0
 * calls 0056b950 FUN_0056b950
 * calls 00465a50 FUN_00465a50
 * calls 006bf720 FUN_006bf720
 * calls 00664670 FUN_00664670
 * calls 00516b50 FUN_00516b50
 * calls 00463ca0 FUN_00463ca0
 * calls 006cbb60 FUN_006cbb60
 * calls 00627400 FUN_00627400
 * calls 0050af20 FUN_0050af20
 * calls 0065e930 FUN_0065e930
 * calls 006c0c70 FUN_006c0c70
 * calls 007ec59c FUN_007ec59c
 * calls 00658a00 FUN_00658a00
 * calls 006cb2a0 FUN_006cb2a0
 * calls 004d19f0 FUN_004d19f0
 * calls 00516e10 FUN_00516e10
 * calls 0062c9a0 FUN_0062c9a0
 * calls 00661c80 FUN_00661c80
 * calls 00461980 FUN_00461980
 * calls 0065d860 FUN_0065d860
 * calls 004655f0 FUN_004655f0
 * calls 007b4240 FUN_007b4240
 * calls 00663c90 FUN_00663c90
 * calls 00737980 FUN_00737980
 * calls 004af190 FUN_004af190
 * calls 005169b0 FUN_005169b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00667010(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a43f;
  pvStack_c = ExceptionList;
  DAT_00925e90 = 2;
  ExceptionList = &pvStack_c;
  FUN_004af190();
  FUN_006cb2a0();
  FUN_00516e10();
  FUN_00516f30();
  FUN_006bf720();
  FUN_007b4240();
  FUN_0075bde0();
  if (DAT_009aaa81 != '\0') {
    iVar3 = FUN_00627400(0xc);
    local_4 = 0;
    if (iVar3 != 0) {
      FUN_0062c9a0(1);
    }
    local_4 = 0xffffffff;
    while (DAT_009aaa81 != '\0') {
      FUN_00663c90();
    }
    cVar2 = FUN_00516b50("FadeScreen.fng");
    if (cVar2 != '\0') {
      FUN_005169b0("FadeScreen.fng");
    }
  }
  if ((DAT_0092590c != 0) || ((undefined4 **)DAT_00925b1c != &DAT_00925b1c)) {
    FUN_00661c80();
  }
  FUN_006c0c70();
  FUN_00737980();
  FUN_004d19f0();
  while (piVar4 = DAT_009259a8, DAT_009259a8 != &DAT_009259a4) {
    while (piVar4[3] != 2) {
      piVar1 = piVar4 + 1;
      piVar4 = (int *)*piVar1;
      if ((int *)*piVar1 == &DAT_009259a4) goto LAB_00667120;
    }
    iVar3 = piVar4[0xc];
    while (iVar3 == 0) {
      FUN_006626b0();
      iVar3 = piVar4[0xc];
    }
    iVar3 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    if (((piVar4[0xf] != 0) &&
        (FUN_00658a00(piVar4[0xf],piVar4[0x10],piVar4[7]), (char)piVar4[2] != '\0')) &&
       (piVar4[0xf] != 0)) {
      FUN_004655f0(piVar4[0xf]);
      piVar4[0xf] = 0;
    }
    FUN_00461980(piVar4[7]);
    FUN_00461980(piVar4[8]);
    FUN_00461980(piVar4[9]);
    FUN_00463ca0(DAT_00925878,piVar4);
  }
LAB_00667120:
  FUN_0056b950(1,0,0,0);
  FUN_0050af20();
  FUN_00465a50();
  FUN_00664670();
  while( true ) {
    if (DAT_00925928 != 0) {
      FUN_007ec59c();
      FUN_0065e930();
    }
    if (DAT_00925928 == 0) break;
    FUN_007ec298(8);
  }
  FUN_0065d860(0);
  if (DAT_00925e84 != '\0') {
    DAT_00925e84 = '\0';
  }
  DAT_00925e70 = &LAB_00666f90;
  _DAT_00925e78 = "LoadingRegion";
  _DAT_00925e74 = 0;
  cVar2 = FUN_006cbb60();
  if (cVar2 != '\0') {
    FUN_006c1410(0);
  }
  ExceptionList = pvStack_c;
  return;
}

