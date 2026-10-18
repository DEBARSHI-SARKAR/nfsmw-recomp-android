/* speed.exe 00510d30 FUN_00510d30; analysis pseudocode, not buildable source.
 * calls 00651550 FUN_00651550
 * calls 00510c10 FUN_00510c10
 */

void __fastcall FUN_00510d30(int param_1)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined1 *)(param_1 + 0xcc) = 1;
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 1.0;
  local_c = 1.0;
  FUN_00510c10(&local_18,&local_10);
  local_8 = local_10 - local_18;
  local_4 = local_14 - local_c;
  FUN_00651550(&local_8);
  return;
}

