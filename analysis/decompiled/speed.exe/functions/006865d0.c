/* speed.exe 006865d0 FUN_006865d0; analysis pseudocode, not buildable source.
 * calls 00480f90 FUN_00480f90
 * calls 0067ad40 FUN_0067ad40
 * calls 00684a10 FUN_00684a10
 */

void __thiscall FUN_006865d0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    if ((param_2 != 2) && (param_2 == 1)) {
      if ((int *)param_1[0x3b] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x3b] + 0x20))();
      }
      FUN_00480f90(param_1 + 0xe);
      param_2 = DAT_0092c590;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_0092c658;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_0092c5a0;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_0092c5e0;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_0092c5d0;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_00926190;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_0092c568;
      FUN_00684a10(&param_2,1);
      param_2 = DAT_0092c618;
      FUN_00684a10(&param_2,1);
    }
    return;
  }
  if ((int *)param_1[0x3b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3b] + 0x30))();
  }
  (**(code **)(*param_1 + 8))();
  if (param_1 != (int *)0xffffff4c) {
    FUN_0067ad40(param_1 + 0x2b,8);
    return;
  }
  FUN_0067ad40(0,8);
  return;
}

