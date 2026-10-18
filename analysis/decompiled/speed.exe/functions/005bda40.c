/* speed.exe 005bda40 FUN_005bda40; analysis pseudocode, not buildable source.
 * calls 005bc050 FUN_005bc050
 */

undefined4 * __fastcall FUN_005bda40(undefined4 *param_1)

{
  undefined *puVar1;
  
  FUN_005bc050();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = &PTR_FUN_008a2e1c;
  param_1[0x1a] = 2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  param_1[0x2a] = 0xbab60b61;
  param_1[0x2e] = 0xff;
  param_1[0x2d] = 0xff;
  param_1[0x2c] = 0xff;
  param_1[0x2b] = 0xff;
  puVar1 = PTR_FUN_008f56a4;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = puVar1;
  param_1[6] = 6;
  return param_1;
}

