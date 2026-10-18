/* speed.exe 0043c380 FUN_0043c380; analysis pseudocode, not buildable source.
 * calls 00425a80 FUN_00425a80
 * calls 00436210 FUN_00436210
 */

void __thiscall FUN_0043c380(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(param_1 + 8) - iVar1 >> 5) < (uint)(*(int *)(param_1 + 0xc) - iVar1 >> 5))) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00425a80(iVar1,1,param_2,param_1,param_2);
    *(int *)(param_1 + 8) = iVar1 + 0x20;
    return;
  }
  FUN_00436210(*(undefined4 *)(param_1 + 8),1,param_2);
  return;
}

