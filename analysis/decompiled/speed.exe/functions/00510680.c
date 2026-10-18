/* speed.exe 00510680 FUN_00510680; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 */

int __fastcall FUN_00510680(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_0045d3a0(*(int *)(param_1 + 0x18) + 4);
    return iVar1 + -1;
  }
  iVar1 = FUN_0045d3a0(0);
  return iVar1 + -1;
}

