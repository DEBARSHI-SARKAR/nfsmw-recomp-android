/* speed.exe 0072c070 FUN_0072c070; analysis pseudocode, not buildable source.
 * calls 00661c80 FUN_00661c80
 * calls 00727c40 FUN_00727c40
 * calls 00460dd0 FUN_00460dd0
 * calls 00460c70 FUN_00460c70
 * calls 00724360 FUN_00724360
 * calls 00727da0 FUN_00727da0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0072c070(int *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  bVar6 = (char)param_1[0x2c] != param_3;
  if (bVar6) {
    *(char *)(param_1 + 0x2c) = param_3;
  }
  iVar3 = FUN_00460dd0(param_1 + 0x1c,param_2);
  if (iVar3 == 0) {
    if (!bVar6) goto LAB_0072c0ba;
  }
  else {
    FUN_00460c70(param_1 + 0x1c,param_2);
  }
  FUN_00727da0();
LAB_0072c0ba:
  if (*(char *)((int)param_1 + 0xb1) != '\0') {
    FUN_00661c80();
  }
  FUN_00727c40();
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((int)param_1 + 0xdd) = 0;
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((int)param_1 + 0x141) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  _param_3 = 0;
  if (param_1[1] < 1) {
    _DAT_009a3a2c = 0;
    return;
  }
  do {
    iVar1 = *param_1;
    iVar4 = FUN_00724360((int)*(short *)(iVar1 + 8 + iVar3),&DAT_008a87a4);
    puVar5 = DAT_009a3b50;
    if ((DAT_00903164 <= iVar4 % 100) && (iVar4 % 100 < DAT_00903164 * 2)) {
      iVar4 = iVar4 - DAT_00903164;
    }
    for (; puVar2 = DAT_009a3b58, (undefined4 **)puVar5 != &DAT_009a3b50;
        puVar5 = (undefined4 *)*puVar5) {
      if (*(short *)(puVar5 + 2) == iVar4) goto LAB_0072c1e4;
    }
    while (puVar5 = puVar2, (undefined4 **)puVar5 != &DAT_009a3b58) {
      if (*(short *)(puVar5 + 2) == iVar4) goto LAB_0072c1e4;
      puVar2 = (undefined4 *)*puVar5;
    }
    puVar5 = (undefined4 *)0x0;
LAB_0072c1e4:
    *(undefined4 **)(iVar1 + iVar3 + 0x58) = puVar5;
    _param_3 = _param_3 + 1;
    iVar3 = iVar3 + 0x5c;
    if (param_1[1] <= _param_3) {
      _DAT_009a3a2c = 0;
      return;
    }
  } while( true );
}

