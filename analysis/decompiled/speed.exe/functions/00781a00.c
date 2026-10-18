/* speed.exe 00781a00 FUN_00781a00; analysis pseudocode, not buildable source.
 * calls 0077a740 FUN_0077a740
 * calls 00766cb0 FUN_00766cb0
 * calls 007817b0 FUN_007817b0
 * calls 0041b250 FUN_0041b250
 * calls 0042cbf0 FUN_0042cbf0
 * calls 0077ae20 FUN_0077ae20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00781a00(char *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  undefined ***pppuVar12;
  undefined **ppuStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  uint uStack_1c;
  int iStack_18;
  bool bStack_14;
  undefined1 uStack_13;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00881fb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  uVar5 = (**(code **)(*param_2 + 0x50))();
  if (uVar5 != 0) {
    fVar11 = (float10)(**(code **)(*param_2 + 0x14))();
    if ((float10)_DAT_008b5a78 <= fVar11) {
      param_2 = (int *)(float)fVar11;
    }
    else {
      param_2 = (int *)0x3fc00000;
    }
    piStack_30 = (int *)0x0;
    uStack_2c = 0;
    iStack_28 = 0;
    ppuStack_34 = &PTR_FUN_00891594;
    uStack_4 = 0;
    FUN_0041b250(0x40);
    iVar2 = DAT_009b38a8;
    pppuVar12 = &ppuStack_34;
    uVar6 = (**(code **)(*piVar3 + 0x20))(param_2,pppuVar12);
    FUN_0077ae20(uVar6,param_2,pppuVar12);
    piVar10 = piStack_30;
    if (piStack_30 != piStack_30 + iStack_28) {
      do {
        piVar7 = *(int **)(*(int *)(iVar2 + 0x20) + *piVar10 * 4);
        if (piVar7 != (int *)0x0) {
          uStack_1c = (uint)*(byte *)((int)piVar7 + 9);
          uStack_24 = 1;
          iStack_18 = 0;
          uStack_13 = 0;
          uStack_10 = 0;
          if (uStack_1c != 0) {
            iStack_18 = *(ushort *)((int)piVar7 + 0xe) + 0x14 + (int)piVar7;
          }
          iVar1 = *piVar7;
          if (iVar1 != 0) {
            uStack_10 = **(undefined4 **)(iVar1 + 4);
          }
          bStack_14 = iVar1 != 0 || uStack_1c != 0;
          piStack_20 = piVar7;
          piVar7 = (int *)FUN_0077a740();
          while (piVar7 != (int *)0x0) {
            iVar1 = *piVar7;
            if (*(short *)(iVar1 + 0x1c) != *(short *)(param_1 + 0xc)) {
              *(short *)(iVar1 + 0x1c) = *(short *)(param_1 + 0xc);
              uVar8 = *(uint *)(iVar1 + 0x10) >> 8;
              if (((uVar8 & 1) != 0) &&
                 ((((uVar8 & 0x400) == 0 || (*param_1 != '\0')) && ((uVar5 & uVar8) != 0)))) {
                piVar7 = (int *)(**(code **)(*piVar3 + 4))();
                cVar4 = (**(code **)(*piVar7 + 0x28))();
                if (((cVar4 != '\0') || (-1 < (char)((uint)*(undefined4 *)(iVar1 + 0x10) >> 8))) &&
                   (cVar4 = FUN_00766cb0(piVar3,iVar1,param_3), cVar4 != '\0')) {
                  iVar9 = (**(code **)(*piVar3 + 4))();
                  FUN_007817b0(iVar1,*(undefined4 *)(iVar9 + 8));
                }
              }
            }
            piVar7 = (int *)FUN_0077a740();
          }
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != piStack_30 + iStack_28);
    }
    uStack_4 = 0xffffffff;
    FUN_0042cbf0();
  }
  ExceptionList = pvStack_c;
  return;
}

