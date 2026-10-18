/* speed.exe 0079fa30 FUN_0079fa30; analysis pseudocode, not buildable source.
 * calls 0079f400 FUN_0079f400
 * calls 0078a310 FUN_0078a310
 * calls 00735840 FUN_00735840
 * calls 007552a0 FUN_007552a0
 */

void FUN_0079fa30(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  if ((DAT_009b0858 != 0) && (*(int *)(DAT_00905dfc * 4 + 0x9b0fa8) != 0)) {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 1;
    iVar1 = 4;
    if (4 < DAT_009b46d8) {
      iVar1 = DAT_009b46d8;
    }
    if (DAT_009b46dc < iVar1) {
      iVar1 = DAT_009b46dc;
    }
    FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
    uVar2 = FUN_00735840();
    FUN_0078a310(uVar2,0x20);
    iVar1 = DAT_00905dfc;
    iVar3 = DAT_00905dfc;
    if (DAT_00905dfc < DAT_009b4408) {
      iVar3 = DAT_009b4408;
    }
    if (DAT_009b440c < iVar3) {
      iVar3 = DAT_009b440c;
    }
    FUN_0078a310(iVar3 - DAT_009b4408,DAT_009b4404);
    uVar4 = param_2 & 0xf;
    if ((int)(param_2 & 0xf) < (int)DAT_009b4570) {
      uVar4 = DAT_009b4570;
    }
    if ((int)DAT_009b4574 < (int)uVar4) {
      uVar4 = DAT_009b4574;
    }
    FUN_0078a310(uVar4 - DAT_009b4570,DAT_009b456c);
    FUN_007552a0(iVar1,local_40c,param_2);
    FUN_0079f400(param_1,4,local_40c,0);
  }
  return;
}

