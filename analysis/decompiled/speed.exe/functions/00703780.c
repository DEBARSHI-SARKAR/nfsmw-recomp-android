/* speed.exe 00703780 FUN_00703780; analysis pseudocode, not buildable source.
 */

void FUN_00703780(int *param_1,int *param_2,int param_3)

{
  do {
    if (param_1 == param_2) {
      return;
    }
    if (*param_1 == 0) {
      if (param_3 == 0) {
        return;
      }
    }
    else if ((param_3 != 0) && (*(int *)(*param_1 + 4) == *(int *)(param_3 + 4))) {
      return;
    }
    param_1 = param_1 + 1;
  } while( true );
}

