/* speed.exe 004b6590 FUN_004b6590; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_004b6590(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x28 + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x54))();
    return uVar2;
  }
  return 0xffffffff;
}

