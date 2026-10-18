/* speed.exe 00732f20 FUN_00732f20; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 0078a750 FUN_0078a750
 */

void FUN_00732f20(float *param_1,int param_2)

{
  float10 fVar1;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,*(undefined4 *)(param_2 + 300));
  fVar1 = (float10)FUN_0078a750(local_4);
  *param_1 = (float)fVar1;
  return;
}

