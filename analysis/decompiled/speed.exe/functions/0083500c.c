/* speed.exe 0083500c FUN_0083500c; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0083500c(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return;
}

