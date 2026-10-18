/* speed.exe 0063af20 FUN_0063af20; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0063af20(undefined4 *param_1)

{
  int iVar1;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879468;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7378;
  local_4 = 0;
  if (param_1[2] != 0) {
    iVar1 = FUN_005d51f0(DAT_00920eac,DAT_00920eac + DAT_00920eb4 * 8,param_1[2]);
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 4) != (int *)0x0) {
        iVar1 = **(int **)(iVar1 + 4);
        fVar2 = (float10)FUN_006e8de0();
        (**(code **)(iVar1 + 0x58))((float)fVar2);
        *param_1 = &PTR_LAB_008a66f8;
        ExceptionList = param_1;
        return;
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

