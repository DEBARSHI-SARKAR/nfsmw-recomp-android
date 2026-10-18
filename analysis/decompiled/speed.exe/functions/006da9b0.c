/* speed.exe 006da9b0 FUN_006da9b0; analysis pseudocode, not buildable source.
 * calls 006cf2b0 FUN_006cf2b0
 * calls 006d7a40 FUN_006d7a40
 * calls 0073d3c0 FUN_0073d3c0
 * calls 004fca10 FUN_004fca10
 * calls 006e0ab0 FUN_006e0ab0
 * calls 00504f70 FUN_00504f70
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 004fb710 FUN_004fb710
 * calls 004fb8f0 FUN_004fb8f0
 * calls 006be800 FUN_006be800
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_006da9b0(int param_1,int param_2,undefined4 param_3,int param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_2c4;
  int iStack_2bc;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  uint uStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int iStack_264;
  int iStack_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  undefined1 local_250 [64];
  undefined1 local_210 [524];
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != -0x6f08fe8c) {
    if (iVar1 == -0x127a457e) {
      if (*(char *)(DAT_0093dec4 + 0x40) == '\0') {
        return;
      }
    }
    else if ((iVar1 == -0x41bc1245) && (*(char *)(DAT_0093dec4 + 0x40) != '\0')) {
      return;
    }
    piVar2 = *(int **)(param_2 + 0xc);
    if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, *(int *)(iVar1 + 0x28) != 0)) {
      FUN_0073d3c0(param_2,piVar2,param_3);
      if (DAT_00982b38 != 0) {
        FUN_004fb8f0(&local_2a0,&local_280);
        D3DXMatrixMultiply(local_250,param_3,DAT_00982d04);
        FUN_006be800(local_250,&local_2a0,&local_280);
        cVar4 = FUN_006d7a40(&local_2a0,&local_280);
        if (cVar4 == '\0') {
          return;
        }
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00504f70(local_210);
      }
      iStack_2bc = 0;
      iStack_2b4 = 0;
      iStack_2ac = -1;
      iStack_2b0 = 0;
      iVar7 = 0;
      iVar5 = 0;
      if (0 < *(int *)(iVar1 + 0x10)) {
        uStack_284 = param_5 & 4;
        iStack_2c4 = 0;
        do {
          iVar7 = *(int *)(*(int *)(iVar1 + 0x14) + 0x34 + iStack_2c4);
          puVar8 = (undefined4 *)(*(int *)(iVar1 + 0x14) + iStack_2c4);
          if (((uStack_284 != 0) || ((*(byte *)(puVar8 + 0xe) & 1) != 0)) ||
             (iVar5 = FUN_006cf2b0(puVar8,puVar8 + 3,param_3), iVar5 != 0)) {
            if (DAT_00982b38 != 0) {
              local_280 = *puVar8;
              uStack_27c = puVar8[1];
              uStack_278 = puVar8[2];
              local_2a0 = puVar8[3];
              uStack_29c = puVar8[4];
              uStack_298 = puVar8[5];
              D3DXMatrixMultiply(local_250,param_3,DAT_00982d04);
              FUN_006be800(local_250,&local_280,&local_2a0);
              cVar4 = FUN_006d7a40(&local_280,&local_2a0);
              if (cVar4 == '\0') goto LAB_006dad24;
            }
            if (*DAT_00982a20 == 4) {
              if (*(int *)(iVar7 + 4) == 4) {
                iVar7 = DAT_0093ded4;
              }
              iVar3 = *(int *)(iVar7 + 4);
              iVar5 = DAT_0093de98;
              if (iVar3 != 0) {
                if ((iVar3 == 3) || (iVar3 == 1)) goto LAB_006dabf6;
                iVar5 = iVar7;
                if (iVar3 == 5) {
                  iVar5 = DAT_0093de98;
                }
              }
            }
            else {
              iVar5 = iVar7;
              if (((*DAT_00982a20 != 0) && (iVar3 = *(int *)(iVar7 + 4), iVar3 != 4)) &&
                 ((iVar5 = DAT_0093de98, iVar3 != 0 && ((iVar3 == 3 || (iVar5 = iVar7, iVar3 == 1)))
                  ))) {
LAB_006dabf6:
                iVar5 = DAT_0093def0;
              }
            }
            if (((param_5 & 0x20000) != 0) &&
               ((*(int *)(iVar5 + 4) == 0 || (*(int *)(iVar5 + 4) == 8)))) {
              iVar5 = DAT_0093ded0;
            }
            iVar7 = piVar2[0xb];
            iStack_264 = *(int *)(iVar7 + 4 + (uint)*(byte *)(puVar8 + 6) * 8);
            iStack_260 = *(int *)(iVar7 + 4 + (uint)*(byte *)((int)puVar8 + 0x19) * 8);
            iStack_25c = *(int *)(iVar7 + 4 + (uint)*(byte *)((int)puVar8 + 0x1a) * 8);
            iStack_258 = *(int *)(iVar7 + 4 + (uint)*(byte *)((int)puVar8 + 0x1b) * 8);
            iStack_254 = *(int *)(iVar7 + 4 + (uint)*(byte *)(puVar8 + 7) * 8);
            if (((((((iStack_258 != 0 && iStack_25c != 0) && iStack_260 != 0) && iStack_254 != 0) &&
                   iStack_264 != 0) && (iVar7 = iVar5, *(int *)(iVar5 + 0x10) != 0)) ||
                (iVar7 = DAT_0093de78, *(int *)(iVar5 + 4) == 5)) &&
               (*(int *)(iStack_264 + 0x24) != DAT_00982d40)) {
              iStack_2bc = iStack_2bc + 1;
              if (*(int *)(iVar7 + 4) != iStack_2ac) {
                iStack_2b4 = iStack_2b4 + 1;
                iStack_2ac = *(int *)(iVar7 + 4);
              }
              if (*(byte *)((int)puVar8 + 0x1d) == 0xff) {
                uVar6 = FUN_004fca10();
              }
              else {
                uVar6 = *(undefined4 *)(piVar2[0xf] + 4 + (uint)*(byte *)((int)puVar8 + 0x1d) * 8);
              }
              if ((*(int *)(iVar7 + 4) == 4) && (param_4 == 0)) {
                param_4 = *(int *)(param_1 + 0x5c);
              }
              FUN_006e0ab0(puVar8,piVar2,param_5,iVar7,&iStack_264,param_3,param_4,uVar6,param_6);
            }
          }
LAB_006dad24:
          iStack_2b0 = iStack_2b0 + 1;
          iStack_2c4 = iStack_2c4 + 0x68;
          iVar7 = iStack_2bc;
          iVar5 = iStack_2b4;
        } while (iStack_2b0 < *(int *)(iVar1 + 0x10));
      }
      DAT_00982b90 = DAT_00982b90 + iVar7;
      DAT_00982b98 = DAT_00982b98 + iVar5;
      if (0 < iVar7) {
        _DAT_00982b94 = _DAT_00982b94 + 1;
      }
      if (iVar7 < 7) {
        (&DAT_009828a0)[iVar7] = (&DAT_009828a0)[iVar7] + 1;
      }
      else {
        _DAT_009828bc = _DAT_009828bc + 1;
      }
      if (iVar5 < 7) {
        *(int *)(&DAT_0093de38 + iVar5 * 4) = *(int *)(&DAT_0093de38 + iVar5 * 4) + 1;
        FUN_004fb710(local_210);
        return;
      }
      DAT_0093de54 = DAT_0093de54 + 1;
      FUN_004fb710(local_210);
    }
  }
  return;
}

