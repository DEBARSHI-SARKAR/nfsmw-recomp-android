/* speed.exe 0060e030 FUN_0060e030; analysis pseudocode, not buildable source.
 * calls 0060dae0 FUN_0060dae0
 * calls 005dbed0 FUN_005dbed0
 * calls 005d59f0 FUN_005d59f0
 * calls 006dfaf0 FUN_006dfaf0
 * calls 005dc6d0 FUN_005dc6d0
 * calls 004ae8f0 FUN_004ae8f0
 * calls 0073def0 FUN_0073def0
 */

void FUN_0060e030(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0060dae0(param_1);
  FUN_005dbed0(iVar1 + -1);
  FUN_005dc6d0(param_2);
  piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x20))();
    iVar1 = FUN_005d59f0(&LAB_005650b0);
    if (iVar1 != 0) {
      iVar1 = FUN_006dfaf0();
      if (iVar1 != 0) {
        FUN_0073def0(0x3e4ccccd);
      }
      FUN_004ae8f0(4);
    }
  }
  return;
}

