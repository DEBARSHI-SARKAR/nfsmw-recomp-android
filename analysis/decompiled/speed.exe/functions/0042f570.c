/* speed.exe 0042f570 FUN_0042f570; analysis pseudocode, not buildable source.
 * calls 00429ef0 FUN_00429ef0
 */

void __fastcall FUN_0042f570(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  cVar2 = (**(code **)(*(int *)(param_1 + 0x758) + 0x14))();
  if (cVar2 == '\0') {
    puVar4 = DAT_0092cd7c;
    if (DAT_0092cd7c != DAT_0092cd7c + DAT_0092cd84) {
      do {
        cVar2 = FUN_00429ef0(*puVar4);
        if (cVar2 != '\0') {
          return;
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != DAT_0092cd7c + DAT_0092cd84);
    }
    if (((DAT_0092c67c != (int *)0x0) &&
        (cVar2 = (**(code **)(*DAT_0092c67c + 0x24))(), cVar2 != '\0')) &&
       (puVar4 = DAT_0092cf5c, DAT_0092cf5c != DAT_0092cf5c + DAT_0092cf64)) {
      do {
        piVar1 = (int *)*puVar4;
        iVar3 = (**(code **)(*piVar1 + 0x58))();
        if (((iVar3 != 0) && (iVar3 != 6)) && (cVar2 = FUN_00429ef0(piVar1), cVar2 != '\0')) {
          return;
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != DAT_0092cf5c + DAT_0092cf64);
    }
  }
  return;
}

