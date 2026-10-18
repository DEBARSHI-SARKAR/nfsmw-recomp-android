/* speed.exe 00453320 FUN_00453320; analysis pseudocode, not buildable source.
 */

void FUN_00453320(int *param_1,int *param_2,int *param_3)

{
  if (param_1 != param_2) {
    do {
      if (*param_1 == *param_3) {
        return;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

