/* speed.exe 007c3690 FUN_007c3690; analysis pseudocode, not buildable source.
 * calls 0045be30 FUN_0045be30
 * calls 005814e0 FUN_005814e0
 * calls 007c32e0 FUN_007c32e0
 * calls 007becc0 FUN_007becc0
 * calls 00591e90 FUN_00591e90
 * calls 005910e0 FUN_005910e0
 * calls 00739a70 FUN_00739a70
 * calls 007a93e0 FUN_007a93e0
 * calls 007c3430 FUN_007c3430
 * calls 007c3010 FUN_007c3010
 * calls 00666400 FUN_00666400
 * calls 00516b50 FUN_00516b50
 * calls 0045a430 FUN_0045a430
 * calls 007c33c0 FUN_007c33c0
 * calls 00666390 FUN_00666390
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0056f100 FUN_0056f100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007c3690(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_360;
  undefined *local_35c;
  undefined **local_358;
  undefined4 local_354;
  undefined1 auStack_350 [20];
  undefined1 local_33c [32];
  undefined4 auStack_31c [196];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00883bab;
  local_c = ExceptionList;
  if (DAT_009b9e8c == '\0') {
    local_35c = &DAT_00905e40;
    local_358 = &PTR_DAT_00905ea0;
    ExceptionList = &local_c;
    uVar4 = FUN_007c3430(&local_35c,&local_35c);
    FUN_007c33c0(0xcda340f8,uVar4);
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x20;
    DAT_009b9e8c = '\x01';
    uVar4 = 0x9b35fe3a;
    local_360 = 0xeff164cb;
    while( true ) {
      uVar2 = DAT_008fbd1c;
      uVar6 = DAT_008fbd18;
      pcVar1 = DAT_008fbc90;
      local_354 = uVar4;
      if ((DAT_008fbc90 == (code *)0x0) && (DAT_008fbc94 == 0)) {
        iVar5 = FUN_007c3010(uVar4,0xeff164cb);
      }
      else {
        FUN_007becc0(&local_354,&local_360);
        iVar5 = (*pcVar1)(uVar6,uVar2,local_33c,(int)local_33c >> 0x1f);
      }
      if (iVar5 == -0x64ca01c6) break;
      iVar5 = FUN_00666400(uVar4,uVar4);
      (&DAT_009b9e3c)[iVar5] = 0;
      uVar4 = FUN_00666390(uVar4,0x1974ff09);
    }
    uVar6 = FUN_007c3430(0x21,0x21);
    FUN_007c33c0(0x6fe3e0fc,uVar6);
    uVar4 = FUN_007c32e0(uVar4,0x1974ff09);
    *param_1 = param_2;
    param_1[0x70] = 0;
    param_1[1] = param_3;
    puVar7 = (undefined4 *)FUN_0056f100(*(undefined1 *)(param_3 + 0x10));
    iVar5 = param_1[1];
    puVar9 = param_1 + 7;
    for (iVar8 = 0x66; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_004e4ea0(*(undefined4 *)(iVar5 + 8),0,0);
    uStack_4 = 0;
    FUN_005814e0(*(undefined4 *)param_1[1],auStack_350);
    FUN_0045be30(auStack_350);
    FUN_00739a70(0xffffffff,0,0,0);
    FUN_005910e0(*(undefined4 *)param_1[1],0,auStack_31c);
    cVar3 = FUN_00516b50("GarageMain.fng");
    if (cVar3 == '\0') {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00591e90("GarageMain.fng");
    }
    puVar7 = auStack_31c;
    puVar9 = &DAT_009ba088;
    for (iVar8 = 0xc4; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    _DAT_009b9e48 = 1;
    if (iVar5 != 0) {
      FUN_007a93e0(&DAT_009ba088,1);
    }
    param_1[0x6f] = 0;
    FUN_00666390(uVar4,0x6fe3e0fc);
    uVar4 = FUN_007c3430(3,3);
    FUN_007c33c0(0x98667b3e,uVar4);
    uStack_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return;
}

