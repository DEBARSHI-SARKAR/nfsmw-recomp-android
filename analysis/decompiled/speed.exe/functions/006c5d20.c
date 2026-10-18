/* speed.exe 006c5d20 FUN_006c5d20; analysis pseudocode, not buildable source.
 */

void FUN_006c5d20(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = &DAT_0093de78;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1[0x12] != 0) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
  } while ((int)piVar2 < 0x93def4);
  if (DAT_00982c84 != (int *)0x0) {
    (**(code **)(*DAT_00982c84 + 8))(DAT_00982c84);
    DAT_00982c84 = (int *)0x0;
  }
  return;
}

