/* speed.exe 004689e0 FUN_004689e0; analysis pseudocode, not buildable source.
 * calls 004048c0 FUN_004048c0
 * calls 007854b0 FUN_007854b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004689e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [81];
  char local_7;
  
  local_78 = *param_1;
  local_70 = param_1[2];
  local_6c = param_1[3];
  local_74 = (float)param_1[1] + _DAT_00894594;
  local_68 = *param_2;
  local_64 = (float)param_2[1] + _DAT_00894594;
  local_60 = param_2[2];
  local_5c = param_2[3];
  FUN_004048c0();
  FUN_007854b0(&local_78,local_58,3);
  return local_7 != '\0';
}

