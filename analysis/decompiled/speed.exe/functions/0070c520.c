/* speed.exe 0070c520 FUN_0070c520; analysis pseudocode, not buildable source.
 * calls 004b1ce0 FUN_004b1ce0
 * calls 007c4840 FID_conflict:_memcpy
 * calls 004ccab0 FUN_004ccab0
 */

uint FUN_0070c520(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int *_Dst;
  int *_Src;
  int *piVar3;
  
  uVar2 = in_EAX & 0xffffff00;
  piVar3 = &DAT_00993398;
  do {
    _Dst = (int *)*piVar3;
    if (((_Dst != (int *)0x0) && (piVar3[1] - (int)_Dst >> 2 != 0)) && (_Dst != (int *)piVar3[1])) {
      _Src = _Dst + 1;
      do {
        iVar1 = *_Dst;
        if (*(int *)(iVar1 + 8) == param_1) {
          FUN_004ccab0();
          FUN_004b1ce0(iVar1);
          FID_conflict__memcpy(_Dst,_Src,(piVar3[1] - (int)_Src >> 2) << 2);
          iVar1 = piVar3[1];
          piVar3[1] = iVar1 + -4;
          uVar2 = CONCAT31((int3)((uint)(iVar1 + -4) >> 8),1);
        }
        else {
          _Dst = _Dst + 1;
          _Src = _Src + 1;
        }
      } while (_Dst != (int *)piVar3[1]);
    }
    piVar3 = piVar3 + 5;
  } while ((int)piVar3 < 0x9933e8);
  return uVar2;
}

