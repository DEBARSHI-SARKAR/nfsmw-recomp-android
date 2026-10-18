/* speed.exe 007c5250 _qsort; analysis pseudocode, not buildable source.
 * calls 007c5660 swap
 * calls 007c55f0 shortsort
 */

/* Library Function - Single Match
    _qsort
   
   Library: Visual Studio 2003 Debug */

void __cdecl
_qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
  int iVar1;
  void *local_114;
  void *local_110;
  undefined4 auStack_10c [31];
  uint local_90;
  int local_8c;
  void *local_88;
  undefined4 auStack_84 [30];
  void *local_c;
  void *local_8;
  
  if ((1 < _NumOfElements) && (_SizeOfElements != 0)) {
    local_8c = 0;
    local_c = _Base;
    local_110 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
LAB_007c528d:
    while (local_90 = (uint)((int)local_110 - (int)local_c) / _SizeOfElements + 1, 8 < local_90) {
      local_8 = (void *)((local_90 >> 1) * _SizeOfElements + (int)local_c);
      iVar1 = (*_PtFuncCompare)(local_c,local_8);
      if (0 < iVar1) {
        swap(local_c,local_8,_SizeOfElements);
      }
      iVar1 = (*_PtFuncCompare)(local_c,local_110);
      if (0 < iVar1) {
        swap(local_c,local_110,_SizeOfElements);
      }
      iVar1 = (*_PtFuncCompare)(local_8,local_110);
      if (0 < iVar1) {
        swap(local_8,local_110,_SizeOfElements);
      }
      local_88 = local_c;
      local_114 = local_110;
LAB_007c5372:
      if (local_88 < local_8) {
        do {
          local_88 = (void *)((int)local_88 + _SizeOfElements);
          if (local_8 <= local_88) break;
          iVar1 = (*_PtFuncCompare)(local_88,local_8);
        } while (iVar1 < 1);
      }
      if (local_8 <= local_88) {
        do {
          local_88 = (void *)((int)local_88 + _SizeOfElements);
          if (local_110 < local_88) break;
          iVar1 = (*_PtFuncCompare)(local_88,local_8);
        } while (iVar1 < 1);
      }
      do {
        local_114 = (void *)((int)local_114 - _SizeOfElements);
        if (local_114 <= local_8) break;
        iVar1 = (*_PtFuncCompare)(local_114,local_8);
      } while (0 < iVar1);
      if (local_88 <= local_114) {
        swap(local_88,local_114,_SizeOfElements);
        if (local_8 == local_114) {
          local_8 = local_88;
        }
        goto LAB_007c5372;
      }
      local_114 = (void *)((int)local_114 + _SizeOfElements);
      if (local_8 < local_114) {
        do {
          local_114 = (void *)((int)local_114 - _SizeOfElements);
          if (local_114 <= local_8) break;
          iVar1 = (*_PtFuncCompare)(local_114,local_8);
        } while (iVar1 == 0);
      }
      if (local_114 <= local_8) {
        do {
          local_114 = (void *)((int)local_114 - _SizeOfElements);
          if (local_114 <= local_c) break;
          iVar1 = (*_PtFuncCompare)(local_114,local_8);
        } while (iVar1 == 0);
      }
      if ((int)local_114 - (int)local_c < (int)local_110 - (int)local_88) {
        if (local_88 < local_110) {
          auStack_10c[local_8c] = local_88;
          auStack_84[local_8c] = local_110;
          local_8c = local_8c + 1;
        }
        if (local_114 <= local_c) goto LAB_007c55ab;
        local_110 = local_114;
      }
      else {
        if (local_c < local_114) {
          auStack_10c[local_8c] = local_c;
          auStack_84[local_8c] = local_114;
          local_8c = local_8c + 1;
        }
        if (local_110 <= local_88) goto LAB_007c55ab;
        local_c = local_88;
      }
    }
    shortsort(local_c,local_110,_SizeOfElements,_PtFuncCompare);
LAB_007c55ab:
    local_8c = local_8c + -1;
    if (-1 < local_8c) {
      local_c = (void *)auStack_10c[local_8c];
      local_110 = (void *)auStack_84[local_8c];
      goto LAB_007c528d;
    }
  }
  return;
}

