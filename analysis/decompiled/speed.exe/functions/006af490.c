/* speed.exe 006af490 FUN_006af490; analysis pseudocode, not buildable source.
 * calls 00691f90 FUN_00691f90
 * calls 00691b30 FUN_00691b30
 * calls 006a0aa0 FUN_006a0aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006af490(int param_1)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fStack_4;
  
  if ((((*(int *)(param_1 + 0x84) != 0) && (*(float *)(param_1 + 0x88) <= _DAT_00890968)) &&
      (cVar4 = (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(), cVar4 == '\0')) &&
     (*(float *)(param_1 + 0x10c) <= _DAT_00890968)) {
    iVar6 = *(int *)(param_1 + 0x84);
    if (iVar6 == 1) {
      *(undefined4 *)(param_1 + 0x84) = 2;
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x188)) {
    case 1:
      iVar5 = iVar6 + -1;
      if (2 < iVar5) {
        fVar3 = *(float *)(param_1 + 0xf4) * _DAT_008a9394;
        fVar7 = (float10)FUN_00691b30(iVar5,iVar6);
        fVar7 = fVar7 * (float10)fVar3;
        do {
          fStack_4 = (float)fVar7;
          iVar6 = FUN_00691f90(iVar5,fStack_4);
          if (iVar6 != 1) break;
          iVar5 = iVar5 + -1;
          fVar7 = (float10)FUN_00691b30(iVar5,*(undefined4 *)(param_1 + 0x84));
          fVar7 = fVar7 * (float10)fVar3;
        } while (2 < iVar5);
      }
      FUN_006a0aa0(iVar5,1);
      return;
    case 2:
    case 4:
    case 5:
      bVar1 = true;
      iVar6 = 0;
      do {
        cVar4 = (**(code **)(**(int **)(param_1 + 0x114) + 0x24))(iVar6);
        if ((cVar4 == '\0') ||
           (fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x114) + 0x30))(iVar6),
           (float10)_DAT_00890e98 <= fVar7)) {
          bVar2 = 0;
        }
        else {
          bVar2 = 1;
        }
        bVar1 = (bool)(bVar1 & bVar2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      if (bVar1) {
        FUN_006a0aa0(*(int *)(param_1 + 0x84) + 1,1);
      }
    case 3:
    }
  }
  return;
}

