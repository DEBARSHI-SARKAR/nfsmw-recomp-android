/* speed.exe 006c9f80 FUN_006c9f80; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006c9f80(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x2248);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (DAT_00982d14 != (int *)0x0) {
    (**(code **)(*DAT_00982d14 + 8))(DAT_00982d14);
    DAT_00982d14 = (int *)0x0;
  }
  return;
}

