/* speed.exe 0079fb60 FUN_0079fb60; analysis pseudocode, not buildable source.
 * calls 0078c380 FUN_0078c380
 * calls 0078a310 FUN_0078a310
 * calls 0078a3a0 FUN_0078a3a0
 * calls 0079f090 FUN_0079f090
 * calls 0078b090 FUN_0078b090
 * calls 007359f0 FUN_007359f0
 * calls 0045ce40 FUN_0045ce40
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079fb60(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float local_414;
  undefined4 local_410;
  undefined1 local_40c [1024];
  int local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_414 = 0.0;
  FUN_0078a3a0(&local_414,0x20);
  piVar1 = &DAT_009b4254;
  do {
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 7;
  } while ((int)piVar1 < 0x9b42a8);
  if (DAT_009b4220 == 6) {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 1;
    iVar3 = 0xf;
    if (0xf < DAT_009b46d8) {
      iVar3 = DAT_009b46d8;
    }
    if (DAT_009b46dc < iVar3) {
      iVar3 = DAT_009b46dc;
    }
    FUN_0078a310(iVar3 - DAT_009b46d8,DAT_009b46d4);
    FUN_0078a310(local_414,0x20);
    uVar2 = FUN_0045ce40();
    fVar4 = (float10)FUN_007359f0(uVar2);
    local_414 = (float)fVar4;
    FUN_0078a310(local_414,0x20);
    FUN_0078a310(DAT_009b0fe4,0x20);
    FUN_0079f090(param_2);
    iVar3 = FUN_0078c380(param_2);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x88) == 3)) {
      local_414 = (float)local_c * _DAT_00890f14;
      local_410 = FUN_007c4b80();
      uVar5 = 0;
      uVar2 = FUN_007c4b80(0);
      FUN_0078b090(*(undefined4 *)(iVar3 + 0x9c),local_40c,uVar2,uVar5);
    }
  }
  return;
}

