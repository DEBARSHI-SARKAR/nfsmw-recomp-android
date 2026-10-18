/* speed.exe 007914b0 FUN_007914b0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0078cea0 FUN_0078cea0
 * calls 0083faf0 FUN_0083faf0
 * calls 0078c730 FUN_0078c730
 */

void __fastcall FUN_007914b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_7c [25];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar2 = param_1;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  uStack_c = DAT_009b417c;
  uStack_10 = 0x7914ca;
  uStack_10 = FUN_0083faf0();
  uStack_18 = 0x7914d1;
  puStack_14 = param_1;
  FUN_00460c70();
  uStack_c = 1;
  param_1[0x1c] = 1;
  puVar2 = auStack_7c;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0078c730();
  FUN_0078cea0();
  return;
}

