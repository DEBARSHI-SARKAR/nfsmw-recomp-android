/* speed.exe 0067c310 FUN_0067c310; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00672e80 FUN_00672e80
 * calls 0045be30 FUN_0045be30
 * calls 00679660 FUN_00679660
 * calls 0045a5d0 FUN_0045a5d0
 * calls 005c8150 FUN_005c8150
 * calls 007c4b80 FUN_007c4b80
 * calls 00678730 FUN_00678730
 * calls 00401ae0 FUN_00401ae0
 * calls 00403c30 FUN_00403c30
 * calls 006796c0 FUN_006796c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0067c310(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  byte local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ae28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00403c30(param_1);
  local_4 = 0;
  if ((local_10 & 1) != 0) {
    FUN_0045a5d0();
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  cVar4 = FUN_00679660(local_20,&local_2c);
  if ((cVar4 == '\0') || (cVar4 = FUN_006796c0(local_20,&local_38), cVar4 == '\0')) {
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 0;
  }
  fVar8 = (float10)FUN_00401ae0(param_2[2],local_24,local_30);
  fVar1 = (float)fVar8;
  fVar8 = (float10)FUN_00401ae0(*param_2,local_2c,local_38);
  fVar2 = (float)fVar8;
  fVar8 = (float10)FUN_00401ae0(param_2[1],local_28,local_34);
  fVar3 = (float)fVar8;
  iVar7 = 0;
  do {
    switch(iVar7) {
    case 0:
    case 2:
      local_4c = (fVar3 + fVar2) * _DAT_008933d4;
      break;
    case 1:
      local_4c = fVar3;
      break;
    case 3:
    case 4:
      local_4c = (fVar2 + fVar1) * _DAT_008933d4;
      break;
    case 5:
    case 6:
      local_4c = fVar1;
      break;
    default:
      local_4c = (fVar3 + fVar2 + fVar1) * _DAT_00894c30;
    }
    if (_DAT_0089096c <= local_4c) {
      local_4c = 1.0;
LAB_0067c490:
      if ((_DAT_00890968 < local_4c) && (iVar5 = FUN_00672e80(param_1,iVar7), 0 < iVar5)) {
        FUN_005c8150((float)iVar5 * local_4c);
        uVar6 = FUN_007c4b80();
        cVar4 = FUN_00678730(local_20,iVar7,uVar6,local_4c);
        if (cVar4 == '\0') {
          local_4 = 0xffffffff;
          FUN_0045a430();
          ExceptionList = local_c;
          return 0;
        }
      }
    }
    else if (_DAT_00890968 <= local_4c) goto LAB_0067c490;
    iVar7 = iVar7 + 1;
    if (6 < iVar7) {
      FUN_0045be30(local_20);
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 1;
    }
  } while( true );
}

