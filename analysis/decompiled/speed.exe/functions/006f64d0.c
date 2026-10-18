/* speed.exe 006f64d0 FUN_006f64d0; analysis pseudocode, not buildable source.
 * calls 006f0600 FUN_006f0600
 * calls 006ef9d0 FUN_006ef9d0
 */

void __thiscall FUN_006f64d0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_8 [2];
  
  piVar1 = (int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8);
  piVar2 = *(int **)(param_1 + 0x54);
  local_8[0] = param_2;
  local_8[1] = 1;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_006f0600(piVar2 + 2,piVar1,piVar2,local_8);
      }
      break;
    }
  }
  if (piVar2 != (int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8)) {
    FUN_006ef9d0(piVar2,*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8);
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = piVar2 + *(int *)(param_1 + 0xc) * 2;
  local_8[0] = param_2;
  local_8[1] = 1;
  do {
    if (piVar2 == piVar1) {
LAB_006f6584:
      piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 8);
      if (piVar2 != piVar1) {
        FUN_006ef9d0(piVar2,piVar1);
      }
      *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
      return;
    }
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_006f0600(piVar2 + 2,piVar1,piVar2,local_8);
      }
      goto LAB_006f6584;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

