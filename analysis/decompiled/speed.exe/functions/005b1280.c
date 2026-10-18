/* speed.exe 005b1280 FUN_005b1280; analysis pseudocode, not buildable source.
 */

uint FUN_005b1280(int *param_1,int *param_2)

{
  if ((param_2[2] <= param_1[2] + 1) && (param_1[2] + -1 <= param_2[2])) {
    if ((param_2[1] <= param_1[1] + 1) && (param_1[1] + -1 <= param_2[1])) {
      if ((*param_2 <= *param_1 + 1) && (*param_1 + -1 <= *param_2)) {
        if ((param_2[3] <= param_1[3] + 1) && (param_1[3] + -1 <= param_2[3])) {
          return 1;
        }
        return 0;
      }
    }
  }
  return (uint)param_2 & 0xffffff00;
}

