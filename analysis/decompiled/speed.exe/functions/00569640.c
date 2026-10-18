/* speed.exe 00569640 FUN_00569640; analysis pseudocode, not buildable source.
 * calls 00648140 FUN_00648140
 * calls 00642d70 FUN_00642d70
 * calls 00644060 FUN_00644060
 * calls 00626dd0 FUN_00626dd0
 */

void __fastcall FUN_00569640(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x34))();
  cVar1 = FUN_00626dd0();
  if (cVar1 == '\0') {
    FUN_00648140(uVar2);
    FUN_00644060(1);
    FUN_00642d70();
    return;
  }
  return;
}

