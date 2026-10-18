/* speed.exe 0082b460 FUN_0082b460; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0082b460(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    return *(undefined4 *)(param_1 + 0x5c);
  }
  if ((param_2 < *(int *)(param_1 + 0x18)) &&
     (iVar1 = *(int *)(param_1 + 0x108) + param_2 * 0x14, -1 < *(int *)(iVar1 + 4))) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0xfffffff8;
}

