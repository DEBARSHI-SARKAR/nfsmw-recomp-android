/* speed.exe 007886f0 FUN_007886f0; analysis pseudocode, not buildable source.
 * calls 00788040 FUN_00788040
 */

void __thiscall FUN_007886f0(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_4;
  
  piVar2 = *(int **)(param_1 + 0x4c);
  piVar1 = (int *)(param_1 + 0x4c);
  local_4 = 0.0;
  while ((piVar2 != piVar1 && (local_4 < param_2))) {
    if (*piVar1 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)(*piVar1 + -4);
    }
    fVar5 = (float10)FUN_00788040(param_2 - local_4);
    local_4 = (float)(fVar5 + (float10)local_4);
    if (0 < (int)puVar4[3]) {
      piVar2 = (int *)puVar4[2];
      iVar3 = puVar4[1];
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    piVar2 = (int *)*piVar1;
  }
  return;
}

