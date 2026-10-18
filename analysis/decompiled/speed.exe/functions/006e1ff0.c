/* speed.exe 006e1ff0 FUN_006e1ff0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006e1ff0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_00901a24;
  *param_1 = _DAT_00901a34;
  param_1[1] = 0x40a41004;
  param_1[2] = 0x40004802;
  param_1[3] = 0x180410c8;
  param_1[4] = *param_2;
  param_1[5] = *param_3;
  uVar2 = iVar1 * iVar1 ^ 0x40a41004;
  param_1[1] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x40004802;
  param_1[2] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x180410c8;
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

