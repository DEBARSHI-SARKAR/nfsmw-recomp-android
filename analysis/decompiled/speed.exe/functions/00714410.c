/* speed.exe 00714410 FUN_00714410; analysis pseudocode, not buildable source.
 * calls 007142d0 FUN_007142d0
 * calls 004ccab0 FUN_004ccab0
 * calls 0070c600 FUN_0070c600
 * calls 004b8880 FUN_004b8880
 * calls 00710670 FUN_00710670
 * calls 00454810 FUN_00454810
 * calls 00714000 FUN_00714000
 * calls 005d0370 FUN_005d0370
 * calls 0070cc30 FUN_0070cc30
 * calls 004b1ce0 FUN_004b1ce0
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007136e0 FUN_007136e0
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 0045a430 FUN_0045a430
 */

void FUN_00714410(void)

{
  int *_Src;
  void **ppvVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *_Dst;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_38;
  undefined **local_34;
  int *local_2c;
  int *local_28;
  int local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008800c0;
  local_c = ExceptionList;
  _Dst = (int *)0x0;
  piVar7 = (int *)0x0;
  iVar8 = 0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  local_34 = &PTR_FUN_008b2640;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((DAT_00993398 != (int *)0x0) &&
     (ExceptionList = &local_c, (int)DAT_0099339c - (int)DAT_00993398 >> 2 != 0)) {
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if (DAT_00993398 != DAT_0099339c) {
      do {
        piVar6 = DAT_00993398;
        iVar8 = *DAT_00993398;
        local_38 = iVar8;
        iVar3 = FUN_0070cc30(iVar8);
        if ((iVar3 == 0) || (iVar3 == 1)) {
          FUN_007136e0(&local_38);
        }
        else if (iVar3 == 4) {
          FUN_007136e0(&local_38);
          _Dst = local_2c;
          piVar7 = local_28;
        }
        else if (iVar8 != 0) {
          FUN_004ccab0();
          FUN_004b1ce0(iVar8);
        }
        _Src = piVar6 + 1;
        FID_conflict__memcpy(piVar6,_Src,((int)DAT_0099339c - (int)_Src >> 2) << 2);
        DAT_0099339c = DAT_0099339c + -1;
        ppvVar1 = ExceptionList;
      } while (DAT_00993398 != DAT_0099339c);
    }
    ExceptionList = ppvVar1;
    iVar8 = local_24;
    if (DAT_00993398 != (int *)0x0) {
      FUN_005d0370(DAT_00993398,(DAT_009933a0 - (int)DAT_00993398 >> 2) * 4,0);
    }
    DAT_00993398 = (int *)0x0;
    DAT_0099339c = (int *)0x0;
    DAT_009933a0 = 0;
    if ((_Dst != (int *)0x0) && ((int)piVar7 - (int)_Dst >> 2 != 0)) {
      piVar6 = _Dst;
      if (_Dst != piVar7) {
        do {
          iVar8 = *_Dst;
          local_38 = iVar8;
          iVar3 = FUN_0070c600(iVar8,1);
          if (iVar3 == 2) {
            FID_conflict__memcpy(_Dst,_Dst + 1,((int)piVar7 - (int)(_Dst + 1) >> 2) * 4);
            piVar7 = piVar7 + -1;
            local_28 = piVar7;
            if (iVar8 != 0) {
              FUN_004ccab0();
              FUN_004b1ce0(iVar8);
            }
          }
          else {
            uVar10 = 0;
            uVar9 = 0;
            uVar4 = FUN_004cb270(*(undefined4 *)(iVar8 + 8));
            FUN_004b8880(uVar4,uVar9,uVar10);
            local_4 = CONCAT31(local_4._1_3_,1);
            pcVar5 = (char *)FUN_00454810(0xaecbb4ad,0);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = (char *)FUN_006269b0(1);
            }
            if (*pcVar5 == '\0') {
              FUN_00710670(DAT_00993398,1,&local_38);
            }
            else {
              FUN_007136e0(&local_38);
            }
            local_4 = local_4 & 0xffffff00;
            FUN_0045a430();
          }
          _Dst = _Dst + 1;
          piVar6 = local_2c;
        } while (_Dst != piVar7);
      }
      FUN_005d0370(piVar6,(local_24 - (int)piVar6 >> 2) * 4,0);
      local_2c = (int *)0x0;
      local_28 = (int *)0x0;
      local_24 = 0;
      _Dst = (int *)0x0;
      iVar8 = 0;
    }
  }
  FUN_007142d0();
  do {
    cVar2 = FUN_00714000();
  } while (cVar2 == '\0');
  local_4 = 0xffffffff;
  if (_Dst != (int *)0x0) {
    FUN_005d0370(_Dst,(iVar8 - (int)_Dst >> 2) << 2,0);
  }
  ExceptionList = local_c;
  return;
}

