/* speed.exe 006e1b10 FUN_006e1b10; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006e1b10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_EBP;
  
  iVar1 = *(int *)(&DAT_00901944 + (unaff_EBP & 3) * 4);
  *param_1 = *(undefined4 *)(&DAT_00901954 + (unaff_EBP & 3) * 4);
  param_1[1] = 0x40a41004;
  param_1[2] = 0x40004802;
  param_1[3] = 0x50241253;
  param_1[4] = *param_2;
  param_1[5] = *param_3;
  uVar2 = iVar1 * iVar1 ^ 0x40a41004;
  param_1[1] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x40004802;
  param_1[2] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x50241253;
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

