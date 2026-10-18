/* speed.exe 005ceeb0 FUN_005ceeb0; analysis pseudocode, not buildable source.
 * calls 007c5250 _qsort
 */

void __fastcall FUN_005ceeb0(int param_1)

{
  uint uVar1;
  void *_Base;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 0x10) == 0) {
    if (1 < uVar1 >> 5) {
      _Base = *(void **)(param_1 + 0xc);
      if ((uVar1 & 2) != 0) {
        _Base = (void *)((int)_Base * 0x10 + param_1);
      }
      _qsort(_Base,uVar1 >> 5,0x10,(_PtFuncCompare *)&LAB_005c7840);
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  }
  return;
}

