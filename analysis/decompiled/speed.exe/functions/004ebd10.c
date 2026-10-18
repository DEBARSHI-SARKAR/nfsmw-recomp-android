/* speed.exe 004ebd10 FUN_004ebd10; analysis pseudocode, not buildable source.
 * calls 004eab00 FUN_004eab00
 */

void FUN_004ebd10(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  for (piVar1 = DAT_00914664;
      (piVar1 != DAT_00914664 + DAT_0091466c * 2 && ((param_2 != piVar1[1] || (param_1 != *piVar1)))
      ); piVar1 = piVar1 + 2) {
  }
  if (piVar1 == DAT_00914664 + DAT_0091466c * 2) {
    if (DAT_00914668 <= DAT_0091466c) {
      uVar2 = (**(code **)(DAT_00914660 + 0xc))(DAT_0091466c + 1);
      FUN_004eab00(uVar2);
    }
    piVar1 = DAT_00914664 + DAT_0091466c * 2;
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_1;
      piVar1[1] = param_2;
    }
    DAT_0091466c = DAT_0091466c + 1;
  }
  return;
}

