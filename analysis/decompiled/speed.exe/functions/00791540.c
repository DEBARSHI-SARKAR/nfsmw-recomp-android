/* speed.exe 00791540 FUN_00791540; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 00460c70 FUN_00460c70
 * calls 0078cea0 FUN_0078cea0
 * calls 0078c730 FUN_0078c730
 */

void __thiscall FUN_00791540(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_80 [26];
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_2;
  uStack_18 = 0x791553;
  puStack_14 = param_1 + 10;
  iVar1 = FUN_00460d20();
  if (iVar1 != 0) {
    uStack_10 = param_2;
    uStack_18 = 0x791561;
    puStack_14 = param_1 + 10;
    FUN_00460c70();
    uStack_10 = param_1[0x1c];
    puVar2 = auStack_80;
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    FUN_0078c730();
    FUN_0078cea0();
  }
  return;
}

