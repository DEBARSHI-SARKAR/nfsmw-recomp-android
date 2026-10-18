/* speed.exe 007142d0 FUN_007142d0; analysis pseudocode, not buildable source.
 * calls 004b1ce0 FUN_004b1ce0
 * calls 007c4840 FID_conflict:_memcpy
 * calls 006fef90 FUN_006fef90
 * calls 0070c600 FUN_0070c600
 * calls 004ccab0 FUN_004ccab0
 * calls 007136e0 FUN_007136e0
 * calls 00710670 FUN_00710670
 * calls 005d0370 FUN_005d0370
 * calls 0070fbc0 FUN_0070fbc0
 */

void FUN_007142d0(void)

{
  int iVar1;
  int iVar2;
  int *_Src;
  int *_Dst;
  int local_4;
  
  if ((DAT_009933ac != (int *)0x0) &&
     (iVar2 = (int)DAT_009933b0 - (int)DAT_009933ac >> 2, iVar2 != 0)) {
    FUN_0070fbc0(DAT_009933ac,DAT_009933b0,iVar2);
    if (DAT_009933ac != DAT_009933b0) {
      _Src = DAT_009933ac + 1;
      _Dst = DAT_009933ac;
      do {
        iVar2 = *_Dst;
        local_4 = iVar2;
        if (*(char *)(iVar2 + 0x38) == '\0') {
          iVar1 = FUN_006fef90(iVar2,0);
          if (iVar1 != -5) {
            if (iVar1 == -2) {
              iVar2 = FUN_0070c600(iVar2,1);
              if (iVar2 != 2) {
                FUN_00710670(DAT_00993398,1,&local_4);
              }
            }
            else {
              FUN_007136e0(&local_4);
            }
            goto LAB_00714354;
          }
          FUN_004ccab0();
          FUN_004b1ce0(iVar2);
          FID_conflict__memcpy(_Dst,_Src,((int)DAT_009933b0 - (int)_Src >> 2) << 2);
          DAT_009933b0 = DAT_009933b0 + -1;
        }
        else {
LAB_00714354:
          _Dst = _Dst + 1;
          _Src = _Src + 1;
        }
      } while (_Dst != DAT_009933b0);
    }
    if (DAT_009933ac != (int *)0x0) {
      FUN_005d0370(DAT_009933ac,(DAT_009933b4 - (int)DAT_009933ac >> 2) << 2,0);
    }
    DAT_009933ac = (int *)0x0;
    DAT_009933b0 = (int *)0x0;
    DAT_009933b4 = 0;
  }
  return;
}

