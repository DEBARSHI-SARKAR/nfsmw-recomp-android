/* speed.exe 00826131 FUN_00826131; analysis pseudocode, not buildable source.
 * calls 008257bf FUN_008257bf
 */

void FUN_00826131(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 0x5c + DAT_009c2520 + 0x4c);
  if (iVar1 != 0) {
    FUN_008257bf(iVar1,param_2);
  }
  return;
}

