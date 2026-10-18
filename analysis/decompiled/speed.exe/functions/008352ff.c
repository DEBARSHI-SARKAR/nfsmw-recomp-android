/* speed.exe 008352ff FUN_008352ff; analysis pseudocode, not buildable source.
 */

bool __thiscall FUN_008352ff(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  if (param_3 == iVar1) {
    *param_1 = param_2;
    iVar1 = param_3;
  }
  UNLOCK();
  return iVar1 == param_3;
}

