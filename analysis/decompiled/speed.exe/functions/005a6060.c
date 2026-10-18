/* speed.exe 005a6060 FUN_005a6060; analysis pseudocode, not buildable source.
 * calls 00594090 FUN_00594090
 * calls 0045a430 FUN_0045a430
 * calls 00672f50 FUN_00672f50
 * calls 004e4ea0 FUN_004e4ea0
 * calls 005a5ea0 FUN_005a5ea0
 * calls 00678ad0 FUN_00678ad0
 * calls 00589f10 FUN_00589f10
 */

void __fastcall FUN_005a6060(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873778;
  local_c = ExceptionList;
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
    iVar3 = *(int *)(DAT_0091cf90 + 0x2c + *(int *)(DAT_0091cf90 + 0x18) * 0x18);
  }
  else {
    iVar3 = *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
  }
  piVar4 = (int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x414);
  iVar1 = 0;
  piVar5 = piVar4;
  do {
    if (*piVar5 == iVar3) {
      piVar5 = piVar4 + iVar1 * 5;
      goto LAB_005a60c7;
    }
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 5;
  } while (iVar1 < 200);
  piVar5 = (int *)0x0;
LAB_005a60c7:
  if (*(byte *)(piVar5 + 4) < 0x4c) {
    piVar2 = piVar4 + (uint)*(byte *)(piVar5 + 4) * 0x66 + 1000;
  }
  else {
    piVar2 = (int *)0x0;
  }
  ExceptionList = &local_c;
  *(int **)(param_1 + 300) = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar6 = piVar2;
    piVar7 = (int *)(param_1 + 0x130);
    for (iVar3 = 0x66; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    *(int *)(param_1 + 0x2c8) = piVar2[99];
  }
  FUN_00594090(piVar4,piVar5,0,0);
  FUN_00594090(piVar4,piVar5,1,0);
  FUN_00594090(piVar4,piVar5,2,0);
  FUN_00594090(piVar4,piVar5,3,0);
  FUN_00594090(piVar4,piVar5,4,0);
  FUN_00594090(piVar4,piVar5,5,0);
  FUN_004e4ea0(piVar5[2],0,0);
  local_4 = 0;
  FUN_00678ad0(local_20,5,1);
  iVar3 = FUN_00672f50(local_20);
  FUN_00594090(piVar4,piVar5,6,iVar3 == 1);
  FUN_00589f10();
  FUN_005a5ea0(1);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

