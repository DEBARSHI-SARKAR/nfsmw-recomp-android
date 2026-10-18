/* speed.exe 006279b0 FUN_006279b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006279b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x10))();
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}

