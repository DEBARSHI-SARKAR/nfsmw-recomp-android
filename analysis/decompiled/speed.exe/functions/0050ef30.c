/* speed.exe 0050ef30 FUN_0050ef30; analysis pseudocode, not buildable source.
 * calls 0078b220 FUN_0078b220
 * calls 00460c70 FUN_00460c70
 */

void __fastcall FUN_0050ef30(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_0078b220();
  FUN_00460c70(param_1,uVar1);
  return;
}

