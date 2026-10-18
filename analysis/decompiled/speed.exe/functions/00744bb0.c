/* speed.exe 00744bb0 FUN_00744bb0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00744bb0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x44);
    if (((iVar1 != param_2 + 0x44) && (iVar1 != 0)) && ((int *)(iVar1 + -4) != (int *)0x0)) {
      iVar1 = (**(code **)(*(int *)(iVar1 + -4) + 0x10))();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x94) == *(int *)(param_1 + 0x30))) {
        return 1;
      }
    }
  }
  return 0;
}

