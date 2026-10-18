/* speed.exe 00712040 FUN_00712040; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007026e0 FUN_007026e0
 * calls 007068a0 FUN_007068a0
 * calls 00710230 FUN_00710230
 * calls 0070b690 FUN_0070b690
 * calls 0070b020 FUN_0070b020
 */

int __thiscall FUN_00712040(int param_1,int param_2)

{
  void *_Src;
  void *_Dst;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == param_2) {
    return param_1;
  }
  _Src = *(void **)(param_2 + 4);
  if (_Src != (void *)0x0) {
    uVar4 = *(int *)(param_2 + 8) - (int)_Src >> 2;
    if (uVar4 != 0) {
      _Dst = *(void **)(param_1 + 4);
      if (_Dst == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(param_1 + 8) - (int)_Dst >> 2;
      }
      if (uVar4 <= uVar5) {
        FID_conflict__memcpy(_Dst,_Src,(*(int *)(param_2 + 8) - (int)_Src >> 2) << 2);
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) * 4;
        return param_1;
      }
      if (_Dst == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(param_1 + 0xc) - (int)_Dst >> 2;
      }
      if (uVar5 < uVar4) {
        if (_Dst != (void *)0x0) {
          FUN_007026e0(_Dst,*(int *)(param_1 + 0xc) - (int)_Dst >> 2);
        }
        if (*(int *)(param_2 + 4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
        }
        cVar1 = FUN_00710230(iVar2);
        if (cVar1 == '\0') {
          return param_1;
        }
        uVar3 = FUN_0070b690(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                             *(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 8) = uVar3;
        return param_1;
      }
      if (_Dst == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 8) - (int)_Dst >> 2;
      }
      iVar2 = *(int *)(param_2 + 4) + iVar2 * 4;
      FUN_007068a0(*(int *)(param_2 + 4),iVar2,_Dst);
      uVar3 = FUN_0070b690(iVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = uVar3;
      return param_1;
    }
  }
  FUN_0070b020();
  return param_1;
}

