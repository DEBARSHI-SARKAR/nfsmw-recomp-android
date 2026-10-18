/* speed.exe 005eed90 FUN_005eed90; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 005d0370 FUN_005d0370
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_005eed90(int param_1)

{
  int iVar1;
  int *_Dst;
  int *piVar2;
  
  do {
    piVar2 = *(int **)(param_1 + 0x80);
    if ((piVar2 == (int *)0x0) || (*(int *)(param_1 + 0x84) - (int)piVar2 >> 2 == 0)) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 != 0) {
        FUN_005d0370(iVar1,(*(int *)(param_1 + 0x88) - iVar1 >> 2) << 2,0);
      }
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      return;
    }
    iVar1 = *piVar2;
    if ((*(byte *)(iVar1 + 0x4d) & 2) != 0) {
      piVar2 = *(int **)(DAT_0091e00c + 0x84);
      _Dst = *(int **)(DAT_0091e00c + 0x80);
      if (_Dst != piVar2) {
        do {
          if (*_Dst == iVar1) break;
          _Dst = _Dst + 1;
        } while (_Dst != piVar2);
        if (_Dst != piVar2) {
          piVar2 = (int *)(DAT_0091e00c + 0x84);
          FID_conflict__memcpy(_Dst,_Dst + 1,(*piVar2 - (int)(_Dst + 1) >> 2) << 2);
          *piVar2 = *piVar2 + -4;
        }
      }
      *(byte *)(iVar1 + 0x4d) = *(byte *)(iVar1 + 0x4d) & 0xfd;
    }
    if (*(int *)(iVar1 + 0x6c) != 0) {
      piVar2 = (int *)0x0;
      if ((~*(byte *)(iVar1 + 0x4d) & 1) != 0) {
        piVar2 = (int *)FUN_005d59f0(&LAB_00402830);
      }
      (**(code **)(*(int *)(iVar1 + 0x28) + 8))(*(undefined4 *)(iVar1 + 0x6c));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))();
      }
    }
    *(undefined1 *)(iVar1 + 0x4c) = 1;
  } while( true );
}

