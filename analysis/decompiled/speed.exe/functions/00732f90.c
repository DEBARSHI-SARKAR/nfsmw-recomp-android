/* speed.exe 00732f90 FUN_00732f90; analysis pseudocode, not buildable source.
 * calls 0078a2c0 FUN_0078a2c0
 * calls 0078a3a0 FUN_0078a3a0
 */

void FUN_00732f90(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,*(undefined4 *)(param_2 + 300));
  uVar1 = FUN_0078a2c0(local_4);
  *param_1 = uVar1;
  return;
}

