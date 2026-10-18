/* speed.exe 006f6610 FUN_006f6610; analysis pseudocode, not buildable source.
 * calls 006f0660 FUN_006f0660
 * calls 006efae0 FUN_006efae0
 */

void __thiscall FUN_006f6610(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_8 [2];
  
  piVar1 = (int *)(*(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8);
  piVar2 = *(int **)(param_1 + 0x47d4);
  local_8[0] = param_2;
  local_8[1] = 1;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_006f0660(piVar2 + 2,piVar1,piVar2,local_8);
      }
      break;
    }
  }
  if (piVar2 != (int *)(*(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8)) {
    FUN_006efae0(piVar2,*(int *)(param_1 + 0x47d4) + *(int *)(param_1 + 0x47dc) * 8);
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = piVar2 + *(int *)(param_1 + 0xc) * 2;
  local_8[0] = param_2;
  local_8[1] = 1;
  do {
    if (piVar2 == piVar1) {
LAB_006f66c7:
      piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 8);
      if (piVar2 != piVar1) {
        FUN_006efae0(piVar2,piVar1);
      }
      *(int *)(param_1 + 0x8fa0) = *(int *)(param_1 + 0x8fa0) + -1;
      return;
    }
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_006f0660(piVar2 + 2,piVar1,piVar2,local_8);
      }
      goto LAB_006f66c7;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

