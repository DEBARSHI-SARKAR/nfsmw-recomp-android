/* speed.exe 004c0a90 FUN_004c0a90; analysis pseudocode, not buildable source.
 * calls 004bff50 FUN_004bff50
 */

undefined4 __fastcall FUN_004c0a90(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_00913db8 <= DAT_00913dbc) {
    uVar2 = (**(code **)(DAT_00913db0 + 0xc))(DAT_00913dbc + 1);
    FUN_004bff50(uVar2);
  }
  puVar1 = (undefined4 *)(DAT_00913db4 + DAT_00913dbc * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  DAT_00913dbc = DAT_00913dbc + 1;
  return param_1;
}

