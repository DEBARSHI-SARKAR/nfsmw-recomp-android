/* speed.exe 007ffbf0 FUN_007ffbf0; analysis pseudocode, not buildable source.
 * calls 007ffaa6 FUN_007ffaa6
 * calls 007ff8cc FUN_007ff8cc
 * calls 007fe49d FUN_007fe49d
 */

void FUN_007ffbf0(int param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_007fe49d(param_1,param_2);
  }
  if (*(uint *)(param_1 + 0x68) < 2) {
    uVar1 = (uint)(param_3[1] - *(int *)(param_1 + 0x74)) >> 1;
    uVar2 = (uint)(*param_3 - *(int *)(param_1 + 0x70)) >> 1;
    FUN_007ff8cc(param_1,param_2,param_3,*param_3 * uVar1 + uVar2,
                 ((int)uVar1 >> 1) * param_3[3] + ((int)uVar2 >> 1));
  }
  else if (*(uint *)(param_1 + 0x68) == 2) {
    FUN_007ffaa6(param_1,param_2,param_3);
  }
  return;
}

