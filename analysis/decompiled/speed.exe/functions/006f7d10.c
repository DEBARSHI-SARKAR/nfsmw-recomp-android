/* speed.exe 006f7d10 FUN_006f7d10; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 006f4260 FUN_006f4260
 */

void __fastcall FUN_006f7d10(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_008b07ec;
  uVar2 = 0;
  do {
    puVar1 = param_1;
    if (param_1 == (undefined4 *)0xfffffff8) {
      puVar1 = (undefined4 *)0x0;
    }
    FUN_006f4260(puVar1,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  return;
}

