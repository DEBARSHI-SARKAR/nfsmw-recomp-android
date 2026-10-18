/* speed.exe 006f6390 FUN_006f6390; analysis pseudocode, not buildable source.
 * calls 006ef8c0 FUN_006ef8c0
 * calls 006f05a0 FUN_006f05a0
 */

void __thiscall FUN_006f6390(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_8 [2];
  
  piVar1 = (int *)(*(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8);
  piVar2 = *(int **)(param_1 + 0x154);
  local_8[0] = param_2;
  local_8[1] = 1;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_006f05a0(piVar2 + 2,piVar1,piVar2,local_8);
      }
      break;
    }
  }
  if (piVar2 != (int *)(*(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8)) {
    FUN_006ef8c0(piVar2,*(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8);
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = piVar2 + *(int *)(param_1 + 0xc) * 2;
  local_8[0] = param_2;
  local_8[1] = 1;
  do {
    if (piVar2 == piVar1) {
LAB_006f6447:
      piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 8);
      if (piVar2 != piVar1) {
        FUN_006ef8c0(piVar2,piVar1);
      }
      *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + -1;
      return;
    }
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_006f05a0(piVar2 + 2,piVar1,piVar2,local_8);
      }
      goto LAB_006f6447;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

