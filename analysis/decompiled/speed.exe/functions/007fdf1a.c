/* speed.exe 007fdf1a FUN_007fdf1a; analysis pseudocode, not buildable source.
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fdf1a(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_007fc603(*param_1);
  }
  iVar1 = param_1[0x53];
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x53] = 0;
  iVar1 = param_1[0x46];
  param_1[0x52] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x46] = 0;
  iVar1 = param_1[0x47];
  param_1[0x43] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x47] = 0;
  iVar1 = param_1[0x48];
  param_1[0x44] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x48] = 0;
  iVar1 = param_1[0x1bf];
  param_1[0x45] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x1bf] = 0;
  iVar1 = param_1[0x1c1];
  param_1[0x1bc] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x1c1] = 0;
  iVar1 = param_1[0x1c0];
  param_1[0x1be] = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  param_1[0x1c0] = 0;
  param_1[0x1bd] = 0;
  return;
}

