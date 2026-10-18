/* speed.exe 00507a80 FUN_00507a80; analysis pseudocode, not buildable source.
 * calls 004fcea0 FUN_004fcea0
 * calls 00463ca0 FUN_00463ca0
 * calls 00502d10 FUN_00502d10
 * calls 005060e0 FUN_005060e0
 */

void FUN_00507a80(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *local_4;
  
  uVar4 = 0;
  piVar3 = (int *)0x0;
  piVar5 = (int *)0x0;
  local_4 = (int *)0x0;
  for (piVar1 = (int *)(param_1 + 8); piVar1 != (int *)(*(int *)(param_1 + 4) + 8 + param_1);
      piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
    iVar2 = *piVar1;
    if (iVar2 == 0x33310001) {
      piVar3 = piVar1 + 2;
    }
    else if ((iVar2 != 0x33310002) && (iVar2 != 0x33310003)) {
      if (iVar2 == 0x33310004) {
        uVar4 = (uint)piVar1[1] / 0x7c;
        piVar5 = piVar1 + 2;
      }
      else if (iVar2 == 0x33310005) {
        local_4 = piVar1 + 2;
      }
    }
  }
  FUN_004fcea0(0,*(undefined4 *)(piVar3[0x1c] + 0x1c));
  if (piVar5 != (int *)0x0) {
    FUN_005060e0(piVar5,local_4,uVar4);
  }
  iVar2 = piVar3[0x1c];
  if (iVar2 != 0) {
    FUN_00502d10();
    FUN_00463ca0(DAT_00916044,iVar2);
  }
  piVar3[0x1c] = 0;
  return;
}

