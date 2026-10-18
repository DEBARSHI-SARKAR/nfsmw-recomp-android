/* speed.exe 0070db50 FUN_0070db50; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

int __thiscall FUN_0070db50(int param_1,int param_2)

{
  int *_Dst;
  int iVar1;
  int iVar2;
  int *_Src;
  
  if ((*(int *)(param_1 + 0x6c) == 0) ||
     (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x6c) >> 2 == 0)) {
    return -1;
  }
  if (param_2 == 1) {
    _Dst = *(int **)(param_1 + 0x6c);
    if (*(int **)(param_1 + 0x70) <= _Dst) {
      return -1;
    }
    while (((iVar2 = *_Dst, iVar2 != 3 && (iVar2 != 4)) && (iVar2 != 5))) {
      _Dst = _Dst + 1;
      if (*(int **)(param_1 + 0x70) <= _Dst) {
        return -1;
      }
    }
  }
  else if (param_2 == 2) {
    _Dst = *(int **)(param_1 + 0x6c);
    if (*(int **)(param_1 + 0x70) <= _Dst) {
      return -1;
    }
    while (((iVar2 = *_Dst, iVar2 != 6 && (iVar2 != 7)) && (iVar2 != 8))) {
      _Dst = _Dst + 1;
      if (*(int **)(param_1 + 0x70) <= _Dst) {
        return -1;
      }
    }
  }
  else {
    if (param_2 != 3) {
      _Dst = *(int **)(param_1 + 0x6c);
      if (*(int **)(param_1 + 0x70) <= _Dst) {
        return -1;
      }
      while (((iVar2 = *_Dst, iVar2 != 3 && (iVar2 != 4)) &&
             ((iVar2 != 5 && (((iVar2 != 6 && (iVar2 != 7)) && (iVar2 != 8))))))) {
        _Dst = _Dst + 1;
        if (*(int **)(param_1 + 0x70) <= _Dst) {
          return -1;
        }
      }
      iVar2 = *_Dst;
      _Src = _Dst + 1;
      iVar1 = *(int *)(param_1 + 0x70) - (int)_Src;
      goto LAB_0070dc62;
    }
    _Dst = *(int **)(param_1 + 0x6c);
    if (*(int **)(param_1 + 0x70) <= _Dst) {
      return -1;
    }
    while (*_Dst != 9) {
      _Dst = _Dst + 1;
      if (*(int **)(param_1 + 0x70) <= _Dst) {
        return -1;
      }
    }
  }
  iVar2 = *_Dst;
  _Src = _Dst + 1;
  iVar1 = *(int *)(param_1 + 0x70) - (int)_Src;
LAB_0070dc62:
  FID_conflict__memcpy(_Dst,_Src,(iVar1 >> 2) << 2);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -4;
  return iVar2;
}

