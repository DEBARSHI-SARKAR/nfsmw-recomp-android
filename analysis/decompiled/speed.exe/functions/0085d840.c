/* speed.exe 0085d840 _bsearch; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _bsearch
   
   Library: Visual Studio 2003 Debug */

void * __cdecl
_bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
        _PtFuncCompare *_PtFuncCompare)

{
  int iVar1;
  void *pvVar2;
  uint local_20;
  uint local_1c;
  void *local_14;
  void *local_c;
  
  local_c = _Base;
  local_14 = (void *)((_NumOfElements - 1) * _SizeOfElements + (int)_Base);
  while( true ) {
    if (local_14 < local_c) {
      return (void *)0x0;
    }
    local_20 = _NumOfElements >> 1;
    if (local_20 == 0) break;
    local_1c = local_20;
    if ((_NumOfElements & 1) == 0) {
      local_1c = local_20 - 1;
    }
    pvVar2 = (void *)(local_1c * _SizeOfElements + (int)local_c);
    iVar1 = (*_PtFuncCompare)(_Key,pvVar2);
    if (iVar1 == 0) {
      return pvVar2;
    }
    if (iVar1 < 0) {
      local_14 = (void *)((int)pvVar2 - _SizeOfElements);
      if ((_NumOfElements & 1) == 0) {
        local_20 = local_20 - 1;
      }
      _NumOfElements = local_20;
    }
    else {
      local_c = (void *)((int)pvVar2 + _SizeOfElements);
      _NumOfElements = local_20;
    }
  }
  if (_NumOfElements == 0) {
    return (void *)0x0;
  }
  iVar1 = (*_PtFuncCompare)(_Key,local_c);
  return (void *)(~-(uint)(iVar1 != 0) & (uint)local_c);
}

