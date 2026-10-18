/* speed.exe 007f00cc FUN_007f00cc; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000008f SetFilePointer
 */

void FUN_007f00cc(HANDLE param_1,LONG param_2,undefined4 param_3,int param_4)

{
  DWORD dwMoveMethod;
  
  if ((param_4 == 0) || (param_4 != 1)) {
    dwMoveMethod = 0;
  }
  else {
    dwMoveMethod = 1;
  }
  SetFilePointer(param_1,param_2,(PLONG)0x0,dwMoveMethod);
  return;
}

