/* speed.exe 004b8db0 FUN_004b8db0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 */

void FUN_004b8db0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1[8]);
  FUN_004647c0(&DAT_00911e9c," %s, 0x%x ",uVar1);
  PTR_s_CSISSOUND_008ee560 = &DAT_00911e9c;
  return;
}

