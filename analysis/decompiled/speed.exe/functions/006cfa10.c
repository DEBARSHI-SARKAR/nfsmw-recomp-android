/* speed.exe 006cfa10 FUN_006cfa10; analysis pseudocode, not buildable source.
 */

void FUN_006cfa10(void)

{
  char cVar1;
  int *piVar2;
  
  if ((undefined4 **)DAT_00919694 != &DAT_00919694) {
    if ((((DAT_00919694 != (undefined4 *)0x0) && (DAT_00919694 != (undefined4 *)0x4)) &&
        ((undefined4 **)DAT_00919704 != &DAT_00919704)) &&
       ((DAT_00919704 != (undefined4 *)0x0 && (DAT_00919704 != (undefined4 *)0x4)))) {
      DAT_00982b3c = 3;
      return;
    }
    if ((undefined4 **)DAT_00919694 != &DAT_00919694) {
      if (((DAT_00919694 != (undefined4 *)0x0) && (DAT_00919694 != (undefined4 *)0x4)) &&
         (((undefined4 **)DAT_00919774 != &DAT_00919774 &&
          ((DAT_00919774 != (undefined4 *)0x0 && (DAT_00919774 != (undefined4 *)0x4)))))) {
        if (((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0)) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = DAT_00919694 + -1;
        }
        cVar1 = (**(code **)(*piVar2 + 0x24))();
        if (cVar1 == '\0') {
          DAT_00982b3c = 2;
          return;
        }
      }
      if ((((undefined4 **)DAT_00919694 != &DAT_00919694) && (DAT_00919694 != (undefined4 *)0x0)) &&
         (DAT_00919694 != (undefined4 *)0x4)) {
        DAT_00982b3c = 1;
        return;
      }
    }
  }
  DAT_00982b3c = 0;
  return;
}

