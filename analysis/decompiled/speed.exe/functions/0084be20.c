/* speed.exe 0084be20 FUN_0084be20; analysis pseudocode, not buildable source.
 */

void FUN_0084be20(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    (&DAT_009c3740)[DAT_009c3864 * 2] = param_1;
    (&DAT_009c3744)[DAT_009c3864 * 2] = param_2;
    DAT_009c3864 = DAT_009c3864 + 1;
  }
  return;
}

