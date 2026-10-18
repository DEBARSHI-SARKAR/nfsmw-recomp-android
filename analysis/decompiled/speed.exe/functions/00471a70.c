/* speed.exe 00471a70 FUN_00471a70; analysis pseudocode, not buildable source.
 */

int FUN_00471a70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  puVar2 = DAT_0092d87c;
  piVar7 = DAT_00911300;
  if (DAT_00911300 != DAT_00911300 + DAT_00911308) {
    do {
      iVar1 = *piVar7;
      iVar5 = *(int *)(iVar1 + 8);
      puVar6 = puVar2;
      if (puVar2 != puVar2 + DAT_0092d884) {
        do {
          piVar4 = (int *)*puVar2;
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          if (iVar3 == iVar5) {
            piVar4 = (int *)(**(code **)(*piVar4 + 4))();
            puVar6 = DAT_0092d87c;
            if ((piVar4 != (int *)0x0) &&
               (iVar5 = (**(code **)(*piVar4 + 0x70))(), puVar6 = DAT_0092d87c, iVar5 == param_1)) {
              return iVar1;
            }
            break;
          }
          puVar2 = puVar2 + 1;
          puVar6 = DAT_0092d87c;
        } while (puVar2 != DAT_0092d87c + DAT_0092d884);
      }
      piVar7 = piVar7 + 1;
      puVar2 = puVar6;
    } while (piVar7 != DAT_00911300 + DAT_00911308);
  }
  return 0;
}

