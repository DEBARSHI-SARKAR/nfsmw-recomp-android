/* speed.exe 00772300 FUN_00772300; analysis pseudocode, not buildable source.
 * calls 00771480 FUN_00771480
 */

undefined4 __fastcall FUN_00772300(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_009b3c88 <= DAT_009b3c8c) {
    uVar2 = (**(code **)(DAT_009b3c80 + 0xc))(DAT_009b3c8c + 1);
    FUN_00771480(uVar2);
  }
  puVar1 = (undefined4 *)(DAT_009b3c84 + DAT_009b3c8c * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  DAT_009b3c8c = DAT_009b3c8c + 1;
  return param_1;
}

