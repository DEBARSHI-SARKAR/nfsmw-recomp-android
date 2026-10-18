/* speed.exe 0067da60 FUN_0067da60; analysis pseudocode, not buildable source.
 * calls 006755b0 FUN_006755b0
 * calls 00676680 FUN_00676680
 */

void __thiscall FUN_0067da60(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_8 [2];
  
  piVar1 = (int *)(*(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8);
  piVar2 = *(int **)(param_1 + 0x514);
  local_8[0] = param_2;
  local_8[1] = 1;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_00676680(piVar2 + 2,piVar1,piVar2,local_8);
      }
      break;
    }
  }
  if (piVar2 != (int *)(*(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8)) {
    FUN_006755b0(piVar2,*(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8);
  }
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = piVar2 + *(int *)(param_1 + 0xc) * 2;
  local_8[0] = param_2;
  local_8[1] = 1;
  do {
    if (piVar2 == piVar1) {
LAB_0067db17:
      piVar1 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 8);
      if (piVar2 != piVar1) {
        FUN_006755b0(piVar2,piVar1);
      }
      *(int *)(param_1 + 0xa20) = *(int *)(param_1 + 0xa20) + -1;
      return;
    }
    if (param_2 == *piVar2) {
      if (piVar2 != piVar1) {
        piVar2 = (int *)FUN_00676680(piVar2 + 2,piVar1,piVar2,local_8);
      }
      goto LAB_0067db17;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

