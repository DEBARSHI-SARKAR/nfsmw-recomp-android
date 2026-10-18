/* speed.exe 0074d320 FUN_0074d320; analysis pseudocode, not buildable source.
 * calls 00672200 FUN_00672200
 * calls 005d59f0 FUN_005d59f0
 * calls 0044b5e0 FUN_0044b5e0
 * calls 005e48f0 FUN_005e48f0
 */

void FUN_0074d320(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar4 = DAT_0092d93c;
  if (DAT_0092d93c != DAT_0092d93c + DAT_0092d944) {
    do {
      piVar2 = (int *)FUN_005d59f0(&LAB_00620fe0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != DAT_0092d93c + DAT_0092d944);
  }
  iVar5 = DAT_0092c8fc;
  if (DAT_0092c8fc != DAT_0092c8fc + DAT_0092c904 * 4) {
    do {
      piVar2 = (int *)FUN_005d59f0(&LAB_00402830);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != DAT_0092c8fc + DAT_0092c904 * 4);
  }
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 1)) {
    puVar4 = DAT_0092d93c + DAT_0092d944;
    for (puVar6 = DAT_0092d93c; puVar6 != puVar4; puVar6 = puVar6 + 1) {
      piVar2 = (int *)*puVar6;
      piVar3 = (int *)FUN_005d59f0(&LAB_00620fe0);
      if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 0x14))(4), cVar1 != '\0')) {
        (**(code **)(*piVar2 + 0x60))();
      }
    }
  }
  FUN_005e48f0(0xffffffff);
  FUN_0044b5e0();
  FUN_00672200();
  return;
}

