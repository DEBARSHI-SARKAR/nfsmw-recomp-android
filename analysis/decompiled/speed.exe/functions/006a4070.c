/* speed.exe 006a4070 FUN_006a4070; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_006a4070(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  piVar1 = (int *)FUN_005d59f0(&LAB_004040d0);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 4))();
    if (piVar1 != (int *)0x0) {
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      uVar2 = (**(code **)(*piVar1 + 0x70))();
      *(undefined4 *)(param_1 + 0x98) = uVar2;
    }
  }
  return;
}

