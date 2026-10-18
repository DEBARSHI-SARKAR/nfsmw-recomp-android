/* speed.exe 004307c0 FUN_004307c0; analysis pseudocode, not buildable source.
 * calls 004306d0 FUN_004306d0
 * calls 00727480 FUN_00727480
 * calls 004108c0 FUN_004108c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004307c0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [48];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  *(undefined4 *)(param_1 + 0x39c) = 0x3f000000;
  if (((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 1)) &&
     (*(int *)(DAT_0091e000 + 0x4550) != 0)) {
    FUN_004108c0(*(int *)(DAT_0091e000 + 0x4550));
    return *(int *)(param_1 + 0x3a4) != 0;
  }
  local_58 = DAT_008a2fb4;
  local_54 = DAT_008a2fb8;
  local_50 = DAT_008a2fbc;
  local_60 = 0.0;
  puVar5 = DAT_0092fe24;
  if (DAT_0092fe24 != DAT_0092fe24 + DAT_0092fe2c) {
    do {
      cVar2 = (*(code *)**(undefined4 **)*puVar5)(local_40,local_4c);
      if (cVar2 != '\0') {
        local_58 = fStack_10 + local_58;
        local_54 = local_54 + fStack_c;
        local_50 = fStack_8 + local_50;
        local_60 = local_60 + _DAT_0089096c;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_0092fe24 + DAT_0092fe2c);
    if (_DAT_00890968 < local_60) {
      fVar1 = _DAT_0089096c / local_60;
      local_60 = fVar1 * local_50;
      fStack_5c = -(local_58 * fVar1);
      iVar3 = FUN_00727480(&local_60,9,0);
      if (iVar3 != 0) {
        uVar4 = FUN_004306d0(*(undefined4 *)(iVar3 + 0x30));
        FUN_004108c0(uVar4);
      }
    }
  }
  return *(int *)(param_1 + 0x3a4) != 0;
}

