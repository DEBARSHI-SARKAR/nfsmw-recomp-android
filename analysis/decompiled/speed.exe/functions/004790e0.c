/* speed.exe 004790e0 FUN_004790e0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004790e0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -8;
  }
  piVar2 = (int *)(&DAT_0092cd1c)[param_2 * 0x18];
  piVar1 = piVar2 + (&DAT_0092cd24)[param_2 * 0x18];
  for (; (piVar2 != piVar1 && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
  }
  if ((piVar2 != piVar1) && (piVar2 + 1 != piVar1)) {
    return piVar2[1];
  }
  return 0;
}

