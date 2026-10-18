/* speed.exe 004b9030 FUN_004b9030; analysis pseudocode, not buildable source.
 * calls 004f9020 FUN_004f9020
 */

void FUN_004b9030(void)

{
  int *piVar1;
  int *piVar2;
  
  FUN_004f9020();
  piVar1 = DAT_00913e74;
  piVar2 = DAT_00913e74;
  if (DAT_00913e74 != DAT_00913e74 + DAT_00913e7c) {
    do {
      if (*(char *)(*piVar1 + 0x11) == '\0') {
        *(undefined1 *)(*piVar1 + 0x11) = 1;
        piVar2 = DAT_00913e74;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != piVar2 + DAT_00913e7c);
  }
  return;
}

