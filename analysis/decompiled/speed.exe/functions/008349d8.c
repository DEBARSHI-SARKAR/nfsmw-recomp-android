/* speed.exe 008349d8 FUN_008349d8; analysis pseudocode, not buildable source.
 */

int FUN_008349d8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < (int)(uint)*(byte *)(param_1 + 5)) {
    iVar1 = ((*(byte *)(param_1 + 4) & 0x7f) + 2) * param_2 + 0xe + param_1;
  }
  return iVar1;
}

