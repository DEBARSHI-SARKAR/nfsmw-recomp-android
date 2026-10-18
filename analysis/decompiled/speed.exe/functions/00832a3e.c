/* speed.exe 00832a3e FUN_00832a3e; analysis pseudocode, not buildable source.
 */

int FUN_00832a3e(uint param_1,int param_2,int param_3)

{
  if ((uint)(param_2 % param_3) < param_1) {
    return (param_2 / param_3) * param_1 + param_2 % param_3;
  }
  return (param_2 / param_3 + 1) * param_1;
}

