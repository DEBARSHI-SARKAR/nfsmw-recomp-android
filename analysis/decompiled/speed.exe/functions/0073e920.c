/* speed.exe 0073e920 FUN_0073e920; analysis pseudocode, not buildable source.
 * calls 0045e300 FUN_0045e300
 * calls 006bd900 FUN_006bd900
 * calls 00444fe0 FUN_00444fe0
 * calls 006bdd20 FUN_006bdd20
 * calls 006bdd50 FUN_006bdd50
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdc60 FUN_006bdc60
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_0073e920(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_8c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_50 [76];
  
  (**(code **)(*param_1 + 4))();
  if (param_2 < 0x18) {
    iVar5 = param_1[1];
    iVar1 = param_1[param_2 + 0xd];
    iVar7 = *(int *)(iVar5 + 0x1628);
    if (iVar7 <= *(int *)(iVar5 + 0x162c)) {
      iStack_8c = iVar7 * 4 + param_2 * 0x14 + 0xb84;
      do {
        if ((*(byte *)(iStack_8c + iVar5) & 1) != 0) {
          return;
        }
        if (iVar1 != 0) {
          iVar5 = iVar1 + 0x20;
          FUN_00444fe0(auStack_50,param_4);
          FUN_0045e300(auStack_50,auStack_50);
          FUN_006bd900(iVar5,param_4,auStack_50);
          fVar2 = *(float *)(iVar1 + 0x10);
          fVar3 = *(float *)(iVar1 + 0x14);
          fVar4 = *(float *)(iVar1 + 0x18);
          fStack_70 = fVar2;
          fStack_6c = fVar3;
          fStack_68 = fVar4;
          FUN_006bdd50(iVar5,iVar5,&fStack_70);
          iVar6 = FUN_007c4b80();
          FUN_006bdbb0(iVar5,iVar5,iVar6 / 0x168);
          iVar6 = FUN_007c4b80();
          FUN_006bdc60(iVar5,iVar5,iVar6 / 0x168);
          iVar6 = FUN_007c4b80();
          FUN_006bdd20(iVar5,iVar5,iVar6 / 0x168);
          fStack_60 = -fVar2;
          fStack_5c = -fVar3;
          fStack_58 = -fVar4;
          FUN_006bdd50(iVar5,iVar5,&fStack_60);
          FUN_006bd900(iVar5,iVar5,param_4);
        }
        iStack_8c = iStack_8c + 4;
        iVar5 = param_1[1];
        iVar7 = iVar7 + 1;
      } while (iVar7 <= *(int *)(iVar5 + 0x162c));
    }
  }
  return;
}

