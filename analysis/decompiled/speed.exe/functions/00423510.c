/* speed.exe 00423510 FUN_00423510; analysis pseudocode, not buildable source.
 * calls 00422480 FUN_00422480
 * calls 005cc240 FUN_005cc240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00423510(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  
  fVar1 = *(float *)(param_1 + 0x7d8) - param_2;
  *(float *)(param_1 + 0x7d8) = fVar1;
  if (fVar1 < _DAT_00890968) {
    *(undefined4 *)(param_1 + 0x7d8) = 0;
    param_2 = (float)FUN_005cc240("AIGoalHeliExit");
    cVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 0xbc))(&param_2);
    if (cVar2 == '\0') {
      FUN_005cc240("AIGoalHeliExit");
      FUN_00422480(&stack0x00000000);
    }
  }
  return;
}

