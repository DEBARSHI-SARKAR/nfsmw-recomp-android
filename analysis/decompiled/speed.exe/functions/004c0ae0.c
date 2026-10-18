/* speed.exe 004c0ae0 FUN_004c0ae0; analysis pseudocode, not buildable source.
 * calls 004bffc0 FUN_004bffc0
 */

undefined4 __fastcall FUN_004c0ae0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_00913e18 <= DAT_00913e1c) {
    uVar2 = (**(code **)(DAT_00913e10 + 0xc))(DAT_00913e1c + 1);
    FUN_004bffc0(uVar2);
  }
  puVar1 = (undefined4 *)(DAT_00913e14 + DAT_00913e1c * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  DAT_00913e1c = DAT_00913e1c + 1;
  return param_1;
}

