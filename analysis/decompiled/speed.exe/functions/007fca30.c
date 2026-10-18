/* speed.exe 007fca30 FUN_007fca30; analysis pseudocode, not buildable source.
 * calls 007fc779 FUN_007fc779
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fca30(int *param_1)

{
  if (*param_1 != 0) {
    FUN_007fc779(*param_1);
    FUN_007fc603(*param_1);
    *param_1 = 0;
  }
  return;
}

