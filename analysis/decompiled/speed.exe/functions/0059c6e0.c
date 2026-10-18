/* speed.exe 0059c6e0 FUN_0059c6e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0059c6e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_EBP;
  
  iVar1 = *(int *)(&DAT_008f5610 + (unaff_EBP & 3) * 4);
  *param_1 = *(undefined4 *)(&DAT_008f5620 + (unaff_EBP & 3) * 4);
  param_1[1] = 0x14845085;
  param_1[2] = 0x14845081;
  param_1[3] = 0x14845080;
  param_1[4] = *param_2;
  param_1[5] = *param_3;
  uVar2 = iVar1 * iVar1 ^ 0x14845085;
  param_1[1] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x14845081;
  param_1[2] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x14845080;
  param_1[3] = uVar2;
  uVar2 = param_1[4] ^ uVar2 * iVar1;
  param_1[4] = uVar2;
  uVar2 = param_1[5] ^ uVar2 * iVar1;
  param_1[5] = uVar2;
  uVar2 = param_1[6] ^ uVar2 * iVar1;
  param_1[6] = uVar2;
  param_1[7] = param_1[7] ^ uVar2 * iVar1;
  return;
}

