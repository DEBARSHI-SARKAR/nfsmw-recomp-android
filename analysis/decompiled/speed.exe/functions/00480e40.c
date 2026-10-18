/* speed.exe 00480e40 FUN_00480e40; analysis pseudocode, not buildable source.
 * calls 00479de0 FUN_00479de0
 * calls 005d29d0 FUN_005d29d0
 * calls 00480d20 FUN_00480d20
 */

void FUN_00480e40(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086a5d2;
  pvStack_c = ExceptionList;
  uVar1 = 0;
  ExceptionList = &pvStack_c;
  do {
    uVar1 = uVar1 + 1;
    puVar5 = DAT_0092d87c;
    if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
      do {
        piVar6 = (int *)*puVar5;
        uVar2 = (**(code **)(*piVar6 + 0x2c))();
        if (uVar2 == uVar1) goto LAB_00480e99;
        puVar5 = puVar5 + 1;
      } while (puVar5 != DAT_0092d87c + DAT_0092d884);
    }
    piVar6 = (int *)0x0;
LAB_00480e99:
    for (piVar3 = DAT_00911300; piVar3 != DAT_00911300 + DAT_00911308; piVar3 = piVar3 + 1) {
      if (((undefined4 *)*piVar3)[2] == uVar1) {
        if (piVar6 == (int *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        goto LAB_00480ef7;
      }
    }
    if (piVar6 != (int *)0x0) {
      iVar4 = FUN_005d29d0(0x2c8,0);
      uStack_4 = 0;
      if (iVar4 != 0) {
        FUN_00480d20(uVar1);
      }
      uStack_4 = 0xffffffff;
    }
LAB_00480ef7:
    if (1 < uVar1) {
      piVar6 = DAT_00911300;
      if (DAT_00911300 != DAT_00911300 + DAT_00911308) {
        do {
          FUN_00479de0(param_1);
          piVar6 = piVar6 + 1;
        } while (piVar6 != DAT_00911300 + DAT_00911308);
      }
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

