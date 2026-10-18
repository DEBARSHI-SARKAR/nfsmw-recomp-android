/* speed.exe 00733f40 FUN_00733f40; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 * calls 0078a310 FUN_0078a310
 * calls 0078a540 FUN_0078a540
 * calls 0078a700 FUN_0078a700
 * calls 0078a290 FUN_0078a290
 * calls 005ca910 FUN_005ca910
 */

void __thiscall FUN_00733f40(undefined4 *param_1,undefined4 param_2,byte param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 local_40 [32];
  float local_20;
  undefined4 local_18;
  
  *(byte *)((int)param_1 + 0x73) = param_3;
  FUN_0078a540(param_1[0x1b]);
  uVar5 = DAT_009b15b4;
  uVar3 = FUN_0078a290(param_4);
  FUN_0078a310(uVar3,uVar5);
  FUN_0078a310(*(undefined1 *)(param_1 + 0x1c),1);
  if ((param_3 & 1) != 0) {
    if ((*(char *)(param_1 + 0x1c) == '\0') || ((param_3 & 0x20) != 0)) {
      uVar5 = DAT_009b23e0;
      uVar3 = FUN_0078a700(param_1[0x15]);
      FUN_0078a310(uVar3,uVar5);
    }
    fVar2 = DAT_009b23e8;
    fVar1 = DAT_009b23e4;
    param_2 = (float)param_1[8];
    if (DAT_009b23e8 <= (float)param_1[8]) {
      param_2 = DAT_009b23e8;
    }
    if (param_2 < DAT_009b23e4) {
      param_2 = DAT_009b23e4;
    }
    uVar5 = DAT_009b23e0;
    uVar3 = FUN_0078a700(param_2);
    FUN_0078a310(uVar3,uVar5);
    param_2 = (float)param_1[9];
    if (fVar2 <= (float)param_1[9]) {
      param_2 = fVar2;
    }
    if (param_2 < fVar1) {
      param_2 = fVar1;
    }
    uVar5 = DAT_009b23e0;
    uVar3 = FUN_0078a700(param_2);
    FUN_0078a310(uVar3,uVar5);
    _param_4 = (float)param_1[10];
    if (fVar2 <= (float)param_1[10]) {
      _param_4 = fVar2;
    }
    if (_param_4 < fVar1) {
      _param_4 = fVar1;
    }
    uVar5 = DAT_009b23e0;
    uVar3 = FUN_0078a700(_param_4);
    FUN_0078a310(uVar3,uVar5);
  }
  if ((param_3 & 2) != 0) {
    if ((*(char *)(param_1 + 0x1c) != '\0') || ((param_3 & 0x20) != 0)) {
      uVar5 = DAT_009b252c;
      uVar3 = FUN_0078a700(param_1[0x10]);
      FUN_0078a310(uVar3,uVar5);
      uVar5 = DAT_009b252c;
      uVar3 = FUN_0078a700(param_1[0x12]);
      FUN_0078a310(uVar3,uVar5);
    }
    uVar5 = DAT_009b252c;
    uVar3 = FUN_0078a700(param_1[0x11]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b1ffc;
    uVar3 = FUN_0078a700(param_1[4]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b1ffc;
    uVar3 = FUN_0078a700(param_1[5]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b1ffc;
    uVar3 = FUN_0078a700(param_1[6]);
    FUN_0078a310(uVar3,uVar5);
  }
  if ((param_3 & 4) != 0) {
    if ((*(char *)(param_1 + 0x1c) == '\0') && ((param_3 & 0x20) == 0)) {
      FUN_005ca910(param_1 + 0xc,local_40);
      fVar4 = (float10)FUN_005cb5d0(local_18,-local_20);
      _param_4 = (float)fVar4;
      uVar5 = DAT_009b2294;
    }
    else {
      uVar5 = DAT_009b2148;
      uVar3 = FUN_0078a700(param_1[0xc]);
      FUN_0078a310(uVar3,uVar5);
      uVar5 = DAT_009b2148;
      uVar3 = FUN_0078a700(param_1[0xd]);
      FUN_0078a310(uVar3,uVar5);
      uVar5 = DAT_009b2148;
      uVar3 = FUN_0078a700(param_1[0xe]);
      FUN_0078a310(uVar3,uVar5);
      _param_4 = (float)param_1[0xf];
      uVar5 = DAT_009b2148;
    }
    uVar3 = FUN_0078a700(_param_4);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b1c18;
    uVar3 = FUN_0078a700(*param_1);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b1d64;
    uVar3 = FUN_0078a700(param_1[1]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b1eb0;
    uVar3 = FUN_0078a700(param_1[2]);
    FUN_0078a310(uVar3,uVar5);
  }
  if ((param_3 & 8) != 0) {
    uVar5 = DAT_009b2148;
    uVar3 = FUN_0078a700(param_1[3]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b2678;
    uVar3 = FUN_0078a700(param_1[0x18]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b2678;
    uVar3 = FUN_0078a700(param_1[7]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b2678;
    uVar3 = FUN_0078a700(param_1[0xb]);
    FUN_0078a310(uVar3,uVar5);
    uVar5 = DAT_009b16f8;
    uVar3 = FUN_0078a290(*(undefined1 *)((int)param_1 + 0x72));
    FUN_0078a310(uVar3,uVar5);
    FUN_0078a310(*(undefined1 *)((int)param_1 + 0x71),1);
  }
  return;
}

