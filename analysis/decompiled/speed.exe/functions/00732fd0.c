/* speed.exe 00732fd0 FUN_00732fd0; analysis pseudocode, not buildable source.
 * calls 0078a2c0 FUN_0078a2c0
 * calls 0078a3a0 FUN_0078a3a0
 */

void FUN_00732fd0(int param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,*(undefined4 *)(param_1 + 300));
  FUN_0078a2c0(local_4);
  return;
}

