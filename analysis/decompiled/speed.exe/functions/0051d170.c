/* speed.exe 0051d170 FUN_0051d170; analysis pseudocode, not buildable source.
 * calls 0056e2d0 FUN_0056e2d0
 * calls 0056d480 FUN_0056d480
 * calls 006df8f0 FUN_006df8f0
 * calls 00510530 FUN_00510530
 * calls 0056d500 FUN_0056d500
 * calls 0045d380 FUN_0045d380
 * calls 0056d5e0 FUN_0056d5e0
 * calls 0045d3a0 FUN_0045d3a0
 */

void __fastcall FUN_0051d170(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  switch(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24)) {
  case 0:
    FUN_0056d5e0();
    break;
  case 1:
    FUN_006df8f0();
    DAT_00982c39 = 1;
    puVar5 = &DAT_009017b0;
    puVar7 = *(undefined4 **)(param_1 + 0x144);
    for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x148) = DAT_00982c00;
    break;
  case 3:
    uVar1 = *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38);
    FUN_0056d500();
    cVar2 = FUN_00510530();
    if (cVar2 == '\0') {
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = uVar1;
    }
    break;
  case 4:
    FUN_0056d480();
    break;
  case 9:
    FUN_0056e2d0();
    DAT_0091ca28 = *(undefined1 *)(DAT_0091cf90 + 0x176);
  }
  iVar6 = 0;
  iVar3 = FUN_0045d3a0(0);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_0045d380(iVar6);
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(iVar3 + -4);
      }
      (**(code **)(*piVar4 + 0xc))();
      iVar6 = iVar6 + 1;
      iVar3 = FUN_0045d3a0(0);
    } while (iVar6 < iVar3);
  }
  return;
}

