/* speed.exe 006f25a0 FUN_006f25a0; analysis pseudocode, not buildable source.
 */

void FUN_006f25a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = param_2;
  (**(code **)*param_2)(&param_2);
  piVar3 = DAT_00988ebc;
  if (DAT_00988ebc != (int *)0x0) {
    while (*piVar3 != param_1) {
      piVar1 = piVar3 + 2;
      piVar3 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return;
      }
    }
    (*(code *)piVar3[1])(puVar2);
  }
  return;
}

