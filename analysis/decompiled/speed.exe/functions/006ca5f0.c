/* speed.exe 006ca5f0 FUN_006ca5f0; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_006ca5f0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  
  piVar1 = *(int **)(param_1 + (param_3 + 0x10 + param_2 * 8) * 4);
  if (piVar1 != (int *)0x0) {
    param_3 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_3);
    if (-1 < iVar2) {
      return unaff_retaddr == 1;
    }
  }
  return false;
}

