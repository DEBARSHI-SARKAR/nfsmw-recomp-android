/* speed.exe 00744c00 FUN_00744c00; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_00744c00(int param_1)

{
  int iVar1;
  
  if (((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
      (DAT_00919694 + -1 != (int *)0x0)) &&
     ((iVar1 = (**(code **)(DAT_00919694[-1] + 0x10))(), iVar1 != 0 &&
      (*(int *)(iVar1 + 0x94) == *(int *)(param_1 + 0x30))))) {
    return 1;
  }
  if ((((undefined4 **)DAT_00919704 != &DAT_00919704) && (DAT_00919704 != (undefined4 *)0x0)) &&
     ((DAT_00919704 + -1 != (int *)0x0 &&
      ((iVar1 = (**(code **)(DAT_00919704[-1] + 0x10))(), iVar1 != 0 &&
       (*(int *)(iVar1 + 0x94) == *(int *)(param_1 + 0x30))))))) {
    return 1;
  }
  return 0;
}

