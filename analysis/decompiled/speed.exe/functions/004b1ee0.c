/* speed.exe 004b1ee0 FUN_004b1ee0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b1ee0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = (int *)(param_1 + 0x14);
  if (param_2 == '\x01') {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 8))();
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined1 *)(param_1 + 0x11) = 1;
    return;
  }
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0xc))();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(char *)(param_1 + 0x11) = param_2;
  return;
}

