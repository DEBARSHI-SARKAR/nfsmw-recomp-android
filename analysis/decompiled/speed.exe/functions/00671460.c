/* speed.exe 00671460 FUN_00671460; analysis pseudocode, not buildable source.
 * calls 00449320 FUN_00449320
 * calls 0045a760 FUN_0045a760
 */

void __fastcall FUN_00671460(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[0x2d] = DAT_008a2fc0;
  param_1[0x2e] = DAT_008a2fc4;
  param_1[0x2f] = DAT_008a2fc8;
  param_1[0x30] = DAT_008a2fcc;
  param_1[0x2c] = 0;
  param_1[0x1a] = 0;
  param_1[0x23] = DAT_008a2fb4;
  param_1[0x24] = DAT_008a2fb8;
  uVar1 = DAT_008a2fbc;
  param_1[0x1e] = 0;
  param_1[0x25] = uVar1;
  param_1[0xf] = DAT_008a2fc0;
  param_1[0x10] = DAT_008a2fc4;
  param_1[0x11] = DAT_008a2fc8;
  param_1[0x12] = DAT_008a2fcc;
  param_1[0x17] = DAT_008a2fb4;
  param_1[0x18] = DAT_008a2fb8;
  param_1[0x19] = DAT_008a2fbc;
  FUN_0045a760(DAT_00988e84);
  puVar2 = (undefined4 *)FUN_00449320(0x3ccccccd);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

