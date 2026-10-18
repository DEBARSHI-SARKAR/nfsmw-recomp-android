/* speed.exe 005ed690 FUN_005ed690; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

void __thiscall FUN_005ed690(int param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = *(int **)(param_1 + 0x80);
  _Dst = *(int **)(param_1 + 0x7c);
  if (_Dst != piVar1) {
    do {
      if (*_Dst == param_2) break;
      _Dst = _Dst + 1;
    } while (_Dst != piVar1);
    if (_Dst != piVar1) {
      FID_conflict__memcpy(_Dst,_Dst + 1,(*(int *)(param_1 + 0x80) - (int)(_Dst + 1) >> 2) << 2);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -4;
    }
  }
  return;
}

