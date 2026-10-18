/* speed.exe 00834d9e FUN_00834d9e; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00834d9e(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

