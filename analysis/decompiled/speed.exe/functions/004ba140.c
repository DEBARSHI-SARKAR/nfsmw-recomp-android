/* speed.exe 004ba140 FUN_004ba140; analysis pseudocode, not buildable source.
 */

undefined4 FUN_004ba140(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
     (DAT_00919694 != (undefined4 *)0x4)) {
    if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = DAT_00919694 + -1;
    }
    iVar1 = (**(code **)(*piVar2 + 0x10))();
    if (iVar1 != 0) {
      if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = DAT_00919694 + -1;
      }
      iVar1 = (**(code **)(*piVar2 + 0x10))();
      if (*(int *)(iVar1 + 0x94) == param_1) {
        return 1;
      }
    }
  }
  if ((((undefined4 **)DAT_00919704 != &DAT_00919704) && (DAT_00919704 != (undefined4 *)0x0)) &&
     (DAT_00919704 != (undefined4 *)0x4)) {
    if (((undefined4 **)DAT_00919704 == &DAT_00919704) || (DAT_00919704 == (undefined4 *)0x0)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = DAT_00919704 + -1;
    }
    iVar1 = (**(code **)(*piVar2 + 0x10))();
    if (iVar1 != 0) {
      if (((undefined4 **)DAT_00919704 == &DAT_00919704) || (DAT_00919704 == (undefined4 *)0x0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = DAT_00919704 + -1;
      }
      iVar1 = (**(code **)(*piVar2 + 0x10))();
      if (*(int *)(iVar1 + 0x94) == param_1) {
        return 1;
      }
    }
  }
  return 0;
}

