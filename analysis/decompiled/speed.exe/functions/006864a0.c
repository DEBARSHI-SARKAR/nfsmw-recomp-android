/* speed.exe 006864a0 FUN_006864a0; analysis pseudocode, not buildable source.
 * calls 0067ac20 FUN_0067ac20
 * calls 00684a10 FUN_00684a10
 * calls 00486130 FUN_00486130
 */

void __thiscall FUN_006864a0(int *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0067ac20(8);
    if ((int *)param_1[0x3b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3b] + 0x2c))();
    }
    (**(code **)(*param_1 + 8))();
    return;
  }
  if ((param_2 != 2) && (param_2 == 1)) {
    if ((int *)param_1[0x3b] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x3b] + 0x24))();
    }
    FUN_00486130(param_1 + 0xe);
    param_2 = DAT_0092c590;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_0092c658;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_0092c5a0;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_0092c5e0;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_0092c5d0;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_00926190;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_0092c568;
    FUN_00684a10(&param_2,0);
    param_2 = DAT_0092c618;
    FUN_00684a10(&param_2,0);
  }
  return;
}

