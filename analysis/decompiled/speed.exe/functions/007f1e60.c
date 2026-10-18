/* speed.exe 007f1e60 FUN_007f1e60; analysis pseudocode, not buildable source.
 * calls 007f0fe0 FUN_007f0fe0
 * calls 007f3093 FUN_007f3093
 * calls 007f1cbc FUN_007f1cbc
 */

undefined4 * __thiscall FUN_007f1e60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_LAB_008c2260;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0x20;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[7] = 1;
  puVar3 = param_1 + 1;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_007f0fe0(param_1 + 8,0,0x80);
  param_1[0x28] = 0;
  iVar2 = FUN_007f1cbc(0x14);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_007f3093(param_1[5]);
  }
  param_1[0x2c] = uVar1;
  return param_1;
}

