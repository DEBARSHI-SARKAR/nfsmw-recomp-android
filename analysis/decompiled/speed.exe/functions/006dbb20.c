/* speed.exe 006dbb20 FUN_006dbb20; analysis pseudocode, not buildable source.
 * calls 007e7d64 D3DXVec4Transform
 * calls 006d3b80 FUN_006d3b80
 * calls 00725570 FUN_00725570
 * calls 006d2840 FUN_006d2840
 * calls 0045f590 FUN_0045f590
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006dbb20(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int *piStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  float fStack_54;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fStack_54 = 1.0077218e-38;
  iVar2 = FUN_00725570();
  if ((iVar2 != 0) || (fVar1 = _DAT_00982c74 * _DAT_00895074, DAT_008f9b28 == '\0')) {
    fVar1 = _DAT_00890968;
  }
  if (_DAT_00899dd0 < ABS(_DAT_00982c6c - fVar1)) {
    if (fVar1 <= _DAT_00982c6c) {
      _DAT_00982c6c = _DAT_00982c6c - _DAT_008f9b24;
    }
    else {
      _DAT_00982c6c = _DAT_008f9b20 + _DAT_00982c6c;
    }
  }
  local_20 = *(undefined4 *)((int)DAT_00919690 + 0x200);
  fStack_54 = DAT_00919690;
  local_1c = *(undefined4 *)((int)DAT_00919690 + 0x204);
  local_18 = *(undefined4 *)((int)DAT_00919690 + 0x208);
  puStack_5c = &local_20;
  local_14 = 0;
  puStack_60 = (undefined1 *)0x6dbc0a;
  puStack_58 = puStack_5c;
  D3DXVec4Transform();
  if (_DAT_008910cc < (float)puStack_58) {
    puStack_60 = auStack_2c;
    puStack_64 = auStack_3c;
    uStack_68 = 0x6dbc2a;
    FUN_0045f590();
  }
  fStack_54 = DAT_008f9b10;
  if ((float)puStack_58 < DAT_008f9b10 == ((float)puStack_58 == DAT_008f9b10)) {
    fVar1 = _DAT_0089096c;
    if ((float)puStack_58 < DAT_008f9b14) {
      fVar1 = ((float)puStack_58 - DAT_008f9b10) / (DAT_008f9b14 - DAT_008f9b10);
    }
    puStack_58 = (undefined4 *)(_DAT_00982c6c * (float)_DAT_008afed0 + fVar1);
    if (DAT_008f9b18 < (float)puStack_58) {
      puStack_58 = (undefined4 *)DAT_008f9b18;
    }
    if (_DAT_00899dd0 <= (float)puStack_58) {
      puStack_60 = (undefined1 *)0x0;
      puStack_64 = (undefined1 *)0x0;
      uStack_68 = DAT_0093de60;
      uStack_6c = 0;
      fStack_70 = DAT_00982a28;
      piStack_74 = DAT_00982bdc;
      (**(code **)(*DAT_00982bdc + 0x88))();
      fStack_54 = 0.25;
      FUN_006d2840(DAT_0093de64,DAT_0093def8,4,&fStack_54,&puStack_64);
      puStack_64 = (undefined1 *)((float)puStack_64 * (float)_DAT_00897a40);
      puStack_60 = (undefined1 *)((float)puStack_60 * (float)_DAT_00897a40);
      puStack_5c = (undefined4 *)((float)puStack_5c * (float)_DAT_00897a40);
      puStack_58 = (undefined4 *)((float)puStack_58 * (float)_DAT_00897a40);
      FUN_006d2840(DAT_0093de60,DAT_0093defc,4,&fStack_54,&puStack_64);
      if (_DAT_0089096c < fStack_70) {
        fStack_70 = 1.0;
      }
      uVar3 = FUN_007c4b80();
      (**(code **)(*DAT_00982bdc + 0xe4))
                (DAT_00982bdc,0xc1,((uVar3 << 8 | uVar3) << 8 | uVar3) << 8 | uVar3);
      if (DAT_00982b24 != '\0') {
        FUN_006d3b80(DAT_00982a28,1,&DAT_0093def8,&piStack_74,1,8,7,0xffffffff);
        return;
      }
      FUN_006d3b80(DAT_00982a28,1,&DAT_0093def8,&piStack_74,1,0xe,0xf,0xffffffff);
    }
  }
  return;
}

