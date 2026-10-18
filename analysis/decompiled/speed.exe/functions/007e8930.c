/* speed.exe 007e8930 FUN_007e8930; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007e8930(undefined4 param_1)

{
  if ((DAT_009baf64 != 0) && (*(code **)(DAT_009baf64 + 0x18) != (code *)0x0)) {
    (**(code **)(DAT_009baf64 + 0x18))(param_1);
    return param_1;
  }
  return param_1;
}

