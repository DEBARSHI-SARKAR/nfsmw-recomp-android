/* speed.exe 007ec2a8 FUN_007ec2a8; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000099 SleepEx
 * calls 007ecdbc FUN_007ecdbc
 */

void FUN_007ec2a8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ecdbc();
  if (iVar1 == 0) {
    iVar1 = 100;
  }
  SleepEx((param_1 * 1000) / iVar1,1);
  return;
}

