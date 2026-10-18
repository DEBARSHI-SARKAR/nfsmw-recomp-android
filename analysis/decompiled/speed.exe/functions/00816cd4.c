/* speed.exe 00816cd4 FUN_00816cd4; analysis pseudocode, not buildable source.
 * calls 008169be FUN_008169be
 */

void FUN_00816cd4(short *param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 8;
  psVar1 = param_1;
  do {
    *psVar1 = *psVar1 + *param_2;
    psVar1[1] = psVar1[1] + param_2[1];
    psVar1[2] = psVar1[2] + param_2[2];
    psVar1[3] = psVar1[3] + param_2[3];
    psVar1[4] = psVar1[4] + param_2[4];
    psVar1[5] = psVar1[5] + param_2[5];
    psVar1[6] = psVar1[6] + param_2[6];
    psVar1[7] = psVar1[7] + param_2[7];
    psVar1 = psVar1 + 8;
    param_2 = param_2 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_008169be(param_3,param_1,param_4,8);
  return;
}

