/* speed.exe 00754cf0 FUN_00754cf0; analysis pseudocode, not buildable source.
 * calls 006227d0 FUN_006227d0
 * calls 005fba00 FUN_005fba00
 * calls 007a1070 FUN_007a1070
 * calls 00627400 FUN_00627400
 * calls 005ddec0 FUN_005ddec0
 * calls 0078eba0 FUN_0078eba0
 * calls 0078a540 FUN_0078a540
 * calls 00754c30 FUN_00754c30
 * calls 004b9080 FUN_004b9080
 * calls 0078a4b0 FUN_0078a4b0
 * calls 0078f8a0 FUN_0078f8a0
 * calls 005faa20 FUN_005faa20
 * calls 00471b60 FUN_00471b60
 * calls 005dc280 FUN_005dc280
 * calls 0078a310 FUN_0078a310
 */

void __thiscall FUN_00754cf0(int param_1,undefined1 param_2,char param_3,uint param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  int local_41c;
  undefined1 local_418 [1036];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880ef2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078f8a0();
  FUN_0078a310(*(undefined1 *)(param_1 + 0x1148),8);
  FUN_0078a310(param_2,8);
  if ((param_3 == '\0') && (param_4 != 0xb)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  FUN_0078a310(uVar1,8);
  FUN_0078a310(param_4 & 0xff,8);
  FUN_0078a4b0(param_1 + 0x122c,0x20);
  iVar3 = FUN_00754c30(&local_41c);
  if (iVar3 == 0) {
    FUN_0078a310(0,1);
  }
  else {
    FUN_0078a310(1,1);
    fVar7 = (float10)FUN_005ddec0();
    FUN_0078a540((float)fVar7);
    local_41c = *(int *)(iVar3 + 0x28);
    FUN_0078a540((float)local_41c);
    FUN_0078a540(*(undefined4 *)(iVar3 + 0x18));
    FUN_0078a540(*(undefined4 *)(iVar3 + 0xfc));
    FUN_0078a540(*(undefined4 *)(iVar3 + 0x100));
    FUN_0078a540(*(undefined4 *)(iVar3 + 0x108));
    FUN_0078a540(*(undefined4 *)(iVar3 + 0x124));
    FUN_0078a540(*(undefined4 *)(iVar3 + 0x128));
    FUN_0078a310(*(undefined4 *)(iVar3 + 0x114),0x20);
    if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (iVar4 = FUN_005faa20(), iVar4 != 1)) {
      puVar5 = (undefined4 *)(iVar3 + 0x13c);
      iVar3 = 4;
      do {
        local_41c = puVar5[-4];
        FUN_0078a540(local_41c);
        FUN_0078a310(*puVar5,0x20);
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    else {
      iVar6 = 0;
      iVar4 = FUN_005fba00();
      if (0 < iVar4) {
        do {
          fVar7 = (float10)FUN_005dc280(iVar6,*(undefined4 *)(iVar3 + 0xc),0);
          FUN_0078a540((float)fVar7);
          iVar6 = iVar6 + 1;
          iVar4 = FUN_005fba00();
        } while (iVar6 < iVar4);
      }
    }
  }
  cVar2 = FUN_0078eba0();
  if (cVar2 != '\0') {
    FUN_007a1070(local_418);
  }
  if (*(int *)(param_1 + 0x1144) != 3) {
    *(undefined4 *)(param_1 + 0x1144) = 3;
  }
  FUN_00471b60(1,0x3f400000);
  FUN_004b9080(1,0xf,"CinemSlow");
  local_41c = FUN_00627400(0x44);
  local_4 = 0;
  if (local_41c != 0) {
    FUN_006227d0(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                 DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,0,0,
                 0x9fe1ee17);
  }
  DAT_008ee398 = 1;
  ExceptionList = local_c;
  return;
}

