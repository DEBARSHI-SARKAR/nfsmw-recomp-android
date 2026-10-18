/* speed.exe 00742900 FUN_00742900; analysis pseudocode, not buildable source.
 * calls 00742680 FUN_00742680
 */

void __thiscall FUN_00742900(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (iVar1 != *(int *)(param_1 + 0x17a0)) {
    *(int *)(param_1 + 0x17a0) = iVar1;
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      iVar2 = **(int **)(param_1 + 0x40);
      if (iVar1 == 0) {
        (**(code **)(iVar2 + 8))();
      }
      else {
        (**(code **)(iVar2 + 0x14))((int *)(param_1 + 0x17a0));
      }
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    FUN_00742680(param_2);
  }
  return;
}

