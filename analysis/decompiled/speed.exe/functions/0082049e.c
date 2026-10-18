/* speed.exe 0082049e FUN_0082049e; analysis pseudocode, not buildable source.
 * calls 0081bb45 FUN_0081bb45
 * calls 008233bc FUN_008233bc
 * calls 0081bb18 FUN_0081bb18
 * calls 0081e228 FUN_0081e228
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082049e(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = (int *)*param_1;
  for (uVar2 = param_2; 0 < (int)uVar2; uVar2 = uVar2 - uVar1) {
    if ((int)DAT_009c22bc < 1) {
      DAT_009c22c0 = DAT_009c22c0 + 1;
      FUN_0081bb45();
      _DAT_0090bf50 = _DAT_009c200c + _DAT_0090bf50;
      DAT_009c1b58 = (uint)ROUND(_DAT_0090bf50);
      if (_DAT_00894d58 < _DAT_0090bf50) {
        _DAT_0090bf50 = _DAT_0090bf50 - _DAT_00894d58;
      }
      param_2 = DAT_009c1b58;
      FUN_0081bb18();
      DAT_009c22bc = (int)((uint)DAT_009c2046 * DAT_009c22c0) / 100 - _DAT_009c22c4 & 0xffffff0;
      _DAT_009c22c4 = _DAT_009c22c4 + DAT_009c22bc;
      if (30000 < DAT_009c22c0) {
        DAT_009c22c0 = 0;
        _DAT_009c22c4 = 0;
      }
    }
    uVar1 = DAT_009c22bc;
    if ((int)uVar2 <= (int)DAT_009c22bc) {
      uVar1 = uVar2;
    }
    DAT_009c22bc = DAT_009c22bc - uVar1;
    FUN_008233bc(&param_1,uVar1);
    FUN_0081e228();
    param_1 = (int *)((int)param_1 + ((uint)DAT_009c2060 + (uint)DAT_009c205f) * uVar1 * 2);
  }
  return;
}

