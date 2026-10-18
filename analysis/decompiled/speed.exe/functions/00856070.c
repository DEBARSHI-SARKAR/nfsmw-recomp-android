/* speed.exe 00856070 FUN_00856070; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b110 FUN_0084b110
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __fastcall
FUN_00856070(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4,undefined1 param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *unaff_EBX;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int local_44c;
  undefined2 local_448;
  undefined2 local_446;
  undefined3 local_444;
  undefined1 uStack_441;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438 [2];
  undefined1 local_430;
  undefined1 local_42f;
  undefined1 local_428;
  undefined1 local_427;
  undefined1 local_426;
  undefined1 local_425;
  byte local_424 [12];
  DWORD local_418;
  char local_414 [1032];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  if (unaff_EBX != (undefined4 *)0x0) {
    if ((int)param_4 < 0) {
      param_4 = param_3;
      do {
        cVar1 = *param_4;
        param_4 = param_4 + 1;
      } while (cVar1 != '\0');
      param_4 = param_4 + (1 - (int)(param_3 + 1));
    }
    iVar6 = unaff_EBX[1];
    uVar2 = (undefined1)((uint)param_2 >> 8);
    uVar3 = (undefined1)((uint)param_2 >> 0x10);
    local_446 = 0;
    local_440 = 0;
    local_43c = 0;
    uVar4 = (undefined1)((uint)param_2 >> 0x18);
    puVar11 = local_438;
    for (iVar7 = 0x109; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_430 = *(undefined1 *)(unaff_EBX + 0xe);
    unaff_EBX[1] = iVar6 + 1;
    local_424[7] = *(byte *)(unaff_EBX + 1);
    local_424[6] = (byte)((uint)(iVar6 + 1) >> 8);
    local_425 = (undefined1)param_2;
    _local_444 = CONCAT13(local_425,CONCAT21(CONCAT11(uVar2,uVar3),uVar4));
    local_448 = 2;
    local_438[0]._0_1_ = 0x45;
    local_42f = 1;
    local_424[0] = 8;
    local_424[4] = param_5;
    local_424[5] = 0;
    if (0x400 < (int)param_4) {
      param_4 = (char *)0x400;
    }
    pcVar12 = local_414;
    for (uVar8 = (uint)param_4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar8 = (uint)param_4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar12 = *param_3;
      param_3 = param_3 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar10 = (uint)(param_4 + 3) & 0x7ffc;
    local_424[8] = 0x73;
    local_424[9] = 0x50;
    local_424[10] = 0x53;
    local_424[0xb] = 0x67;
    local_428 = uVar4;
    local_427 = uVar3;
    local_426 = uVar2;
    local_418 = GetTickCount();
    uVar8 = uVar10 + 0x10;
    uVar9 = 0;
    pbVar5 = local_424;
    if (1 < uVar8) {
      local_44c = (uVar10 + 0xe >> 1) + 1;
      uVar8 = uVar8 + local_44c * -2;
      do {
        uVar9 = uVar9 + (uint)*pbVar5 * 0x100 + (uint)pbVar5[1];
        pbVar5 = pbVar5 + 2;
        local_44c = local_44c + -1;
      } while (local_44c != 0);
    }
    if (0 < (int)uVar8) {
      uVar9 = uVar9 + (uint)*pbVar5 * 0x100;
    }
    uVar8 = (uVar9 >> 0x10) + (uVar9 & 0xffff);
    uVar8 = ~((uVar8 >> 0x10) + (uVar8 & 0xffff));
    local_424[3] = (byte)uVar8;
    local_424[2] = (byte)(uVar8 >> 8);
    iVar6 = FUN_0084b110(*unaff_EBX,local_438,uVar10 + 0x24,0,&local_448,0x10);
    if (-1 < iVar6) {
      return unaff_EBX[1];
    }
  }
  return 0xffffffff;
}

