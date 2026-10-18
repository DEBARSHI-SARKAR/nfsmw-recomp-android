/* speed.exe 00597db0 FUN_00597db0; analysis pseudocode, not buildable source.
 * calls 005fc030 FUN_005fc030
 * calls 0056e560 FUN_0056e560
 * calls 005252d0 FUN_005252d0
 * calls 00546400 FUN_00546400
 * calls 0056e010 FUN_0056e010
 * calls 00527d40 FUN_00527d40
 * calls 005fba00 FUN_005fba00
 * calls 005fb920 FUN_005fb920
 * calls 00524850 FUN_00524850
 * calls 00515b90 FUN_00515b90
 * calls 0056e090 FUN_0056e090
 * calls 007c4b80 FUN_007c4b80
 * calls 0056bb80 FUN_0056bb80
 * calls 006022d0 FUN_006022d0
 * calls 005251a0 FUN_005251a0
 * calls 00586290 FUN_00586290
 * calls 005dca40 FUN_005dca40
 * calls 00573140 FUN_00573140
 * calls 005fab40 FUN_005fab40
 * calls 00652ad0 _malloc
 * calls 0055a280 FUN_0055a280
 * calls 005faa20 FUN_005faa20
 * calls 005fb850 FUN_005fb850
 * calls 00525220 FUN_00525220
 * calls 006547a0 FUN_006547a0
 * calls 0056bc10 FUN_0056bc10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00597db0(undefined4 *param_1,float param_2)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  float10 fVar12;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872d2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0fbc;
  uVar7 = *(undefined4 *)((int)param_2 + 8);
  param_1[0xb] = uVar7;
  param_1[0xc] = 0;
  local_4 = 0;
  uVar5 = FUN_006022d0(uVar7);
  uVar7 = param_1[4];
  uVar6 = FUN_005faa20();
  uVar6 = FUN_0056e090(uVar6);
  uVar7 = FUN_005251a0(uVar7,0xad9e232a,uVar6);
  FUN_00515b90(uVar7);
  uVar7 = param_1[4];
  uVar6 = FUN_005faa20();
  uVar6 = FUN_0056e010(uVar6);
  FUN_00525220(uVar7,0xa01b9361,uVar6);
  uVar7 = param_1[4];
  uVar6 = FUN_0056e560("TRACKNAME_",uVar5);
  FUN_00525220(uVar7,0xf601f2d4,uVar6);
  uVar7 = param_1[4];
  uVar6 = FUN_005fba00();
  FUN_005252d0(uVar7,0x644ab208,&DAT_0089d764,uVar6);
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    iVar8 = FUN_0056bb80();
    if (iVar8 == 0) {
      iVar8 = FUN_0056bb80();
    }
    param_2 = 1000.0;
  }
  else {
    iVar8 = FUN_0056bb80();
    if (iVar8 == 0) {
      iVar8 = FUN_0056bb80();
    }
    param_2 = 1609.34;
  }
  uVar7 = param_1[4];
  fVar12 = (float10)FUN_005fb850(iVar8);
  FUN_005252d0(uVar7,0xbce13923,"%$0.1f %s",(double)(fVar12 / (float10)param_2));
  cVar4 = FUN_005fc030();
  FUN_00525220(param_1[4],0x762f1d7a,(-(uint)(cVar4 != '\0') & 0xee0bb002) + 0x73c615a3);
  uVar7 = FUN_005fab40();
  iVar8 = FUN_005dca40(uVar7);
  iVar9 = FUN_005faa20();
  if (iVar9 != 0) {
    iVar9 = FUN_005faa20();
    if (iVar9 != 1) {
      iVar9 = FUN_005faa20();
      if (iVar9 != 2) {
        iVar9 = FUN_005faa20();
        if (iVar9 != 3) {
          iVar9 = FUN_005faa20();
          if (iVar9 != 4) {
            uVar7 = param_1[4];
            uVar6 = FUN_0056bc10(0x472aa00a);
            FUN_005252d0(uVar7,0x8fd41bb4,&DAT_008941f8,uVar6);
            goto LAB_00597fe3;
          }
        }
      }
    }
  }
  FUN_007c4b80();
  FUN_006547a0(local_4c,0);
  FUN_005252d0(param_1[4],0x8fd41bb4,&DAT_008941f8,local_4c);
LAB_00597fe3:
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    iVar9 = FUN_0056bb80();
    if (iVar9 == 0) {
      iVar9 = FUN_0056bb80();
    }
    uVar1 = *(ushort *)(iVar8 + 0xe);
    iVar10 = FUN_00527d40();
    uVar2 = *(ushort *)(iVar8 + 0xc);
    param_2 = ((float)uVar1 / (float)iVar10) * _DAT_0089b050;
    iVar8 = FUN_00527d40();
    fVar3 = ((float)uVar2 / (float)iVar8) * _DAT_0089b050;
  }
  else {
    iVar9 = FUN_0056bb80();
    if (iVar9 == 0) {
      iVar9 = FUN_0056bb80();
    }
    uVar1 = *(ushort *)(iVar8 + 0xe);
    iVar10 = FUN_00527d40();
    uVar2 = *(ushort *)(iVar8 + 0xc);
    param_2 = ((float)uVar1 / (float)iVar10) * _DAT_008967e0;
    iVar8 = FUN_00527d40();
    fVar3 = ((float)uVar2 / (float)iVar8) * _DAT_008967e0;
  }
  FUN_005252d0(param_1[4],0x35d1ab83,"%$0.0f %s",(double)param_2,iVar9);
  FUN_005252d0(param_1[4],0xde9145fb,"%$0.0f %s",(double)fVar3,iVar9);
  uVar7 = param_1[4];
  fVar12 = (float10)FUN_005fb920();
  FUN_005252d0(uVar7,0x45276f1f,"%$0.0f",(double)fVar12);
  uVar7 = param_1[4];
  uVar6 = FUN_00573140("TRACK_MAP");
  uVar7 = FUN_00524850(uVar7,uVar6);
  param_1[0xd] = uVar7;
  pvVar11 = _malloc(0xd0);
  local_4._0_1_ = 1;
  if (pvVar11 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0055a280();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0xc] = uVar7;
  FUN_00546400(uVar5,param_1[0xd],0,0);
  ExceptionList = local_c;
  return param_1;
}

