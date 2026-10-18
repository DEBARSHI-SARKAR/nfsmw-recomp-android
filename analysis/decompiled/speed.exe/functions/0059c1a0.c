/* speed.exe 0059c1a0 FUN_0059c1a0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00589b00 FUN_00589b00
 * calls 00575aa0 FUN_00575aa0
 * calls 00589870 FUN_00589870
 * calls 00575ae0 FUN_00575ae0
 * calls 00575a20 FUN_00575a20
 * calls 00575960 FUN_00575960
 */

void __thiscall FUN_0059c1a0(int param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  size_t _Size;
  void *pvVar4;
  short *psVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  if ((*(int *)(param_1 + 4) == 0) || (param_2 == (short *)0x0)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    local_8 = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    psVar2 = (short *)FUN_00575aa0(param_2);
    psVar5 = param_2;
    if (psVar2 == (short *)0x0) {
      sVar1 = *param_2;
      psVar2 = param_2;
      while (sVar1 != 0) {
        psVar2 = psVar2 + 1;
        sVar1 = *psVar2;
      }
    }
    while (*psVar5 != 0) {
      if (psVar2 == psVar5) {
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 1;
      }
      else {
        iVar3 = FUN_00589b00(psVar5,psVar2,1,&local_4);
        local_8 = local_8 + iVar3;
        iVar6 = iVar6 + local_4;
      }
      if (*psVar2 == 0) break;
      psVar5 = psVar2 + 1;
      psVar2 = (short *)FUN_00575aa0(psVar5);
      if (psVar2 == (short *)0x0) {
        psVar2 = psVar5;
        if (*psVar5 == 0) break;
        do {
          psVar2 = psVar2 + 1;
        } while (*psVar2 != 0);
      }
    }
    if (0 < local_8) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        _Size = (iVar6 + local_8 * 2) * 2;
        *(size_t *)(param_1 + 0x40) = _Size;
        pvVar4 = _malloc(_Size);
        *(void **)(param_1 + 0x3c) = pvVar4;
      }
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x44) = local_8 * 4;
      psVar5 = (short *)FUN_00575aa0(param_2);
      if ((psVar5 != (short *)0x0) ||
         (psVar5 = (short *)FUN_00575ae0(param_2), psVar5 != (short *)0x0)) {
        while (*param_2 != 0) {
          if (psVar5 == param_2) {
            FUN_00575a20(0,0);
          }
          else {
            FUN_00589b00(param_2,psVar5,0,0);
          }
          if (*psVar5 == 0) break;
          param_2 = psVar5 + 1;
          psVar5 = (short *)FUN_00575aa0(param_2);
          if (psVar5 == (short *)0x0) {
            psVar5 = param_2;
            if (*param_2 == 0) break;
            do {
              psVar5 = psVar5 + 1;
            } while (*psVar5 != 0);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00589870(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1,1);
  }
  FUN_00575960(*(undefined4 *)(param_1 + 0x48));
  return;
}

