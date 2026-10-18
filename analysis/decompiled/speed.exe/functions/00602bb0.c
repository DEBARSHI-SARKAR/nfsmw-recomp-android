/* speed.exe 00602bb0 FUN_00602bb0; analysis pseudocode, not buildable source.
 * calls 005dd090 FUN_005dd090
 * calls 005fa780 FUN_005fa780
 * calls 005f95f0 FUN_005f95f0
 * calls 00602840 FUN_00602840
 * calls 00659660 FUN_00659660
 * calls 005e9de0 FUN_005e9de0
 * calls 007653b0 FUN_007653b0
 * calls 007651a0 FUN_007651a0
 * calls 005e3980 FUN_005e3980
 * calls 00452430 FUN_00452430
 * calls 005dd930 FUN_005dd930
 * calls 005f93d0 FUN_005f93d0
 */

void __thiscall FUN_00602bb0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x196c) != 0) {
    FUN_00659660();
    FUN_007653b0();
    FUN_007651a0();
  }
  iVar2 = FUN_005e3980(param_2);
  *(int *)(param_1 + 0x196c) = iVar2;
  if (iVar2 != 0) {
    FUN_005dd090();
    piVar1 = *(int **)(*(int *)(param_1 + 0x196c) + 0x14);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_005fa780(piVar1);
    }
  }
  if (*(char *)(DAT_0091e00c + 0x118) != '\0') {
    FUN_005f95f0(1);
    if (*(int *)(param_1 + 0x196c) != 0) {
      uVar3 = FUN_00452430();
      iVar2 = FUN_005dd930(uVar3);
      if (*(char *)(iVar2 + 0x3c) == '\0') {
        FUN_005f93d0();
      }
    }
    FUN_00602840();
    FUN_005e9de0();
  }
  return;
}

