/* speed.exe 005eb4e0 FUN_005eb4e0; analysis pseudocode, not buildable source.
 * calls 005e8b20 FUN_005e8b20
 */

int FUN_005eb4e0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if ((DAT_0092d854 != 0) && (piVar5 = (int *)*DAT_0092d84c, piVar5 != (int *)0x0)) {
    while( true ) {
      uVar2 = (**(code **)(*piVar5 + 4))();
      iVar3 = FUN_005e8b20(uVar2);
      if ((iVar3 != 0) && ((*(char *)(iVar3 + 0x21) != '\0' && (*(int *)(iVar3 + 0x10) == 1)))) {
        return iVar3;
      }
      if (piVar5 == (int *)0xfffffff8) {
        piVar5 = (int *)0x0;
      }
      piVar1 = DAT_0092d84c + DAT_0092d854;
      piVar4 = DAT_0092d84c;
      if (DAT_0092d84c == piVar1) break;
      do {
        if ((int *)*piVar4 == piVar5) break;
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar1);
      if (piVar4 == piVar1) {
        return 0;
      }
      if (piVar4 + 1 == piVar1) {
        return 0;
      }
      piVar5 = (int *)piVar4[1];
      if (piVar5 == (int *)0x0) {
        return 0;
      }
    }
  }
  return 0;
}

