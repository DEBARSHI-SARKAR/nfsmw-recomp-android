/* speed.exe 0072dd70 FUN_0072dd70; analysis pseudocode, not buildable source.
 * calls 00723940 FUN_00723940
 * calls 0072c750 FUN_0072c750
 * calls 00728060 FUN_00728060
 */

void __fastcall FUN_0072dd70(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *local_310;
  int local_30c;
  short local_308 [386];
  
  FUN_00723940();
  local_308[0] = 0x9c4;
  local_308[1] = 0x960;
  local_308[2] = 0xa28;
  iVar6 = 3;
  if ((DAT_009a3a48 != 0) && (DAT_009a3a4c != 0)) {
    local_308[3] = (short)DAT_009a3a4c;
    iVar6 = 4;
  }
  if (*(short *)(param_1 + 0x850) != 0) {
    local_308[iVar6] = *(short *)(param_1 + 0x850);
    iVar6 = iVar6 + 1;
  }
  if (*(short *)(param_1 + 0x852) != 0) {
    local_308[iVar6] = *(short *)(param_1 + 0x852);
    iVar6 = iVar6 + 1;
  }
  if (*(short *)(param_1 + 0x854) != 0) {
    local_308[iVar6] = *(short *)(param_1 + 0x854);
    iVar6 = iVar6 + 1;
  }
  if (*(short *)(param_1 + 0x856) != 0) {
    local_308[iVar6] = *(short *)(param_1 + 0x856);
    iVar6 = iVar6 + 1;
  }
  FUN_00728060(local_308,iVar6,0);
  FUN_00728060(local_308,iVar6,1);
  local_310 = (short *)(param_1 + 0xde);
  local_30c = 0;
  do {
    puVar1 = DAT_009a3b70;
    if (0 < *local_310) {
      for (; (undefined4 **)puVar1 != &DAT_009a3b70; puVar1 = (undefined4 *)*puVar1) {
        iVar6 = 0;
        if (0 < *(short *)(puVar1 + 6)) {
          psVar4 = (short *)((int)puVar1 + 0x1a);
          do {
            if (*psVar4 == *local_310) {
              if (-1 < iVar6) {
                uVar2 = FUN_0072c750(puVar1,local_308,0x180);
                goto LAB_0072dec4;
              }
              break;
            }
            iVar6 = iVar6 + 1;
            psVar4 = psVar4 + 1;
          } while (iVar6 < *(short *)(puVar1 + 6));
        }
      }
      if ((undefined4 **)DAT_009a3b60 != &DAT_009a3b60) {
        puVar1 = DAT_009a3b60;
        do {
          if (*(short *)(puVar1 + 3) == *local_310) goto LAB_0072dea8;
          puVar1 = (undefined4 *)*puVar1;
        } while ((undefined4 **)puVar1 != &DAT_009a3b60);
      }
      puVar1 = (undefined4 *)0x0;
LAB_0072dea8:
      uVar5 = (uint)*(short *)(puVar1 + 4);
      uVar2 = 0;
      if (0 < (int)uVar5) {
        psVar4 = (short *)((int)puVar1 + 0x12);
        psVar7 = local_308;
        for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined4 *)psVar7 = *(undefined4 *)psVar4;
          psVar4 = psVar4 + 2;
          psVar7 = psVar7 + 2;
        }
        for (uVar3 = (uint)((uVar5 & 1) != 0); uVar2 = uVar5, uVar3 != 0; uVar3 = uVar3 - 1) {
          *psVar7 = *psVar4;
          psVar4 = psVar4 + 1;
          psVar7 = psVar7 + 1;
        }
      }
LAB_0072dec4:
      FUN_00728060(local_308,uVar2,local_30c);
    }
    local_30c = local_30c + 1;
    local_310 = local_310 + 0x32;
    if (1 < local_30c) {
      return;
    }
  } while( true );
}

