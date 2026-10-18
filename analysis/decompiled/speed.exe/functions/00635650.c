/* speed.exe 00635650 FUN_00635650; analysis pseudocode, not buildable source.
 * calls 00635080 FUN_00635080
 */

undefined4 __fastcall FUN_00635650(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_00920e50 <= DAT_00920e54) {
    uVar2 = (**(code **)(DAT_00920e48 + 0xc))(DAT_00920e54 + 1);
    FUN_00635080(uVar2);
  }
  puVar1 = (undefined4 *)(DAT_00920e4c + DAT_00920e54 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  DAT_00920e54 = DAT_00920e54 + 1;
  return param_1;
}

