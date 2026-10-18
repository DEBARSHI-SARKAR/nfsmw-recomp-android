/* speed.exe 00816ac6 FUN_00816ac6; analysis pseudocode, not buildable source.
 * calls 008169be FUN_008169be
 */

void FUN_00816ac6(int param_1,undefined4 param_2,short *param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(param_1 + 4);
  iVar2 = 8;
  do {
    psVar1[-2] = *param_3 + 0x80;
    psVar1[-1] = param_3[1] + 0x80;
    *psVar1 = param_3[2] + 0x80;
    psVar1[1] = param_3[3] + 0x80;
    psVar1[2] = param_3[4] + 0x80;
    psVar1[3] = param_3[5] + 0x80;
    psVar1[4] = param_3[6] + 0x80;
    psVar1[5] = param_3[7] + 0x80;
    psVar1 = psVar1 + 8;
    param_3 = param_3 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_008169be(param_2,param_1,param_4,8);
  return;
}

