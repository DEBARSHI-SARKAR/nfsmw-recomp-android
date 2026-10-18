/* speed.exe 00747ec0 FUN_00747ec0; analysis pseudocode, not buildable source.
 * calls 00747c40 FUN_00747c40
 */

int FUN_00747ec0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00747c40(param_1,param_2,0,0,0xffffffff);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((char)(*(byte *)(iVar1 + 5) >> 5) == param_3) break;
    iVar1 = FUN_00747c40(param_1,param_2,0,iVar1,0xffffffff);
  }
  return iVar1;
}

