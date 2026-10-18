/* speed.exe 005ed9c0 FUN_005ed9c0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

void __thiscall FUN_005ed9c0(int param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = *(int **)(param_1 + 0x84);
  _Dst = *(int **)(param_1 + 0x80);
  if (_Dst != piVar1) {
    do {
      if (*_Dst == param_2) break;
      _Dst = _Dst + 1;
    } while (_Dst != piVar1);
    if (_Dst != piVar1) {
      FID_conflict__memcpy(_Dst,_Dst + 1,(*(int *)(param_1 + 0x84) - (int)(_Dst + 1) >> 2) << 2);
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -4;
    }
  }
  return;
}

