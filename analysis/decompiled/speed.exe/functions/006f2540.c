/* speed.exe 006f2540 FUN_006f2540; analysis pseudocode, not buildable source.
 */

int FUN_006f2540(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_10;
  undefined4 local_c;
  undefined4 *local_8;
  int local_4;
  
  local_4 = param_1;
  puStack_10 = &param_2;
  local_c = param_2;
  local_8 = param_3;
  (**(code **)*param_3)();
  piVar2 = DAT_00988ec0;
  if (DAT_00988ec0 != (int *)0x0) {
    while (*piVar2 != param_1) {
      piVar1 = piVar2 + 2;
      piVar2 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        return 0;
      }
    }
    iVar3 = (*(code *)piVar2[1])(&puStack_10);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  return 0;
}

