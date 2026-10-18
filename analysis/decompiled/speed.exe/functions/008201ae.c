/* speed.exe 008201ae FUN_008201ae; analysis pseudocode, not buildable source.
 * calls 00822b40 FUN_00822b40
 */

undefined4 FUN_008201ae(undefined4 param_1,char param_2)

{
  if (DAT_009c22b0 != (int *)0x0) {
    (**(code **)(*DAT_009c22b0 + 8))(DAT_009c22b0);
    DAT_009c22b0 = (int *)0x0;
  }
  if (DAT_009c22ac != (int *)0x0) {
    (**(code **)(*DAT_009c22ac + 8))(DAT_009c22ac);
    DAT_009c22ac = (int *)0x0;
  }
  if (DAT_009c22a8 != (int *)0x0) {
    (**(code **)(*DAT_009c22a8 + 8))(DAT_009c22a8);
    DAT_009c22a8 = (int *)0x0;
  }
  if (param_2 != '\0') {
    FUN_00822b40();
  }
  return 0;
}

