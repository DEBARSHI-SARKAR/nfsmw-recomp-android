/* speed.exe 00510da0 FUN_00510da0; analysis pseudocode, not buildable source.
 * calls 00651550 FUN_00651550
 * calls 00510c10 FUN_00510c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00510da0(int param_1)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined1 *)(param_1 + 0xcc) = 1;
  local_10 = 0.0;
  local_c = 0.0;
  local_18 = 1.0;
  local_14 = 1.0;
  FUN_00510c10(&local_10,&local_18);
  local_8 = (local_18 + local_10) * _DAT_008933d4;
  local_4 = (local_14 + local_c) * _DAT_008933d4;
  FUN_00651550(&local_8);
  return;
}

