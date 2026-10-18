/* speed.exe 005d5ed0 FUN_005d5ed0; analysis pseudocode, not buildable source.
 * calls 005d47c0 FUN_005d47c0
 */

undefined4 * __fastcall FUN_005d5ed0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_005d47c0();
  param_1[0x1a] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x18] = 2;
  puVar3 = &DAT_008a3028;
  puVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0x3f800000;
  return param_1;
}

