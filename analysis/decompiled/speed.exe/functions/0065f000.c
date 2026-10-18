/* speed.exe 0065f000 FUN_0065f000; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0065f000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_008f85a8;
  *param_1 = _DAT_008f85b8;
  param_1[1] = 0x40a04804;
  param_1[2] = 0x40a04800;
  param_1[3] = 0x82c0895;
  param_1[4] = *param_2;
  param_1[5] = *param_3;
  uVar2 = iVar1 * iVar1 ^ 0x40a04804;
  param_1[1] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x40a04800;
  param_1[2] = uVar2;
  uVar2 = uVar2 * iVar1 ^ 0x82c0895;
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

