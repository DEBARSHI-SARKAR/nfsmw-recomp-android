/* speed.exe 00642c90 FUN_00642c90; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00642c90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  
  iVar1 = *(int *)(param_1 + 0x270);
  piVar2 = *(int **)(iVar1 + 4);
  piVar5 = (int *)*piVar2;
  if (piVar5 != piVar2) {
    do {
      iVar6 = piVar5[6];
      if (((iVar6 < 0) || (iVar4 = (**(code **)(*param_2 + 0x14))(), iVar4 <= iVar6)) ||
         (iVar6 = iVar6 * 0x10 + param_2[6], iVar6 == 0)) {
        piVar5[7] = -0x40800000;
        piVar5[8] = -0x40800000;
        goto switchD_00642ce5_default;
      }
      switch(piVar5[2]) {
      case 0:
        fVar7 = (float10)FUN_00401ae0(**(undefined4 **)(iVar6 + 0xc),piVar5[3],
                                      _DAT_0089096c - (float)piVar5[4]);
        piVar5[8] = (int)(float)fVar7;
        break;
      case 1:
      case 2:
        bVar3 = **(float **)(iVar6 + 0xc) < _DAT_008933d4;
        goto LAB_00642d25;
      case 3:
      case 4:
        bVar3 = **(float **)(iVar6 + 0xc) < (float)piVar5[3];
LAB_00642d25:
        if (bVar3) {
          piVar5[8] = 0;
        }
        else {
          piVar5[8] = 0x3f800000;
        }
      }
switchD_00642ce5_default:
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(iVar1 + 4));
  }
  return;
}

