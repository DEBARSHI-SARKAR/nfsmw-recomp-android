/* speed.exe 005f9480 FUN_005f9480; analysis pseudocode, not buildable source.
 * calls 0060e370 FUN_0060e370
 * calls 00452430 FUN_00452430
 * calls 00454810 FUN_00454810
 * calls 00617f80 FUN_00617f80
 * calls 005ed960 FUN_005ed960
 * calls 00605ba0 FUN_00605ba0
 * calls 00605a60 FUN_00605a60
 * calls 005f2530 FUN_005f2530
 * calls 005e66b0 FUN_005e66b0
 * calls 006269b0 FUN_006269b0
 * calls 005f9270 FUN_005f9270
 * calls 00614e00 FUN_00614e00
 * calls 005cc240 FUN_005cc240
 */

void __fastcall FUN_005f9480(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  short sStack_2;
  
  uVar3 = FUN_00452430();
  piVar4 = (int *)FUN_005ed960(uVar3);
  if (piVar4 != (int *)0x0) {
    bVar10 = *(int *)(param_1 + 0x38) == 0;
    if (bVar10) {
      FUN_005f9270();
    }
    iVar9 = piVar4[1];
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      piVar1 = *(int **)(param_1 + 0x34);
      piVar2 = (int *)*piVar1;
      while (piVar2 != piVar1) {
        uVar3 = piVar2[3];
        puVar5 = (undefined4 *)FUN_00454810(0x3e225ec1,0);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_006269b0(4);
        }
        iVar6 = FUN_005cc240(*puVar5);
        if (iVar7 == iVar6) {
          iVar7 = FUN_00454810(0x3e225ec1,0);
          if (iVar7 == 0) {
            FUN_006269b0(4);
          }
          *(undefined4 *)(param_1 + 0x28) = uVar3;
          break;
        }
        FUN_005e66b0();
        piVar1 = *(int **)(param_1 + 0x34);
      }
    }
    sStack_2 = (short)((uint)iVar9 >> 0x10);
    if (sStack_2 != 0) {
      uVar3 = *DAT_0091e0c8;
      pcVar8 = (char *)FUN_00454810(0xe4542e9b,0);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)FUN_006269b0(1);
      }
      iVar9 = FUN_00617f80(uVar3,piVar4 + 2,*pcVar8 == '\0');
      if (iVar9 != 0) {
        FUN_00614e00(uVar3,**(undefined4 **)(param_1 + 0xc));
        FUN_00605ba0(uVar3,0xfffffffe);
        FUN_0060e370(uVar3,0xffffd8f0);
        FUN_00605a60(uVar3,0xfffffffe);
        *(undefined1 *)(param_1 + 0x3d) = 1;
      }
    }
    if (bVar10) {
      FUN_005f2530(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4));
      *(int *)(*(int *)(param_1 + 0x34) + 4) = *(int *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(int *)(*(int *)(param_1 + 0x34) + 8) = *(int *)(param_1 + 0x34);
    }
  }
  return;
}

