/* speed.exe 0084b0b0 FUN_0084b0b0; analysis pseudocode, not buildable source.
 * calls 00862182 Ordinal_1
 * calls 0084a8c0 FUN_0084a8c0
 */

undefined4 FUN_0084b0b0(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x18) == -1) {
    return 0;
  }
  if ((param_2 != 0) && (*param_3 < 0x10)) {
    return 0;
  }
  if (*(int *)(param_1 + 8) == 2) {
    iVar1 = Ordinal_1(*(int *)(param_1 + 0x18),param_2,param_3);
    if (iVar1 != -1) {
      uVar2 = FUN_0084a8c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(param_1 + 0x10));
    }
  }
  return uVar2;
}

