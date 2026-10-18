/* speed.exe 004b5620 FUN_004b5620; analysis pseudocode, not buildable source.
 * calls 00727480 FUN_00727480
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_004b5620(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00727480(param_2,param_3,0);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(float *)(iVar1 + 0x14) == _DAT_00890968) ||
       (*(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x48) <= *(float *)(iVar1 + 0x14)))
    break;
    iVar1 = FUN_00727480(param_2,param_3,iVar1);
  }
  return iVar1;
}

