/* speed.exe 00474560 FUN_00474560; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 FUN_00474560(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_0092d87c;
  if (DAT_0092d87c != DAT_0092d87c + DAT_0092d884) {
    do {
      piVar3 = (int *)*puVar4;
      iVar2 = (**(code **)(*piVar3 + 0x2c))();
      if (iVar2 == param_1) {
        iVar2 = (**(code **)(*piVar3 + 4))();
        if (iVar2 == 0) {
          return 0;
        }
        piVar3 = (int *)FUN_005d59f0(&LAB_004037e0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        cVar1 = (**(code **)(*piVar3 + 0x28))();
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != DAT_0092d87c + DAT_0092d884);
  }
  return 0;
}

