/* speed.exe 00684610 FUN_00684610; analysis pseudocode, not buildable source.
 * calls 0061c7c0 FUN_0061c7c0
 * calls 0060c540 FUN_0060c540
 */

void FUN_00684610(float *param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0060c540();
  piVar2 = (int *)*DAT_0092c4e8;
  piVar1 = DAT_0092c4e8;
  if (piVar2 != DAT_0092c4e8) {
    do {
      if (((((float)piVar2[5] <= *param_2) && ((float)piVar2[7] <= param_2[2])) &&
          ((float)piVar2[6] <= param_2[1])) &&
         (((*param_1 <= (float)piVar2[8] && (param_1[2] <= (float)piVar2[10])) &&
          (param_1[1] <= (float)piVar2[9])))) {
        FUN_0061c7c0(piVar2 + 0xb);
        piVar1 = DAT_0092c4e8;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != piVar1);
  }
  return;
}

