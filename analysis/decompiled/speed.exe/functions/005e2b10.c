/* speed.exe 005e2b10 FUN_005e2b10; analysis pseudocode, not buildable source.
 * calls 0045f640 FUN_0045f640
 * calls 0045f7c0 FUN_0045f7c0
 * calls 00454810 FUN_00454810
 * calls 005e2a50 FUN_005e2a50
 * calls 006269b0 FUN_006269b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e2b10(int param_1)

{
  float fVar1;
  char *pcVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar3 = (undefined4 *)FUN_00454810(0x5ef34802,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_006269b0(4);
  }
  pcVar2 = (char *)*puVar3;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    local_30 = *(undefined4 *)(param_1 + 0x58);
    local_2c = *(undefined4 *)(param_1 + 0x5c);
    local_28 = *(undefined4 *)(param_1 + 0x60);
    pfVar4 = (float *)FUN_00454810(0x394abbc6,0);
    if (pfVar4 == (float *)0x0) {
      pfVar4 = (float *)FUN_006269b0(4);
    }
    fVar1 = *pfVar4;
    if (_DAT_00890968 < fVar1) {
      local_24 = 0;
      local_20 = 0x3f800000;
      local_1c = 0;
      FUN_0045f7c0(&local_3c,&local_24,param_1 + 0x68);
      local_3c = local_3c * fVar1;
      local_38 = local_38 * fVar1;
      local_34 = local_34 * fVar1;
      FUN_0045f640(local_18,&local_30,&local_3c,0xbf800000);
      FUN_0045f640(local_c,&local_30,&local_3c,0x3f800000);
      uVar5 = FUN_005e2a50(pcVar2,local_18);
      *(undefined4 *)(param_1 + 0xb8) = uVar5;
      uVar5 = FUN_005e2a50(pcVar2,local_c);
      *(undefined4 *)(param_1 + 0xbc) = uVar5;
      return;
    }
    uVar5 = FUN_005e2a50(pcVar2,&local_30);
    *(undefined4 *)(param_1 + 0xb8) = uVar5;
  }
  return;
}

