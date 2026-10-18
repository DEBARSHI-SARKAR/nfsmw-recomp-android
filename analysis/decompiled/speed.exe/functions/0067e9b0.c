/* speed.exe 0067e9b0 FUN_0067e9b0; analysis pseudocode, not buildable source.
 * calls 0067ad40 FUN_0067ad40
 * calls 005d5a50 FUN_005d5a50
 */

void __fastcall FUN_0067e9b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_008aa150;
  uVar2 = 0;
  do {
    puVar1 = param_1;
    if (param_1 == (undefined4 *)0xfffffff8) {
      puVar1 = (undefined4 *)0x0;
    }
    FUN_0067ad40(puVar1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

