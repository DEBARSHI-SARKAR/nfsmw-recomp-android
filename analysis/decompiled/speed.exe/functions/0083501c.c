/* speed.exe 0083501c FUN_0083501c; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0083501c(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 - param_2;
  UNLOCK();
  return;
}

