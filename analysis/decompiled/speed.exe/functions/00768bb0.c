/* speed.exe 00768bb0 FUN_00768bb0; analysis pseudocode, not buildable source.
 */

void FUN_00768bb0(undefined4 *param_1,int param_2)

{
  param_2 = param_2 * 0x10;
  *param_1 = *(undefined4 *)(&DAT_009b3960 + param_2);
  param_1[1] = *(undefined4 *)(&DAT_009b3964 + param_2);
  param_1[2] = *(undefined4 *)(&DAT_009b3968 + param_2);
  param_1[3] = *(undefined4 *)(&DAT_009b396c + param_2);
  return;
}

