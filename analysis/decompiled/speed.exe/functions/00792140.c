/* speed.exe 00792140 FUN_00792140; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00735c10 FUN_00735c10
 */

void FUN_00792140(void)

{
  int local_8;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  local_8 = 0;
  FUN_0078a3a0(&local_8,1);
  FUN_00735c10(local_4,local_8 == 1);
  return;
}

