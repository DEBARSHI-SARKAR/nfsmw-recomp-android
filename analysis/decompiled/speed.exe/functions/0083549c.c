/* speed.exe 0083549c FUN_0083549c; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000001d SetThreadPriority
 */

bool __thiscall FUN_0083549c(int *param_1,int param_2)

{
  BOOL BVar1;
  bool bVar2;
  
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    bVar2 = false;
  }
  else {
    BVar1 = SetThreadPriority(*(HANDLE *)*param_1,param_2 + -0x7f);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}

