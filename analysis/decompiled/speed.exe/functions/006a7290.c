/* speed.exe 006a7290 FUN_006a7290; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004048c0 FUN_004048c0
 * calls 0068b8b0 FUN_0068b8b0
 * calls 00487690 FUN_00487690
 * calls 00698ea0 FUN_00698ea0
 * calls 00627400 FUN_00627400
 * calls 006211d0 FUN_006211d0
 * calls 0048c100 FUN_0048c100
 * calls 0068a2d0 FUN_0068a2d0
 * calls 007640a0 FUN_007640a0
 * calls 006e9660 FUN_006e9660
 */

void __thiscall FUN_006a7290(int param_1,undefined1 *param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 auStack_314 [24];
  undefined4 uStack_2b4;
  float *pfStack_2b0;
  undefined1 *puStack_2ac;
  undefined4 *puStack_2a8;
  undefined1 *puStack_2a4;
  undefined1 *puStack_2a0;
  undefined1 *puStack_29c;
  undefined1 *puStack_298;
  undefined1 local_278;
  undefined1 local_277;
  int local_274;
  int local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264 [12];
  undefined1 auStack_258 [20];
  undefined1 local_244 [112];
  undefined1 auStack_1d4 [16];
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_198;
  undefined4 local_194 [15];
  undefined4 uStack_158;
  undefined1 local_114 [264];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087cd30;
  local_c = ExceptionList;
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x74);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xec) + 0x78) - iVar1 >> 2 != 0)) {
    iVar1 = **(int **)(param_1 + 0x78);
    puStack_298 = (undefined1 *)0x6a72ea;
    ExceptionList = &local_c;
    local_274 = param_1;
    FUN_004048c0();
    puStack_298 = (undefined1 *)0x6a72f3;
    FUN_00487690();
    puStack_298 = (undefined1 *)0x6a72ff;
    FUN_00487690();
    iVar4 = *(int *)(param_1 + 0xec);
    piVar5 = *(int **)(iVar4 + 0x74);
    local_270 = iVar4 + 0x70;
    if (piVar5 != *(int **)(iVar4 + 0x78)) {
      piVar9 = (int *)(param_1 + 0x110);
      do {
        puStack_2a8 = (undefined4 *)*piVar5;
        local_26c = *(undefined4 *)(param_1 + 0x104);
        puStack_298 = &local_278;
        puStack_29c = local_264;
        puStack_2a0 = local_114;
        puStack_2a4 = param_2;
        local_278 = 0;
        local_277 = 0;
        local_268 = 3;
        puStack_2ac = (undefined1 *)0x6a7372;
        FUN_007640a0();
        piVar6 = (int *)*piVar9;
        if (piVar6 != piVar9) {
          do {
            if (((piVar6[0x11] & 1U) != 0) && ((piVar6[0x11] & 8U) == 0)) {
              puStack_298 = local_244;
              puStack_2a0 = (undefined1 *)0x6a73a0;
              puStack_29c = (undefined1 *)iVar1;
              cVar3 = FUN_0068b8b0();
              if (cVar3 != '\0') {
                puStack_2a0 = local_244;
                puStack_29c = local_114;
                puStack_2a4 = (undefined1 *)0x6a73bd;
                puStack_298 = puStack_2a0;
                cVar3 = FUN_0048c100();
                if (cVar3 != '\0') {
                  fVar2 = -local_198;
                  puStack_298 = (undefined1 *)0x6a73e1;
                  FUN_0068a2d0();
                  puStack_298 = (undefined1 *)0x6a73ea;
                  iVar4 = (**(code **)(*(int *)(param_1 + 0x48) + 4))();
                  uStack_158 = *(undefined4 *)(iVar4 + 8);
                  *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) | 8;
                  *(float *)(iVar1 + 0x10) = fStack_1c4 * fVar2 + *(float *)(iVar1 + 0x10);
                  *(float *)(iVar1 + 0x14) = fStack_1c0 * fVar2 + *(float *)(iVar1 + 0x14);
                  *(float *)(iVar1 + 0x18) = fStack_1bc * fVar2 + *(float *)(iVar1 + 0x18);
                  puStack_298 = (undefined1 *)piVar6[0x12];
                  puStack_29c = (undefined1 *)0x6a743b;
                  FUN_006e9660();
                  puStack_298 = &DAT_00988e80;
                  puStack_29c = auStack_258;
                  puStack_2a0 = local_264;
                  puStack_2a4 = local_114;
                  puStack_2a8 = local_194;
                  puStack_2ac = auStack_1d4;
                  pfStack_2b0 = &fStack_1c4;
                  uStack_4 = 0;
                  uStack_2b4 = 0x6a747c;
                  cVar3 = FUN_00698ea0();
                  uStack_4 = 0xffffffff;
                  puStack_298 = (undefined1 *)0x6a7494;
                  FUN_0045a430();
                  if (cVar3 != '\0') {
                    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) | 4;
                    puStack_298 = (undefined1 *)0x88;
                    puStack_29c = (undefined1 *)0x6a74aa;
                    iVar4 = FUN_00627400();
                    uStack_4 = 1;
                    if (iVar4 != 0) {
                      puVar7 = local_194;
                      puVar8 = auStack_314;
                      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar8 = *puVar7;
                        puVar7 = puVar7 + 1;
                        puVar8 = puVar8 + 1;
                      }
                      FUN_006211d0();
                      param_1 = local_274;
                    }
                    uStack_4 = 0xffffffff;
                  }
                }
              }
            }
            piVar6 = (int *)*piVar6;
            piVar9 = (int *)(param_1 + 0x110);
          } while (piVar6 != piVar9);
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != *(int **)(local_270 + 8));
    }
  }
  ExceptionList = local_c;
  return;
}

