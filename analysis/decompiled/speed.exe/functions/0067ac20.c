/* speed.exe 0067ac20 FUN_0067ac20; analysis pseudocode, not buildable source.
 * calls 0041ae90 FUN_0041ae90
 */

void __thiscall FUN_0067ac20(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -8;
  }
  if ((uint)(&DAT_0092cd20)[param_2 * 0x18] <= (uint)(&DAT_0092cd24)[param_2 * 0x18]) {
    uVar2 = (**(code **)((&DAT_0092cd18)[param_2 * 0x18] + 0xc))
                      ((&DAT_0092cd24)[param_2 * 0x18] + 1);
    FUN_0041ae90(uVar2);
  }
  piVar1 = (int *)((&DAT_0092cd1c)[param_2 * 0x18] + (&DAT_0092cd24)[param_2 * 0x18] * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
  }
  (&DAT_0092cd24)[param_2 * 0x18] = (&DAT_0092cd24)[param_2 * 0x18] + 1;
  return;
}

