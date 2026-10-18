/* speed.exe 006f7230 FUN_006f7230; analysis pseudocode, not buildable source.
 * calls 0040e1e0 FUN_0040e1e0
 * calls 007303d0 FUN_007303d0
 * calls 006f71b0 FUN_006f71b0
 * calls 004b8d50 FUN_004b8d50
 * calls 0044a670 FUN_0044a670
 * calls 004b9080 FUN_004b9080
 * calls 0070e570 FUN_0070e570
 * calls 00717110 FUN_00717110
 * calls 006eb5f0 FUN_006eb5f0
 * calls 00450e70 FUN_00450e70
 * calls 0044cea0 FUN_0044cea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006f7230(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int *piStack_4;
  
  (**(code **)(*(int *)(param_1 + 0x48) + 0x18))();
  *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 1;
  cVar3 = FUN_0044cea0(*(undefined4 *)(param_1 + 0x394));
  if ((((cVar3 != '\0') && (cVar3 = FUN_007303d0(), cVar3 == '\0')) &&
      (*(char *)(param_1 + 0x404) == '\0')) && (*(int *)(param_1 + 0x39c) == 0)) {
    uVar5 = FUN_00450e70(*(undefined4 *)(param_1 + 0x394),*(undefined4 *)(param_1 + 0x3a4),
                         *(undefined4 *)(param_1 + 0x2fc),0);
    *(undefined4 *)(param_1 + 0x3a0) = uVar5;
    piVar6 = (int *)FUN_0044a670(uVar5);
    *(int **)(param_1 + 0x39c) = piVar6;
    (**(code **)(*piVar6 + 0x14))();
  }
  cVar3 = FUN_004b8d50();
  cVar4 = FUN_0044cea0(*(undefined4 *)(param_1 + 0x394));
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = FUN_006f71b0();
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x39c) == 0) {
    return;
  }
  if (cVar3 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2fc);
  if ((((iVar1 == 1) && (DAT_008ee348 < 1)) &&
      ((float)DAT_00925b14 * _DAT_00890984 - _DAT_00890d3c <= *(float *)(param_1 + 0x408))) ||
     (*(undefined4 *)(param_1 + 0x2f4) = 3, iVar1 == 4)) goto LAB_006f73ae;
  if (*(char *)(param_1 + 0x3e6) == '\0') {
    if ((*(char *)(param_1 + 0x3e5) == '\0') && (iVar1 != 0)) {
      if (iVar1 != 1) goto LAB_006f73ae;
      pcVar7 = "NIS Play Arrest";
      uVar5 = 10;
    }
    else if (*(char *)(param_1 + 999) == '\0') {
      if (*(char *)(param_1 + 0x3e5) == '\0') {
        pcVar7 = "NIS Play Intro";
        goto LAB_006f73a2;
      }
      pcVar7 = "NIS Play Story";
      uVar5 = 6;
    }
    else {
      pcVar7 = "NIS Play BLK";
      uVar5 = 9;
    }
  }
  else {
    pcVar7 = "NIS Load DDay";
LAB_006f73a2:
    uVar5 = 7;
  }
  FUN_004b9080(1,uVar5,pcVar7);
LAB_006f73ae:
  if ((*(int *)(param_1 + 0x2fc) == 1) && (FUN_0070e570(), DAT_00993cc8 != 0)) {
    FUN_00717110();
  }
  if (*(int *)(param_1 + 0x2fc) == 0) {
    piVar6 = *(int **)(param_1 + 0x3b0);
    piVar2 = (int *)*piVar6;
    while (piVar2 != piVar6) {
      piVar6 = (int *)piVar2[4];
      if (((piVar6 != (int *)0x0) && (*piVar6 != 0)) &&
         (cVar3 = FUN_0040e1e0(&piStack_4), cVar3 != '\0')) {
        (**(code **)(*piStack_4 + 0x10))();
      }
      FUN_006eb5f0();
      piVar6 = *(int **)(param_1 + 0x3b0);
    }
  }
  return;
}

