/* speed.exe 00731040 FUN_00731040; analysis pseudocode, not buildable source.
 * calls 00730bf0 FUN_00730bf0
 * calls 007303d0 FUN_007303d0
 */

void __thiscall FUN_00731040(int param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x188) == 0) {
    FUN_007303d0();
  }
  cVar1 = FUN_007303d0();
  if (cVar1 == '\0') {
    FUN_00730bf0(param_2,1);
    (*param_3)(param_4);
    return;
  }
  *(undefined4 *)(param_1 + 0x868) = param_2;
  *(code **)(param_1 + 0x860) = param_3;
  *(undefined4 *)(param_1 + 0x864) = param_4;
  *(code **)(param_1 + 0x858) = FUN_00731000;
  *(int *)(param_1 + 0x85c) = param_1;
  return;
}

